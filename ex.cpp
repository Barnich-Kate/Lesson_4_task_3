#include <iostream>

using namespace std;

void max (int a, int b, int c) {
    if (a > b && a > c) {
        cout << "It is first number: " << a << endl;
    } else if (b > a && b > c) {
        cout << "It is second number: " << b << endl;
    } else if (c > a && c > b) {
        cout << "It is third number: " << c << endl;
    }
        
}

int main()
{
    int a = 10, b = 2, c = 6;
    max (a, b, c);
    int d = 3, e = 10, f = 1;
    max (d, e, f);
    int g = 1, h = 3, j = 10;
    max (g, h, j);
    

    return 0;
}
