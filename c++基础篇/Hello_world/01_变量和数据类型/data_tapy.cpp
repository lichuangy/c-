#include<iostream>

using namespace std;

int main()
{
	int a;
	long b;
	float c;
	double d;
	char e;
	a = 10;
	b = a + 3;
	c = a++;
	d = c--;
	e = 'a' + 1;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	cout << e << endl;

	system("pause");
}