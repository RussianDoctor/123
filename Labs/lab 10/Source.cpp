#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	srand(unsigned(time(NULL)));
	int N, M;
	cout << "Введите размер двумерного массива." << endl;
	cout << "Строки: ";
	cin >> N;
	cout << "Столбцы: ";
	cin >> M;
	int** A = new int* [N];
	int* K = new int[N];
	for (int i = 0; i < N; i++)
		A[i] = new int[M];

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			A[i][j] = ((rand() % 10));
		K[i] = rand() % 10;
	}
	cout << endl << "Полученная матрица:" << endl << endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			cout << A[i][j] << " ";
		cout << endl;
	}
	int num;
	cout << endl << "Введите номер для вставки столбца: ";
	cin >> num;
	if (num > M + 1 || num == 0) cout<< "Некорректное значение\n";
	else {

		cout << "Новая матрица:" << endl;
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				if (num == j + 1)
					cout << "\t" << K[i];
				cout << "\t" << A[i][j];
				if (j == M - 1 && num == j + 2)
					cout << "\t" << K[i];
			}
			cout << endl;
		}
	}
	return 0;
}
