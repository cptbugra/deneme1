// kabarcık bubble.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream> 
using namespace std;

int main()
{
    
    int x[10] = { 2,55,2,4,5,6,1,90,42,21 };
    int temp;
    int a = 90;


    for (int i = 0; i < 9; i++)
    {

        for (int j = 1+i; j < 10; j++)
        {

            if (x[i] > x[j])
            {

                temp = x[i];
                x[i] = x[j];
                x[j] = temp;



            }


        }


    }
     
    for (int i = 0; i < 10; i++)
    {
        cout << x[i] << endl;

    }
     
}


