#include<iostream>

using namespace std;

int main()
{
	//引用
	int a = 10, b = 30;
	// 绑定一样 ref就是a,如何操作ref就是操作a，
	int& ref = a; 
	cout << ref << endl;
	cout << &ref << endl;
	cout << &a << endl;
	ref = b; //等价 a = b;
	cout << ref << endl;
	cout << a << endl;

	//引用的引用
	int& rref = ref;
	rref = 36;
	cout << ref << endl;
	cout << rref << endl;
	cout << a << endl;


	system("pause");
}