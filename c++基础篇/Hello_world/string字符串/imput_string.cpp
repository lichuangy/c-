#include<iostream>
#include<string>
using namespace std;

int main() 
{
	//读取键盘输入
	// 
	//遇到空白符（空格）停止,读取单词
	string str1,str2;
/*
	cin >> str1;
	cout << str1 << endl;

	cin >> str2;
	cout << str2 << endl;//输入hellow world 看结果

*/

	//cin >> str1 >> str2;
	//cout << str1 << str2 << endl;
	//string str;


	//getline()读取一行
	//string str3;
	//getline(cin, str3);
	//cout << str3 << endl;

	//cin.get读取一个字符
	char ch;
	ch = cin.get();
	cout << ch << endl;

	system("pause");
}