#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, A, B, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{;
		if (x < 4)
			y = x * x + 1 + (4 * pow(x,7) - pow(x,5) + pow(x,3) - 2);
		else
			if (x >= 4 && x < 7)
				y = x * x + 1 + (atan((abs(x) + 1)/2) + 8.3 * x);
			else
				y = x * x + 1 + (log(abs(2 * x + exp(4 * x + 1))));
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}
