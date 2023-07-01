#include <iostream>
using namespace std;

int main()
{
    /*
  
    // 一维数组

    int n[10]; // n 是一个包含 10 个整数的数组

    // 初始化数组元素          
    for (int i = 0; i < 10; i++)
    {
        n[i] = i + 100; // 设置元素 i 为 i + 100
    }

    // 输出数组中每个元素的值                     
    for (int j = 0; j < 10; j++)
    {
        cout << "a[" << j << "]: " << n[j] << endl;
    }
      */

        // 一个带有 5 行 2 列的数组
        int a[5][2] = { {0,0}, {1,2}, {2,4}, {3,6},{4,8} };

        // 输出数组中每个元素的值                      
       /*
       * 1.传统
        for (int i = 0; i < 5; i++)
            for (int j = 0; j < 2; j++)
            {
                cout << "a[" << i << "][" << j << "]: ";
                cout << a[i][j] << endl;
            }

        2.提升
        int arow = sizeof(a)/sizeof(a[0])
        int acol = sizeof(a[0]/a[0][0])
             for (int i = 0; i < arow; i++)
                for (int j = 0; j < acol; j++)
                {
                    cout << "a[" << i << "][" << j << "]: ";
                    cout << a[i][j] << endl;
                }

            */


        //c++11新的内容，遍历数组
        for(auto &x :a) 
            for(auto y : x)
        {
            cout << y << endl;
        }
    system("pause");
}