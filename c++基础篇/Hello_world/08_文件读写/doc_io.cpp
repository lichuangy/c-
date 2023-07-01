#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main() {
	//input 流式读对象
	ifstream input("io_input.txt");
	ofstream output("io_output.txt");

	//1.按单词逐个读取
	//string word;
	//while (input >> word)
	//{
	//	cout << word << endl;
	//}

	//2.按字符读取
	//char a;
	//while (input >> a)
	//	cout << a << endl;

	//3.按行读取
	//string str;
	//while (getline(input, str))
	//	cout << str << endl;

	//4.写入到文件中
	char b;
	while ( input >> b )
	{
		output << b<< endl;
	}


	system("pause");
}