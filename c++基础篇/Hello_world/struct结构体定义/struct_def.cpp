#include<iostream>
#include<string>

using namespace std;

//����ѧ����Ϣ�ṹ��
struct StudentInfo
{
	string name;
	int age;
	double score;
	double score;
}stu2, stu3 = {"ls",16,75.7};  //�����ڶ���ṹ��������������

int main() {
	//�������ݶ��󲢳�ʼ��  
	StudentInfo stu1 = {"zs",16,78.3};

	//ʹ�ýṹ���ʼ���ṹ��S
	StudentInfo stu4 = stu3;

	//��ӡ�ṹ�壬ͨ��.��������ʽṹ���Ա ���������޸���ֵ
	cout << stu1.name <<  stu1.age << stu1.score << endl;

	system("pause");
}