#include<iostream>

using namespace std;

int main()
{
	//����
	int a = 10, b = 30;
	// ��һ�� ref����a,��β���ref���ǲ���a��
	int& ref = a; 
	cout << ref << endl;
	cout << &ref << endl;
	cout << &a << endl;
	ref = b; //�ȼ� a = b;
	cout << ref << endl;
	cout << a << endl;

	//���õ�����
	int& rref = ref;
	rref = 36;
	cout << ref << endl;
	cout << rref << endl;
	cout << a << endl;


	system("pause");
}