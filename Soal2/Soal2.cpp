#include <iostream>
using namespace std;

int main() 
{
    int angka, kuadrat, jumlah = 0;

    cout << "INPUT : ";
    cin >> angka;

    kuadrat = angka * angka;

    while (kuadrat != 0) {
        jumlah += kuadrat % 10;
        kuadrat /= 10;
    }

    if (jumlah == angka) {
        cout << "OUTPUT : ANGKA NEON";
    } else {
        cout << "OUTPUT : BUKAN ANGKA NEON";
    }
}