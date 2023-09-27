#include <iostream>

using namespace std;

int main()
{
	double x;
	double z1;
	double z2;

	cout << "x ="; cin >> x;

	z1 = (1 - 2 * pow(sin(x), 2)) / (1 + sin(2 * x));
	z2 = (1 - tan(x)) / (1 + tan(x));

	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	return 0;
}
