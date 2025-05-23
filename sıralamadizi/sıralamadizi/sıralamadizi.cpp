#include <iostream>

using namespace std;

int main()
{

    int x[6] = { 1,2,3,4,5,6 };
    int sizex = 6;
    int sizey = 6;
    int y[6];
    int a;
    cin >> a;
    int b = a;


    for (int i = 0; i < sizex; i++)
    {


        if (i == a)
        {

            y[i] = NULL;

        }
        else {

            y[i] = x[i];
        }

    }


    for (int l = a; l < sizey-1; l++)
    {
        y[l] = y[l + 1];
    }
    y[5] = 0;

    cout << y[0] << y[1] << y[2] << y[3] << y[4] << y[5];

    int u;
    cin >> u;
    

}
