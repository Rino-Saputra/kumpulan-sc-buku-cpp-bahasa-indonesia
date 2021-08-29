//Program kegagalan masukan

#include <iostream>

using namespace std;

int main()
{
    int a = 10; //Baris 1
    int b = 20; //Baris 2
    int c = 30; //Baris 3
    int d = 40; //Baris 4

    cout << "Baris 5: Masukkan empat integer: "; //Baris 5
    cin >> a >> b >> c >> d; //Baris 6
    cout << endl; //Baris 7

    cout << "Baris 8: Angka-angka yang Anda masukkan:"
         << endl; //Baris 8
    cout << "Baris 9: a = " << a << ", b = " << b
         << ", c = " << c << ", d = " << d << endl; //Baris 9

    return 0;
}