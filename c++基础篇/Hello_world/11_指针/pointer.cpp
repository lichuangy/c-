#include<iostream>

using namespace std;

int main()
{
	//����ָ��
	int* p;
	int* q;
	long long* x;
	cout << sizeof(p) << endl;
	cout << sizeof(q) << endl;
	cout << sizeof(x) << endl;

	//ָ���ʹ��
	// ��*Ϊ���ݣ���*Ϊ��ַ
	int a = 10;
	int b = 20;
	p = &a;
	q = &b;
	cout << &a << endl;
	cout << &b << endl;
	cout << p << endl;
	cout << q << endl;

	//�޸�p��ֵ
	*p = 15;
	cout << a << endl;
	//�޸�p��ֵҲ���޸�a��ֵ����Ϊp�洢�ľ���a�ĵ�ַ
	system("pause");
}