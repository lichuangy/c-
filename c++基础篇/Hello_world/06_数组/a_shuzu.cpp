#include <iostream>
using namespace std;

int main()
{
    /*
  
    // һά����

    int n[10]; // n ��һ������ 10 ������������

    // ��ʼ������Ԫ��          
    for (int i = 0; i < 10; i++)
    {
        n[i] = i + 100; // ����Ԫ�� i Ϊ i + 100
    }

    // ���������ÿ��Ԫ�ص�ֵ                     
    for (int j = 0; j < 10; j++)
    {
        cout << "a[" << j << "]: " << n[j] << endl;
    }
      */

        // һ������ 5 �� 2 �е�����
        int a[5][2] = { {0,0}, {1,2}, {2,4}, {3,6},{4,8} };

        // ���������ÿ��Ԫ�ص�ֵ                      
       /*
       * 1.��ͳ
        for (int i = 0; i < 5; i++)
            for (int j = 0; j < 2; j++)
            {
                cout << "a[" << i << "][" << j << "]: ";
                cout << a[i][j] << endl;
            }

        2.����
        int arow = sizeof(a)/sizeof(a[0])
        int acol = sizeof(a[0]/a[0][0])
             for (int i = 0; i < arow; i++)
                for (int j = 0; j < acol; j++)
                {
                    cout << "a[" << i << "][" << j << "]: ";
                    cout << a[i][j] << endl;
                }

            */


        //c++11�µ����ݣ���������
        for(auto &x :a) 
            for(auto y : x)
        {
            cout << y << endl;
        }
    system("pause");
}