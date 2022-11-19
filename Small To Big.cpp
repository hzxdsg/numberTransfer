#include <iostream>
#include <cmath>
using namespace std;

int high = 0;
int flag = 0;
int mark = 0;

/*
�˺��������ж�����ĴӼ�������������Ƿ���Ч
���������ݴ���ǧ�ڻ��Ǻ�����ĸʱ����Ч����
*/
bool isAvailable(std::string inputNum) {
	std::string::iterator pInputNum = inputNum.begin();

	//�������������

	for ( ; pInputNum < inputNum.end() ; pInputNum ++) {

		if (high == 0 && *pInputNum == '0') {
			flag = 1;
			high++;
			continue;
		}

		if (flag) {
			if (*pInputNum != NULL)
				std::cout << "���ַ�Ϊ0�����Ϸ�" ;
			mark = 1;
			return false;
		}

		if (*pInputNum > '9' || *pInputNum < '0') {
			std::cout << "���������֣����������ַ�" ;
			return false;
		}
		high ++;
	}

//�������ֵ�λ�������ܳ���12���������Ƿ�����
	if (high > 12) {
		std::cout << "�������ݹ���Ŀǰֻ֧��Ǫ��" ;
		return false;
	}
	return true;
}



/*
string������ת��Ϊdouble��
*/
void stringTranslate2Double(string inputStr, double &inputDouble) {
	inputDouble = atof(const_cast<const char *>(inputStr.c_str()));
}


int main() {
	std::string sNum;
	double dNum;
	const std::string NUM[10] = {"��", "Ҽ", "��", "��", "��", "��", "½", "��", "��", "��"};
	const std::string UNIT[] = { "ʰ", "��", "Ǫ", "��", "ʰ", "��", "Ǫ", "��", "ʰ", "��", "Ǫ"};
	{
		high = 0 ;
		int mNum = 0;
		bool FrontNumberIsZero = false;
		std::cout << "�������ת������ֵ��" << std::endl;
		std::cin >> sNum;
		//�˳�ѭ��


		if (isAvailable(sNum)) {
			std::cout << "ת����Ϊ��\n";

			if (flag == 1) {
				cout << "��Ԫ��";
			}

			else {

				stringTranslate2Double(sNum, dNum);
				//std::cout<<dNum<<std::endl;
				//������������
				while (high != 0 && high != 1) {
					mNum = dNum / (pow(10, high - 1));   //ȡ���λ��ΪmNum
					dNum = dNum - (pow(10, high - 1)) * mNum;  //ȥ�����λ
					if (mNum == 0) {
						FrontNumberIsZero = true;
						switch (high) {				//4λ�з�
							case 9:
								std::cout << UNIT[high - 2];
								//FrontNumberIsZero = false;
								break;
							case 5:
								std::cout << UNIT[high - 2];
								//FrontNumberIsZero = false;
								break;
							case 1:
								std::cout << UNIT[high - 2];
								//FrontNumberIsZero = false;
								break;
							default:
								break;
						}
					} else {
						if (FrontNumberIsZero) {
							std::cout << NUM[0];
						}
						FrontNumberIsZero = false;
						std::cout << NUM[mNum] << UNIT[high - 2];
					}

					high--;
				}

				if (high == 1) {
					mNum = dNum / (pow(10, high - 1));   //ȡ���λ��ΪmNum
					dNum = dNum - (pow(10, high - 1)) * mNum;  //ȥ�����λ
					std::cout << NUM[mNum];
				}
				std::cout << "Ԫ��";
			}
		}
	}
	return 0;
}

