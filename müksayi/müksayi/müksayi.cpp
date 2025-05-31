// müksayi.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

using namespace std;

int main()
{
    
    int a;
    cin >> a;
    int count = 0;
    int temp = 0;

    for (int i = 1; i < a; i++)
    {

        count++;

        if (a % count == 0)
        {


            cout << count << endl;
            temp = temp + count;

        }



    }
   


    if (temp == a)
    {

        cout << "muk sayi:"<< temp << endl;
        
    }
    else
    {


        cout << "muk sayi degil:" << temp << endl;
       
    }

    
    
    int z;
    cin >> z;
}


