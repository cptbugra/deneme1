#include <iostream>

using namespace std;

int main()
{

	int x[5] = { 61,64,51,28,32 };
	int toplam = 0;
	int a;
	for (int i = 0; i < 5; i++)
	{

		toplam = x[i] + toplam;


	}

	a = toplam / 5;
	cout << a;

}