// Lab_04_2.cpp
// Лазар Владислав
// Лабораторна робота No 4.2
// Табуляція функції, заданої формулою: функція однієї змінної.
// Варіант 11

#include <iostream>
#include <iomanip>

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
		<< setw(7) << "y" << "	|" << endl;
	cout << "---------------------------" << endl;

	for(x = xp; x <= xk; x += dx)
	{
		A = 2 * abs(5 - x);
		if (x <= -1)
		{
			B = exp(abs(2 + x));
		}
		else
		{
			if (x > -1 && x < 1)
			{
				B = sin(1 / abs(2 + x)) * sin(1 / abs(2 + x));
			}
			else
			{
				B = (cos(x) * cos(x)) / (1 + abs(sin(x)));
			}
		}
		y = A - B;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
	}
	cout << "---------------------------" << endl;
	return 0;
}