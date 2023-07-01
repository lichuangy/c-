#include<iostream>
#include<string>

using namespace std;

//定义学生信息结构体
struct StudentInfo
{
	string name;
	int age;
	double score;
	double score;
}stu2, stu3 = {"ls",16,75.7};  //可以在定义结构后立即创建对象

int main() {
	//创建数据对象并初始化  
	StudentInfo stu1 = {"zs",16,78.3};

	//使用结构体初始化结构体S
	StudentInfo stu4 = stu3;

	//打印结构体，通过.运算符访问结构体成员 ，还可以修改其值
	cout << stu1.name <<  stu1.age << stu1.score << endl;

	system("pause");
}