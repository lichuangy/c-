#include<iostream>
#include<string>
using namespace std;

int main() {
	
	//��ʼ��
	//Ĭ�ϳ�ʼ��
	string s1;
	//������ʼ��
	string s2 = s1;
	string s3 = "Hellow world";

	//ֱ�ӳ�ʼ��
	string s4("hellow world!");
	string s5(4,'h');
	cout << s5 << endl;

	//�����ַ�
	cout <<"s4[3] : " << s4[3] << endl; 

	s4[0] = 'H';
	cout << "s4 : " << s4 << endl;

	//����
	for(int i=0;i<s4.size();i++)
	s4[i] = toupper(s4[i]);
	cout << "s4 : " << s4 << endl;


	//ƴ��
	string str1 = "hellow", str2("world!");
	cout << "str1: " << str1 << endl;

	string str3 = str1 + str2;
	cout << str3 << endl;

	// str5 = "hellow" + "worlds!"; ����ƴ�Ӳ���ȫ�ó���ƴ��

	//�ַ����Ƚ�
	str1 = "hellow";
	str2 = "hellow world";
	str3 = "hehehhehe";
	cout << (str1 == str2 ? "true" : "false") << endl;
	cout << (str1 < str2 ? "true" : "false") << endl;
	cout << (str1 >= str3 ? "true" : "false") << endl;

	system("pause");
}