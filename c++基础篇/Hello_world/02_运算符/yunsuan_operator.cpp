#include<iostream>

using namespace std;

int main()
{
	/*
	int a = 21;
	int b = 10;
	int c;
	

	c = a + b;
	cout << "Line 1 - c ��ֵ�� " << c << endl;
	c = a - b;
	cout << "Line 2 - c ��ֵ�� " << c << endl;
	c = a * b;
	cout << "Line 3 - c ��ֵ�� " << c << endl;
	c = a / b;
	cout << "Line 4 - c ��ֵ�� " << c << endl;
	c = a % b;
	cout << "Line 5 - c ��ֵ�� " << c << endl;

	int d = 10;   //  �����������Լ�
	c = d++;
	cout << "Line 6 - c ��ֵ�� " << c << endl;

	d = 10;    // ���¸�ֵ
	c = d--;
	cout << "Line 7 - c ��ֵ�� " << c << endl;
	*/

	/*
	
	if (a == b)
	{
		cout << "Line 1 - a ���� b" << endl;
	}
	else
	{
		cout << "Line 1 - a ������ b" << endl;
	}
	if (a < b)
	{
		cout << "Line 2 - a С�� b" << endl;
	}
	else
	{
		cout << "Line 2 - a ��С�� b" << endl;
	}
	if (a > b)
	{
		cout << "Line 3 - a ���� b" << endl;
	}
	else
	{
		cout << "Line 3 - a ������ b" << endl;
	}
	// �ı� a �� b ��ֵ 
	a = 5;
	b = 20;
	if (a <= b)
	{
		cout << "Line 4 - a С�ڻ���� b" << endl;
	}
	if (b >= a)
	{
		cout << "Line 5 - b ���ڻ���� a" << endl;
	}
*/
	/*
	int a = 5;
	int b = 20;
	int c;

	if (a && b)
	{
		cout << "Line 1 - ����Ϊ��" << endl;
	}
	if (a || b)
	{
		cout << "Line 2 - ����Ϊ��" << endl;
	}
	 �ı� a �� b ��ֵ
	a = 0;
	b = 10;
	if (a && b)
	{
		cout << "Line 3 - ����Ϊ��" << endl;
	}
	else
	{
		cout << "Line 4 - ������Ϊ��" << endl;
	}
	if (!(a && b))
	{
		cout << "Line 5 - ����Ϊ��" << endl;
	}
 */


	/*

	unsigned int a = 60;      // 60 = 0011 1100  
	unsigned int b = 13;      // 13 = 0000 1101
	int c = 0;

	c = a & b;             // 12 = 0000 1100
	cout << "Line 1 - c ��ֵ�� " << c << endl;

	c = a | b;             // 61 = 0011 1101
	cout << "Line 2 - c ��ֵ�� " << c << endl;

	c = a ^ b;             // 49 = 0011 0001
	cout << "Line 3 - c ��ֵ�� " << c << endl;

	c = ~a;                // -61 = 1100 0011
	cout << "Line 4 - c ��ֵ�� " << c << endl;

	c = a << 2;            // 240 = 1111 0000
	cout << "Line 5 - c ��ֵ�� " << c << endl;

	c = a >> 2;            // 15 = 0000 1111
	cout << "Line 6 - c ��ֵ�� " << c << endl;
	*/

int a = 21;
int c;

c = a;
cout << "Line 1 - =  �����ʵ����c ��ֵ = : " << c << endl;

c += a;
cout << "Line 2 - += �����ʵ����c ��ֵ = : " << c << endl;

c -= a;
cout << "Line 3 - -= �����ʵ����c ��ֵ = : " << c << endl;

c *= a;
cout << "Line 4 - *= �����ʵ����c ��ֵ = : " << c << endl;

c /= a;
cout << "Line 5 - /= �����ʵ����c ��ֵ = : " << c << endl;

c = 200;
c %= a;
cout << "Line 6 - %= �����ʵ����c ��ֵ = : " << c << endl;

c <<= 2;
cout << "Line 7 - <<= �����ʵ����c ��ֵ = : " << c << endl;

c >>= 2;
cout << "Line 8 - >>= �����ʵ����c ��ֵ = : " << c << endl;

c &= 2;
cout << "Line 9 - &= �����ʵ����c ��ֵ = : " << c << endl;

c ^= 2;
cout << "Line 10 - ^= �����ʵ����c ��ֵ = : " << c << endl;

c |= 2;
cout << "Line 11 - |= �����ʵ����c ��ֵ = : " << c << endl;


	system("pause");
}