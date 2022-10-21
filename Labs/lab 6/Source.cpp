#include <bits/stdc++.h>
using namespace std;
bool stroka(string const& s)
{
    for (int i = 0; i < s.size(); i++)
        if (!isdigit(s[i]))
            return false;
    return true;
}
int main()
{
    string s, word;
    cout << "Введите строку\n";
    getline(cin, s);
    stringstream str(s);
    while (str >> word)
    {
        if (stroka(word))
            cout << "\b" << " ";
        else
            cout << word << " ";
    }
    system("pause");
    return 0;
}
