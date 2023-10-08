#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double xp; // вхідний аргумент
	double xk; // вхідний аргумент
	double dx; // вхідний аргумент
	double R; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "R = "; cin >> R;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x <= -R)
			y = R;
		else
			if (-R < x && x <= R)
				y = R - std::sqrt(R * R - x * x);
			else
				if (R < x && x <= 6)
					y = R + ((-3 - R) / (6 - R)) * (x - R);
				else
					y = -3 + ((0 + 3) / (9 - 6)) * (x - 6);
		cout << endl;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
		
	}
	cout << "__________" << endl;
	return 0;
}
