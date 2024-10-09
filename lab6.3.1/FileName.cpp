#include <iostream>
#include <iomanip>

using namespace std;

void Min(int* a, const int size, int& min, int& imin, int j)
{
	if (min > a[j])
	{
		min = a[j];
		imin = j;
	}
	if (j < size - 1)
		Min(a, size, min, imin, j + 1);
}
void Sort(int* a, const int size, int i) 
{ 
	int min = a[i];
	int imin = i;
	Min(a, size, min, imin, i + 1);
	a[imin] = a[i];
	a[i] = min;

	if (i < size - 2)
		Sort(a, size, i + 1);
}
void Print(int* a, const int size, int i)
{
	cout << setw(4) << a[i];
	if (i < size - 1)

		Print(a, size, i + 1);
	else
		cout << endl;
}
int main()
{
	const int n = 12;
	int a[n] = { 9, 3, 7, 5, 8, 32, 45, 67, 1, 1, 4, 5 };
	Print(a, n, 0);
	Sort(a, n, 0);
	Print(a, n, 0);
	return 0;
}
