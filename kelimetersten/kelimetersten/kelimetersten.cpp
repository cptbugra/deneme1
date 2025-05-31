// kelimetersten.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;

int main()
{
    

    char x[20] = "hellonigga";
    char y[20];

    for (int i = 0; i < 20; i++)
    {


        y[i] = x[19 - i];



    }
    for (int i = 0; i < 20; i++)
    {
        cout << y[i];


    }




}


