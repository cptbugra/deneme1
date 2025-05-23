#include <iostream>

using namespace std;

int main()
{
   
    int x[5] = { 61,64,51,28,32 };

    int a = 51;
    int b = 28;

    for (int i = 0; i < 5; i++)
    {


        if (a > x[i])
        {

            a = x[i];
           
            

        }
        else if (b < x[i])
        {


            b = x[i];
            

        }


    }
    cout << a << endl;
    cout << b << endl;



}
