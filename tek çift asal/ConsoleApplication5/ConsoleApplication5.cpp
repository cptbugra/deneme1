// ConsoleApplication5.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

using namespace std;
int main()
{
    int x[100];
    

    for (int i = 1; i <= 100; i++)
    {

        x[i-1] = i;

       
        for (int k = 2; k < i; k++)
        {

            if (i % k == 0)
            {
                cout << "asal değil:" << i << "-----"<< i*20 << endl;
                break;

            }
            


        }


        if (i % 2 == 0)
        {
            cout << "cift sayi:" << i << "-----" << i * i * i << endl;
            cout << endl;

        }
        
        else if (i % 2 != 0)
        {

            cout << "tek sayi:" << i << "-----" << i * i << endl;
            cout << endl;

        }
       
      



       


    }




    
}
