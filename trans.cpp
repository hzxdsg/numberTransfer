#include<bits/stdc++.h>
#include <sstream>
using namespace std;
map<char,int>dir;
int main()
{
	dir['��']=0;
    dir['Ҽ']=1;
    dir['��']=2;
    dir['��']=3;
    dir['��']=4;
    dir['��']=5;
    dir['½']=6;
    dir['��']=7;
    dir['��']=8;
    dir['��']=9;
	string s1,s2;
	cin>>s1;
	for(int i=0;i<s1.size();i++)
	{
		cout<<dir[s1[i]];
	}
} 
