#include<iostream>

using namespace std;


class Box
{
public:
    double length;   // 长度
    double breadth;  // 宽度
    double height;   // 高度

};


int main()
{
    Box Box1;
    Box Box2;
    double volume = 0.0;

    Box1.length = 15;
    Box1.breadth = 10;
    Box1.height = 3;

    volume = Box1.length * Box1.breadth * Box1.height;

    cout << volume << endl;

    system("pause");
}