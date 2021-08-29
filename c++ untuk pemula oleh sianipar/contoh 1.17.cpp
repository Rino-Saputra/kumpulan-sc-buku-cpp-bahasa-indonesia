// Program ini mengilustrasikan bagaimana statemen pembacaan bekerja.

#include <iostream>

using namespace std;

int main()
{
    int kaki;
    int inci;
    cout << "Masukkan dua integer yang dipisahkan dengan spasi: ";
    cin >> kaki >> inci;
    cout << endl;
    cout << "Kaki = " << kaki << endl;
    cout << "Inci = " << inci << endl;

    return 0;
}