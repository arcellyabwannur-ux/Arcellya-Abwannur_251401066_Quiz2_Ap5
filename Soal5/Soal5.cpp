#include <iostream>
#include <cstdlib>
using namespace std;

int main() 
{
    system ("cls");
    int a, b;

    cout << "INPUT  : ";
    cin >> a >> b;

    int x = a, y = b;

    while (y != 0) {
        int sisa = x % y;
        x = y;
        y = sisa;
    }

    cout << "OUTPUT : " << x;
}