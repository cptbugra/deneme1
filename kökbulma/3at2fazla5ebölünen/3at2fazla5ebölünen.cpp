// 3at2fazla5ebölünen.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    
    int a;
    int b;
    int c; 

    cout << "ax^2 + bx + c şeklindeki denklemin katsayılarını sırayla girin:" << endl;

    cin >> a >> b >> c;

    double d = b ^ 2 - (4 * a * c);

    if (d == 0)
    {


        cout << "kok:" << (-b) / (2 * a) << endl;


    }
    else if (d < 0)
    {


        cout << "kok yok" << endl;


    }
    else if (d > 0)
    {


        cout << "kok1:" << ((-b) + sqrt(d) )/ (2 * a);
        cout << "kok2:" << ((-b) - sqrt(d)) / (2 * a);

    }



    

}


