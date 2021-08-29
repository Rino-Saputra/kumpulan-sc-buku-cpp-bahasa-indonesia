// Program ini mengilustrasikan bagaimana menggunakan pencarian
// sekuensial di dalam program.

#include <iostream> //Baris 1

using namespace std; //Baris 2

const int UKURAN_ARRAY = 10; //Baris 3

int pencarianSek(const int list[], int panjangList, int itemCari); //Baris 4

int main() //Baris 5
{ //Baris 6
    int intList[UKURAN_ARRAY]; //Baris 7
    int angka; //Baris 8

    cout << "Baris 9: Masukkan " << UKURAN_ARRAY
         << " integer." << endl; //Baris 9

    for (int indeks = 0; indeks < UKURAN_ARRAY; indeks++) //Baris 10
        cin >> intList[indeks]; //Baris 11
    cout << endl; //Baris 12

    cout << "Baris 13: Masukkan angka yanga "
         << "akan dicari: "; //Baris 13
    cin >> angka; //Baris 14
    cout << endl; //Baris 15

    int pos = pencarianSek(intList, UKURAN_ARRAY, angka); //Baris 16

    if (pos!= -1) //Baris 17
        cout <<"Baris 18: " << angka
             << " ditemukan pada posisi " << pos
             << endl; //Baris 18
    else //Baris 19
        cout << "Baris 20: " << angka
             << " tidak ada di dalam list." << endl; //Baris 20

    return 0; //Baris 21
} //Baris 22

int pencarianSek(const int list[], int panjangList, int itemCari)
{
    int lok;
    bool ditemukan = false;
    lok = 0;

    while (lok < panjangList && ! ditemukan)
        if (list[lok] == itemCari)
            ditemukan = true;
        else
            lok++;

    if (ditemukan)
        return lok;
    else
        return -1;
}
