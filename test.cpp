
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




