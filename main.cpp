#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	double v = 0;
	cout << "Inter V: "; cin >> v;
	double t = 0;
	cout << "Inter T: "; cin >> t;
  double a = 0;
  a = asin(9.8 * t / 2 * v);
  cout << "Ugol = " << a*(90/asin(1.0)) << endl;
	return 0;
}

