#include<iostream>
using namespace std;
#include <string>

int main()
{
	string s;
	getline(cin, s);
	//�����ַ������һ�����ʵĳ���
	cout << s.substr(s.rfind(' ') + 1).size() << endl;
	//while(cin>>s)//ѭ������ÿһ������
	while (getline(cin, s))//����ÿ���ַ������һ�����ʵĳ���
	{
		cout << s.substr(s.rfind(' ') + 1).size() << endl;
	}
	return 0;
};