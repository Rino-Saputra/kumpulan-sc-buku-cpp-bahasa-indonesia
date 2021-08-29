//Contoh: scientific dan fixed

#include <iostream>

using namespace std;

int main()
{
    double jam = 35.45;
    double laju = 15.00;
    double toleransi = 0.01000;

    cout << "jam = " << jam << ", laju = " << laju
         << ", gaji = " << jam * laju
         << ", toleransi = " << toleransi << endl << endl;

    cout << scientific;
    cout << "Notasi ilmiah: " << endl;
    cout << "jam = " << jam << ", laju = " << laju
         << ", gaji = " << jam * laju
         << ", toleransi = " << toleransi << endl << endl;

    cout << fixed;
    cout << "Notasi desimal tetap: " << endl;
    cout << "jam = " << jam << ", laju = " << laju
         << ", gaji = " << jam * laju
         << ", toleransi = " << toleransi << endl << endl;

    return 0;
}