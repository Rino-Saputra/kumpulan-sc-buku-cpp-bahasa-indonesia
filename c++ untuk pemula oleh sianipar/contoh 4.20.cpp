//Program: Uji divisibilitas oleh 3 dan 9

#include <iostream >

using namespace std;

int main()
{
    int angka, temp, jum;

    cout << "Masukkan sebuah integer positif: ";
    cin >> angka;
    cout << endl;

    temp = angka;
    jum = 0;

    do
    {
        jum = jum + angka % 10; //mengekstrak dijit terakhir
                                //dan menambahkannya pada jum
        angka = angka / 10;     //menghapus dijit terakhir
    }
    while (angka > 0);

    cout << "Penjumlahan dari tiap dijit = " << jum << endl;

    if (jum % 3 == 0)
        cout << temp << " divisibel oleh 3" << endl;
    else
        cout << temp << " tidak divisibel oleh 3" << endl;

    if (jum % 9 == 0)
        cout << temp << " divisibel oleh 9" << endl;
    else
        cout << temp << " tidak divisibel oleh 9" << endl;

	return 0;
}