

#include <iostream>


using namespace std;




int main()
{
	int n;
	cin >> n;
	
	for (int i = 0; i <= n; i++)
	{
		

		for (int k = n-i; k >0; k--)
		{

			cout << " ";


		}


		for (int j = 0; j <= i; j++)
		{

			cout << "* ";


		}



		cout << endl;

	}




	for (int i = n; i >= 0; i--)
	{


		for (int k = n - i; k > 0; k--)
		{

			cout << " ";


		}


		for (int j = i; j >= 0; j--)
		{

			cout << "* ";


		}



		cout << endl;

	}

	int y;
	cin >> y;


	return 0;
}