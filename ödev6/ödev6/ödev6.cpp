
#include <iostream>
#include <ctime>
#include <ctime>

using namespace std;

int main()
{
   

	srand(time(0));

	int sayi = rand() % 100;
	int hak = 10;
	int gelensayi;


	cout << "sayiyi gir:" << endl;
	
	cout << hak << " hak kaldi" << endl;



	for (int i = 0; i < hak; i++)
	{
		cin >> gelensayi;

		if (sayi == gelensayi)
		{


			cout << "helal buldun" << endl;
		}
		else if (sayi <= gelensayi)
		{


			cout << "cok soyledin" << endl;


		}
		else if (sayi >= gelensayi)
		{


			cout << "az soyledin" << endl;
		}
		

	}

	cout << " sayi:" << sayi << endl;

	int a;
	cin >> a;


	return 0;
}
