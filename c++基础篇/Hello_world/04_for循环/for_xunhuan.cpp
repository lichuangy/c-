#include <iostream>
using namespace std;

int main()
{
    /*
   
    int a[4] = {1, 2, 3, 4}; 
    for (int a = 10; a < 20; a = a + 1)
    {
        cout << "a µÄÖµ£º" << a << endl;
    }
 */


        int a[4] = { 1, 2, 3, 4 };
        for (int& x : a)
        {
            cout << x << endl;
            x = 10;
        }
        for (int& x : a)
        {
            cout << x << endl;
        }

    system("pause");
}