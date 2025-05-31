// 1.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;

int main()
{
    
    int a = 1;
    int b = 1;
    int count;
    int temp;


    for (int i = 0; i <= 10;i++)
    {
        cout << a << endl;
        int temp = a + b;
        a = b;
        b = temp;
        

    }
   


}


