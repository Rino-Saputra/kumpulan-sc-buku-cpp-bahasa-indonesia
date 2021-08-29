// Bagaimana menggunakan fungsi-fungsi terpradefinisi.
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    double u, v;
    string str;

    cout << "Baris 1: 2 dipangkat dengan 6 = "
         << static_cast<int>(pow(2.0, 6.0))
         << endl; //Baris 1

    u = 12.5; //Baris 2
    v = 3.0; //Baris 3

    cout << "Baris 4: " << u << " dipangkat dengan "
         << v << " = " << pow(u, v) << endl; //Baris 4

    cout << "Baris 5: akar kuadrat dari 24 = "
         << sqrt(24.0) << endl; //Baris 5

    u = pow(8.0, 2.5); //Baris 6
    cout << "Baris 7: u = " << u << endl; //Baris 7

    str = "Pemrograman dengan C++"; //Baris 8

    cout << "Baris 9: Panjang dari str = "
         << str.length() << endl; //Baris 9

    return 0;
}