#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	int s = 1;
	cout << "¬ведите катет s, больший чем 0" << endl;
	while (s != 0)
	{
		cin >> s;
		int k = s - 2;
		for (int i = 0; i < s; i++)
		{
			for (int j = 0; j < s; j++)
			{
				if (j > k)
				{
					cout << "  * ";
				}
				else
				{
					cout << "  ";
				}
			}
			cout << endl;
			k--;
		}
	}
}