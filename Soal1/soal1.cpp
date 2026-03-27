#include <iostream>
#include <cstdlib>
using namespace std;

int main() 
{
    system ("cls");
    int angka[5];

    cout << "INPUT : ";
    for(int i = 0; i < 5; i++) {
        cin >> angka[i];
    }

    cout << "OUTPUT : ";
    for(int i = 4; i >= 0; i--) {
        cout << angka[i] << " ";
    }

    return 0;
}