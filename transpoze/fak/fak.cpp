﻿#include <iostream>

using namespace std;

int main()
{




	int a[2][2] = { {4,3},{5,3} };
	int b[2][2];

	
	for (int i = 0; i < 2;i++)
	{
		for (int j = 0; j < 2;j++)
		{

			b[i][j] = a[j][i];

		}
		


	}
	
	cout << b[0][1] << endl;

	return 0;
}


	
	

