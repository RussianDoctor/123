#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int mas[100];
    int leight, b, c, smesh;
    for (int i = 0; i < 100; i++) {
        mas[i] = rand() % 100;
    }
    for (int h = 0; h < 100; h++) {
        cout << mas[h] << " ";
    }
    cout <<"\n Длина массива ";
    cin >> leight;
    cout << endl << "Удалить номер " << endl;
    cin >> b;
    for (int i = 0; i < leight; i++)
    {
        if (mas[i] == b)
        {
            for (long c = i; c < i; ++i)
            {
                mas[c] = mas[c + 1];
            }

        }
    }
    cout << "Напишите размер смещения:";
    cin >> smesh;
    for (int l = 0; l < smesh; l++) {
        mas[l] = mas[l + 1];
    }
    for (int h = 0; h < leight; h++) {
        cout << mas[h] << " ";
    }
}
