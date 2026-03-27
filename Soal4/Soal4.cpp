#include <iostream>
#include <cstdlib>
using namespace std;

int main() 
{
    system ("cls");
    int n;
    char huruf = 'A';

    cout << "INPUT  : ";
    cin >> n;

    cout << "OUTPUT : ";

    for(int i = 1; i <= n; i++) {

        for(int j = 1; j <= i; j++) {
            cout << huruf;
        }

        huruf++;
        if(i < n) 
        {
            cout << "\n         ";
        }
    }
}