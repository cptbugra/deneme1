

#include <iostream>


using namespace std;




int main()
{
	int n;
	cin >> n;

	for (int i = 0; i <= n; i++)
	{


		for (int j = 0; j <= n; j++)
		{


			if (i == 0 || i == n || j == 0 || j == n)
			{


				cout << "* ";
			}
			else
			{
				cout << "  ";

			}



		}
		cout << endl;

	}


	int a;
	cin >> a;

	return 0;
}