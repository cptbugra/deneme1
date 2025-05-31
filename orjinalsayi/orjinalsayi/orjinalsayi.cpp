// orjinalsayi.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>


using namespace std;

int main()
{
  
	int x;
	cin >> x;

	int a = x / 100;
	int b = x % 100;

	if (((a + b)* (a + b)) == x)
	{

		cout << "orj sayi: " << x << endl;

	}
	else
	{

		cout << "orjinal sayi degil:" << x << endl;

	}
}


