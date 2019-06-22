#include<iostream>
using namespace std;
#include <string>

int main()
{
	string s;
	getline(cin, s);
	//计算字符串最后一个单词的长度
	cout << s.substr(s.rfind(' ') + 1).size() << endl;
	//while(cin>>s)//循环接收每一个单词
	while (getline(cin, s))//计算每行字符串最后一个单词的长度
	{
		cout << s.substr(s.rfind(' ') + 1).size() << endl;
	}
	return 0;
};