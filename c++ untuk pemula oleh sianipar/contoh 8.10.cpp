// Array dua-dimensi sebagai parameter kepada fungsi.

#include <iostream>
#include <iomanip>

using namespace std;

const int JUMLAH_BARIS = 6;
const int JUMLAH_KOLOM = 5;

void tampilMatriks(int matriks[][JUMLAH_KOLOM], int JUMLAH_BARIS);
void jumBaris(int matriks[][JUMLAH_KOLOM], int JUMLAH_BARIS);
void terbesarBaris(int matriks[][JUMLAH_KOLOM], int JUMLAH_BARIS);

int main()
{
    int papan[JUMLAH_BARIS][JUMLAH_KOLOM]
             = {{23, 5, 6, 15, 18},
                {4, 16, 24, 67, 10},
                {12, 54, 23, 76, 11},
                {1, 12, 34, 22, 8},
                {81, 54, 32, 67, 33},
                {12, 34, 76, 78, 9}}; //Baris 1

    tampilMatriks(papan, JUMLAH_BARIS); //Baris 2
    cout << endl; //Baris 3

    jumBaris(papan, JUMLAH_BARIS); //Baris 4
    cout << endl; //Baris 5

    terbesarBaris(papan, JUMLAH_BARIS); //Baris 6

    return 0;
}

void tampilMatriks(int matriks[][JUMLAH_KOLOM], int jlhBaris)
{
    int baris, kolom;

    for (baris = 0; baris < jlhBaris; baris++)
    {
        for (kolom = 0; kolom < JUMLAH_KOLOM; kolom++)
            cout << setw(5) << matriks[baris][kolom] << " ";

        cout << endl;
    }
}

void jumBaris(int matriks[][JUMLAH_KOLOM], int jlhBaris)
{
    int baris, kolom;
    int jum;

    //Penjumlahan atas tiap baris secara terpisah
    for (baris = 0; baris < jlhBaris; baris++)
    {
        jum = 0;

        for (kolom = 0; kolom < JUMLAH_KOLOM; kolom++)
            jum = jum + matriks[baris][kolom];

        cout << "Penjumlahan baris " << (baris + 1) << " = " << jum
             << endl;
    }
}

void terbesarBaris(int matriks[][JUMLAH_KOLOM], int jlhBaris)
{
    int baris, kolom;
    int terbesar;

    //Elemen terbesar pada tiap baris
    for (baris = 0; baris < jlhBaris; baris++)
    {
        terbesar = matriks[baris][0]; //Diasumsikan bahwa elemen pertama
                                      //pada baris adalah yang terbesar.

        for (kolom = 1; kolom < JUMLAH_KOLOM; kolom++)
            if (terbesar < matriks[baris][ kolom])
                terbesar = matriks[baris][ kolom];

        cout << "Elemen terbesar pada baris " << (baris + 1)
             << " = " << terbesar << endl;
    }
}
