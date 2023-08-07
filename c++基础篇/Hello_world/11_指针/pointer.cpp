#include<iostream>

using namespace std;

int main()
{
	//定义指针
	int* p;
	int* q;
	long long* x;
	cout << sizeof(p) << endl;
	cout << sizeof(q) << endl;
	cout << sizeof(x) << endl;

	//指针的使用
	// 有*为内容，无*为地址
	int a = 10;
	int b = 20;
	p = &a;
	q = &b;
	cout << &a << endl;
	cout << &b << endl;
	cout << p << endl;
	cout << q << endl;

	//修改p的值
	*p = 15;
	cout << a << endl;
	//修改p的值也会修改a的值，因为p存储的就是a的地址


	//指向指针的指针
	int** pr;
	pr = &p;
	cout << &pr << endl; // pr自己在内存中的地址
	cout << pr << endl; // 指向的p的地址
	cout << &p << endl; // p自己的地址
	cout << *pr << endl; //指向p指向的地址 即，p指向a的地址，pr也是指向的a的地址
	cout << p << endl;

	cout << &a << endl;
	cout << **pr << endl;


	system("pause");
}