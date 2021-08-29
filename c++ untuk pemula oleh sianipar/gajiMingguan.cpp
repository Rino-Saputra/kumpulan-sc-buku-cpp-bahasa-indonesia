//Program: Gaji mingguan

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double gaji, gajiPerjam, jam;

    cout << fixed << showpoint << setprecision(2); //Baris 1
    cout << "Baris 2: Masukkan jam kerja dan gaji per jam: "; //Baris 2
    cin >> jam >> gajiPerjam; //Baris 3

    if (jam > 40.0) //Baris 4
        gaji = 40.0 * gajiPerjam +
                1.5 * gajiPerjam * (jam - 40.0); //Baris 5

    else //Baris 6
        gaji = jam * gajiPerjam; //Baris 7

    cout << endl; //Baris 8
    cout << "Baris 9: Gaji sebesar Rp." << gaji
         << endl; //Baris 9

    return 0;
}