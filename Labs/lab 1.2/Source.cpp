#include <iostream>
using namespace std;
int main()
{
	float n, m, a1, b2, c3;
	cin >> n;
	cin >> m;
	a1 = ++n * ++m;
	cout << "\n1) " << a1;
	b2 = m++ < n;
	cout << "\n2) " << b2;
	c3 = n++ > m;
	cout << "\n3) " << c3;
}
