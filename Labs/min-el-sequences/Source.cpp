#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a, min, n = 0, b = 0;
	while (1 && b == 0)
	{
		cout << "\n������� a" << endl;
		cin >> a;
		if (a == 0)
		{
			cout << "\n������ ������� ������ ���� ������� �� ����";
			n++;
		}
		else
		{
			min = a;
			while (a != 0)
			{
				cout << "������� a" << endl;
				cin >> a;
				if (a != 0 && a < min)

					min = a;
			}
			cout << "min =" << min;
			n = 0;
		}
		if (n == 3)
		{
			cout << ",��������� �����������";
			b = 1;
		}
	}
	return 0;
}