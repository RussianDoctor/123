#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    setlocale(0, "");
    srand(unsigned(time(NULL)));
    int N, M;
    cout << "Введите размер двумерного массива." << endl;
    cout << "Строки: ";
    cin >> N;
    cout << "Столбцы: ";
    cin >> M;
    int** A = new int* [N];
    for (int i = 0; i < N; i++)
        A[i] = new int[M];

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            A[i][j] = ((rand() % 10));
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
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < num - 1; j++)
            cout << A[i][j] << " ";
        for (int j = 0; j < 1; j++)
            A[i][j] = ((rand() % 10));
        for (int j = 0; j < num + 1; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }

    system("pause");
}
