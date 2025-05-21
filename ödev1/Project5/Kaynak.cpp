#include <iostream>

using namespace std;



int toplamal(int a)
{
	int toplam = 0;
	int _x;

	for (int i = 0; i < a; i++)
	{
		cout << i + 1 << ". sayiyi giriniz" << endl;
		cin >> _x;

		toplam = toplam + _x;

	}

	return toplam/a;
}

int main()
{
	int x;
	int a;

	cout << "kac adet sayinin ortalamasi alinacak ?\n";
	cin >> x;


	cout << toplamal(x) << endl;

	cin >> a;


	return 0;

	
}