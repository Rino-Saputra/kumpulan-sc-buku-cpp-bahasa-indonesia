#include <iostream>

using namespace std;

int main()
{
    int angka;

    cout << "Masukkan sebuah integer: ";
    cin >> angka;
    cout << endl;

    if (0 <= angka <= 10)
        cout << angka << " berada dalam rentang 0 dan 10." << endl;
    else
        cout << angka << " tidak berada dalam rentang 0 dan 10." << endl;

    return 0;
}