// Lab_4_2.cpp
// Петренко Назар
// Лабораторна робота № 4.2
//  Табуляція функції, заданої формулою: функція однієї змінної
// Варіант 25
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
	{
		A = 8.1 + x * x * x;
		if (x < -3.5)
			B = 1 - 1 / (x * x * x * x * x);
		else
			if (-3.5 <= x && x < 1)
				B = 1 / tan(abs(x + 1));
			else
				B = atan(2 * x) - log10(x / 2);
		y = A + B;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}