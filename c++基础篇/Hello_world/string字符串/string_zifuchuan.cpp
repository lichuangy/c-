#include<iostream>
#include<string>
using namespace std;

int main() {
	
	//初始化
	//默认初始化
	string s1;
	//拷贝初始化
	string s2 = s1;
	string s3 = "Hellow world";

	//直接初始化
	string s4("hellow world!");
	string s5(4,'h');
	cout << s5 << endl;

	//访问字符
	cout <<"s4[3] : " << s4[3] << endl; 

	s4[0] = 'H';
	cout << "s4 : " << s4 << endl;

	//遍历
	for(int i=0;i<s4.size();i++)
	s4[i] = toupper(s4[i]);
	cout << "s4 : " << s4 << endl;


	//拼接
	string str1 = "hellow", str2("world!");
	cout << "str1: " << str1 << endl;

	string str3 = str1 + str2;
	cout << str3 << endl;

	// str5 = "hellow" + "worlds!"; 错误拼接不能全用常量拼接

	//字符串比较
	str1 = "hellow";
	str2 = "hellow world";
	str3 = "hehehhehe";
	cout << (str1 == str2 ? "true" : "false") << endl;
	cout << (str1 < str2 ? "true" : "false") << endl;
	cout << (str1 >= str3 ? "true" : "false") << endl;

	system("pause");
}