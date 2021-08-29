//*************************************************************
// Penulis: RH. Sianipar
//
// Program ini mengilustrasikan bagaimana menggunakan array 
// dua-dimensi dinamis.
//*************************************************************

#include <iostream>  
#include <iomanip>

using namespace std;

void isi(int **p, int, int);  
void tampil(int **p, int, int);

int main()
{
	int **larik;

	int jlhBaris; 
    int jlhKolom;

	cout << "Baris 11: Masukkan jumlah baris "
         << "dan kolom: ";
	cin >> jlhBaris >> jlhKolom;  
    cout << endl;

	//menciptakan baris-baris larik
    larik = new int* [jlhBaris];

	//menciptakan kolom-kolom larik
    for (int baris = 0; baris < jlhBaris; baris++)
		larik[baris] = new int[jlhKolom];

	//menyisipkan elemen-elemen ke dalam larik
    isi(larik, jlhBaris, jlhKolom);

	cout << "Baris 18: Larik:" << endl;

	//menampilkan isi larik
    tampil(larik, jlhBaris, jlhKolom);

	return 0;
}

void isi(int **p, int ukuranBaris, int ukuranKolom)
{
    for (int baris = 0; baris < ukuranBaris; baris++)
	{
        cout << "Masukkan " << ukuranKolom << " angka untuk nomor "
             << "baris " << baris << ": ";
        for (int kolom = 0; kolom < ukuranKolom; kolom++)
            cin >> p[baris][kolom];
        cout << endl;
	}
}

void tampil(int **p, int ukuranBaris, int ukuranKolom)
{
    for (int baris = 0; baris < ukuranBaris; baris++)
	{
        for (int kolom = 0; kolom < ukuranKolom; kolom++)
            cout << setw(5) << p[baris][kolom];
        cout << endl;
	}
}






