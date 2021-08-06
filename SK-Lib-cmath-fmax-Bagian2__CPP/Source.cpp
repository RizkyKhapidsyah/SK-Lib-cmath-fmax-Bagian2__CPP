
#include <cmath>
#include <iomanip>
#include <iostream>
#include <conio.h>

/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
*/

using namespace std;

int main() {
	double val;
	val = fmax(10.0, 1.0);
	cout << fixed << setprecision(4) << "fmax(10.0, 1.0) = " << val << "\n";

	val = fmax(-10.0, 1.0);
	cout << fixed << setprecision(4) << "fmax(-10.0, 1.0) = " << val << "\n";

	val = fmax(-10.0, -1.0);
	cout << fixed << setprecision(4) << "fmax(-10.0, -1.0) = " << val << "\n";

	_getch();
	return 0;
}
