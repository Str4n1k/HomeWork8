#include <iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

void main()
{
	setlocale(LC_ALL, "");
	int a;
	int b;
	cout << "Введите первую переменную: " << endl; cin >> a;
	cout << "Введите вторую переменную: " << endl; cin >> b;
	a = a ^ b;
	b = a ^ b;
	a ^= b;
	cout << a << " " << b;
}