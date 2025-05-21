// ConsoleApplication3.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

using namespace std;

int main()
{
	int x;
	cout << "toplama : 1" << endl;
	cout << "cıkarma : 2" << endl;
	cout << "carpma : 3" << endl;
	cout << "bolme : 4" << endl;

	cin >> x;

	switch (x)
	{
		
		
	case 1:
	{
		
		cout << "toplama << endl";
		break;

	}
	case 2:
	{

		cout << "cıkarma << endl";
		break;

	}
	case 3:
	{

		cout << "carpma << endl";
		break;

	}
	case 4:
	{

		cout << "bolme << endl";
		break;

	}
	int a;
	cin >> a;

	return 0;


	}
	



}

