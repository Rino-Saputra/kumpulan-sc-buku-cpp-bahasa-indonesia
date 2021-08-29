//Program ini membaca skor matakuliah dan menampilkan
//nilai matakuliah terkait.

#include <iostream>

using namespace std;

void dapatSkor(int& skor);
void tampilNilai(int skor);

int main()
{
    int skorMtKuliah;

    cout << "Baris 1: Berdasarkan pada skor matakuliah, \n"
         << " program ini menghitung "
         << "nilai matakuliah." << endl; //Baris 1

    dapatSkor(skorMtKuliah); //Baris 2

    tampilNilai(skorMtKuliah); //Baris 3

    return 0;
}

void dapatSkor(int& skor)
{
    cout << "Baris 4: Masukkan skor matakuliah: "; //Baris 4
    cin >> skor; //Baris 5

    cout << endl << "Baris 6: Skor matakuliah adalah "
         << skor << endl; //Baris 6
}

void tampilNilai(int cSkor)
{
    cout << "Baris 7: Nilai Anda untuk matakuliah ini adalah "; //Baris 7

    if (cSkor >= 90) //Baris 8
        cout << "A." << endl;
    else if (cSkor >= 80)
        cout << "B." << endl;
    else if(cSkor >= 70)
        cout << "C." << endl;
    else if (cSkor >= 60)
        cout << "D." << endl;
    else
        cout << "F." << endl;
}