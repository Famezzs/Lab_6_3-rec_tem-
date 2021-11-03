// Lab_6_3.cpp
// Козубенко Андрій
// Лабораторна робота № 6.3
// Опрацювання одновимірних масивів за допомогою звичайних функцій та шаблонів.
// Варіант 10
// Рекурсивний спосіб
#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setw;

template <typename R>
void CreateArray(R *a, const int size, const int i)
{
	cout << "a[" << i << "] = "; cin >> a[i];
	if (i < size - 1)
		CreateArray(a, size, i + 1);
}

template <typename R>
void PrintArray(R *a, const int size, const int i)
{
	if (i == 0)
		cout << "a = " << "{";

	if (i < size)
	{
		cout << setw(4) << a[i];
		if (i != size - 1)
			cout << ",";

		PrintArray(a, size, i + 1);
	}
	else
		cout << " }\n";
}

template <typename R>
R MinElem(R *a, const int size, R min, const int i)
{
	if (i < size)
	{
		if (a[i] < min)
			min = a[i];
		return MinElem(a, size, min, i + 1);
	}
	else
		return min;
}

int main()
{
	int n;

	cout << "How many elements should a new array consist of?\n";
	cout << "n = "; cin >> n;

	if (n <= 0)
	{
		std::cerr << "Number of elements in an array should be > 0";
		return -1;
	}

	double *a = new double[n];

	CreateArray<double>(a, n, 0);
	PrintArray<double>(a, n, 0);

	cout << "Minimal element = " << MinElem<double>(a, n, a[0], 1) << endl;

	delete[] a;
	return 0;
}