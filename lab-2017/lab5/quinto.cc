#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	unsigned long long int f0 = 0, f1 = 1, f2, count = 20;
	do {
		cout << "Inserisci il # di numeri da calcolare (da 1 a 93): ";
		cin >> count;
	} while (count > 93 || count < 1);
	cout << "Numero #1: 1\n";
	for (int l = 2; l <= count; l++)
	{
		f2 = (f0 + f1);
		f0 = f1;
		f1 = f2;
		cout << "Numero # " << l << ": " << f2 << endl;
	}
	return (0);
}
