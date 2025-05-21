// ödev4.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>


using namespace std;

int main()
{
	int x;
	cout << "3 haneli sayiyi giriniz" << endl;
	cin >> x;

	int yuzler = (x / 100)*100;
	int onlar = ((x / 10) % 10)*10;
	int birler = (x % 10);

	cout << yuzler << endl;
	cout << onlar << endl;
	cout << birler << endl;

	int a;
	cin >> a;


	return 0;
}


