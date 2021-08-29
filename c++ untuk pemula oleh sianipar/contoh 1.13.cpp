// Program ini mengilustrasikan bagaimana data di dalam
// variabel dimanipulasi.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int angka1, angka2;
    double penjualan;
    char pertama;
    string str;

    angka1 = 4;
    cout << "angka1 = " << angka1 << endl;
 
    angka2 = 4 * 5 - 11;
    cout << "angka2 = " << angka2 << endl;

    penjualan = 0.02 * 1000;
    cout << "penjualan = " << penjualan << endl;

    pertama = 'D';
    cout << "pertama = " << pertama << endl;

    str = "Hari ini cuaca cerah.";
    cout << "str = " << str << endl;

    return 0;
}