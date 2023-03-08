#include <iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;


int Factorial(int n);
double Power(double a, int n);
void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "Введите два числа: "; cin >> a >> b;

	cout << a << " ^ " << b << " = " << Power(a, b) << endl;
	int n;
	cout << "Введите число для вычисления факториала: "; cin >> n;
	cout << n << "! = " << Factorial(n) << endl;
}
int Factorial(int n)
{
	int f = 1;
	for (int i = 1; i <= n; i++)
	{
		f *= i;
	}
	return f;
}
double Power(double a, int n)
{
	double N = 1;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	return N;
}
