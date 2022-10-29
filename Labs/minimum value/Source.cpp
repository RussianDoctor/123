#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a, min, c = 1, n = 0, b = 0;
	while (b == 0)
	{
		cout << "\nВведите a" << endl;
		cin >> a;
		if (a == 0)
		{
			cout << "\nПервый элемент должен быть отличен от нуля";
			n++;
		}
		else
		{
			min = a;
			while (a != 0)
			{
				cout << "Введите a" << endl;
				cin >> a;
				if (a != 0 && a < min)
				{
					min = a;
					c = 0;
				}
				if (a != 0 && a == min)
					c++;
			}
			cout << "min = " << min << endl << "Количество минимальных элементов " << c << endl;
			n = 0;
		}
		if (n == 3)
		{
			cout << "Программа остановлена" << endl;
			b = 1;
		}
	}
	return 0;
}
