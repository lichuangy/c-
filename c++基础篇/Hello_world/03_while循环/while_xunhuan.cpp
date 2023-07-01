#include<iostream>

using namespace std;

int main()
{
	//定义变量 a 赋值为10
	int a = 10;

	//条件表达式，当a<20时 执行while循环体语句
	while (a<20)
	{
		//打印 a 值
		cout << a << endl;
		// a自增
		a++;
	}

	system("pause");
}