// ödev3.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

using namespace std;
int main()
{
	cout << "lutfen 3 adet notunuzu gırın (100 lük sistem)" << endl;

	double toplam = 0;
	double x;

	for (int i = 0; i < 3; i++)
	{

		cin >> x;
		toplam = toplam + x;


	}

	double y = toplam / 3;

	if (y >= 85)
	{


		cout << "A aldin" << endl;
		cout << "ortalaman:" << y << endl;

	}
	else if (y >= 70)
	{

		cout << "B aldin" << endl;
		cout << "ortalaman:" << y << endl;

	}
	else if (y >= 50)
	{

		cout << "C aldin" << endl;
		cout << "ortalaman:" << y << endl;

	}
	else if (y <= 49)
	{

		cout << "kaldin" << endl;
		cout << "ortalaman:" << y << endl;

	}



	int a;
	cin >> a;

	return 0;

}

