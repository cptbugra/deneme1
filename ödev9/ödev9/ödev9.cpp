

#include <iostream>

using namespace std;



int main()
{
    srand(time(0));
    int x[6];
    
    
    
    do
    {

        for (int i = 0; i <= 5; i++)
        {

            x[i] = (rand() % 58) + 1;

            cout << x[i] << endl;
        }

    } while (x[0] == x[1] || x[1] == x[2] || x[2] == x[3] || x[3] == x[4] || x[4] == x[5] || x[5] == x[0]);
    
  
    int a[6];
    a[0] = 0;
    a[1] = 0;
    a[2] = 0;
    a[3] = 0;
    a[4] = 0;
    a[5] = 0;



    int b;


    do
    {
        cout << "girin" << endl;

        for (int i = 0; i <= 5; i++)
        {
            cin >> b;
            a[i] = b;


        }

        cout << "dizi:" << a[0] << " " << a[1] << " " << a[2] << " " << a[3]<< " " << a[4] << " " << a[5] << endl;




    } while (a[0] == a[1] || a[1] == a[2] || a[2] == a[3] || a[3] == a[4] || a[4] == a[5] || a[5] == a[0]); 

    
   
    for (int k = 0; k <= 5; k++)
    {
        for (int l = 0; l <= 5; l++)
        {


            if (a[l] == x[k])
            {

                cout << "ayni olan terim " << x[k] << endl;
               
            }
            
            

        }


    }
    
    
 


    int y;
    cin >> y;

    return 0;
}
