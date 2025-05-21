// ödev8.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

using namespace std;


int main()
{


    int x[5];
    x[0] = 0;
    x[1] = 0;
    x[2] = 0;
    x[3] = 0;
    x[4] = 0;



    int a;


    do
    {
        for (int i = 0; i <= 4; i++)
        {
            cin >> a;
            x[i] = a;


        }

        cout << "dizi:" << x[0] << x[1] << x[2] << x[3] << x[4] << endl;




    } while (x[0] == x[1] || x[1] == x[2] || x[2] == x[3] || x[3] == x[4]);



    int d;
    cin >> d;

    return 0;
}