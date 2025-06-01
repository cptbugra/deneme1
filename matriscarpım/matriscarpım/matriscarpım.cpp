#include <iostream>

using namespace std;

int main()
{

    int x[2][3] = { {3,2,4},{7,2,1} };
    int y[3][2] = { {3,5},{5,7},{4,3} };
    int sum[2][2]{};



    for (int i = 0; i <= 2;i++)
    {

        sum[0][0] = sum[0][0] + x[0][i] * y[i][0];
        sum[0][1] = sum[0][1] + x[0][i] * y[i][1];
        sum[1][0] = sum[0][1] + x[1][i] * y[i][0];
        sum[1][1] = sum[1][1] + x[1][i] * y[i][1];

    }

    cout << sum[0][0];





    return 0;
}
