// seslikarakter.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

using namespace std;

int main()
{

    char x[5] = { 'a','e', 'o','i','u' };
    string a = "hava bu aralar çok guzel";

    for (int i = 0; i < a.length(); i++)
    {


        if (a[i] == x[0] || a[i] == x[1] || a[i] == x[2] || a[i] == x[3] || a[i] == x[4])
        {


            cout << a[i];


        }
        


    }




    
}


