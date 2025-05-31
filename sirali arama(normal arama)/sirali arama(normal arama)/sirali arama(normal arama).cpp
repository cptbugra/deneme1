
#include <iostream>

using namespace std;

int main()
{

    int  x[10] = { 12,45,2,3,4,5,6,634,2,1 };
    int a = 634;
    int i = 0;

    while (x[i] != a)
    {


        cout << i << endl;
        i++;
        if (x[i] == a)
        {


            cout << "aranan deger index : " << i << endl;


        }
    
    }



}

