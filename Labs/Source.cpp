#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    short a = 100;
    float b = 0.001;
    float c, d, e, f, g, h, i, j;
    c = pow(a + b, 4);
    d = pow(a, 4);
    f = 4 * pow(a, 3) * b;
    g = 6*pow(a, 2)* pow(b, 2);
    h = pow(b, 2);
    i = 4*pow(b, 3);
    j = pow(b, 4);
    float result1 = c-(d+f)/g+i*a+j;
    cout << "When float " << result1;
    double a1 = 100;
    double b1 = 0.001;
    double c1, d1, e1, f1, g1, h1,i1,j1;
    c1 = pow(a1 + b1, 4); 
    d1 = pow(a1, 4); 
    f1 = pow(a1, 3); 
    g1 = pow(a1, 2); 
    h1 = pow(b1, 2); 
    i1 = pow(b1, 3); 
    j1 = pow(b1, 4); 
    double result2 = c1 - (d1 + (4 * f1 * b1)) / (6 * g1 * h1) + (4 * a1 * i1) + j1;
    cout << "\nWhen double " << result2;
    cin.get();
    return 0;
}
