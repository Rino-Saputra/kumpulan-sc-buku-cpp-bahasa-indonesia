//Bagaimana menggunakan fungsi terpradefinisi.

#include <iostream>
#include <cmath>
#include <cctype>

using namespace std;

int main()
{
    int x;
    double u, v;

    cout << "Baris 1: Huruf besar a adalah "
         << static_cast<char>(toupper('a'))
         << endl; //Baris 1

    u = 4.2; //Baris 2
    v = 3.0; //Baris 3

    cout << "Baris 4: " << u << " dipangkat dengan "
         << v << " = " << pow(u, v) << endl; //Baris 4

    cout << "Baris 5: 5.0 dipangkat dengan 4 = "
         << pow(5.0, 4) << endl; //Baris 5

    u = u + pow(3.0, 3); //Baris 6

    cout << "Baris 7: u = " << u << endl; //Baris 7

    x = -15; //Baris 8
    cout << "Baris 9: Nilai absolut dari " << x
         << " = " << abs(x) << endl; //Baris 9

    return 0;
}