#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main() {
	//input ��ʽ������
	ifstream input("io_input.txt");
	ofstream output("io_output.txt");

	//1.�����������ȡ
	//string word;
	//while (input >> word)
	//{
	//	cout << word << endl;
	//}

	//2.���ַ���ȡ
	//char a;
	//while (input >> a)
	//	cout << a << endl;

	//3.���ж�ȡ
	//string str;
	//while (getline(input, str))
	//	cout << str << endl;

	//4.д�뵽�ļ���
	char b;
	while ( input >> b )
	{
		output << b<< endl;
	}


	system("pause");
}