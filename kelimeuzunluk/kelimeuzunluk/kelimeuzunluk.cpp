// kelimeuzunluk.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

using namespace std;


int main()
{

    int n;
    cin >> n;
    char* p = new char[n]();

    int count = 0;
    

    
    for (int i = 0; i < n; i++)
    {

        
        
        cin >> p[i];
        



    }


    for (int i = 0; i < n; i++)
    {



        if (p[i] != NULL)
        {

            count++;


        }




    }
    
    cout << count;

     


    delete[] p;
}


