//Array sebagai parameter pada fungsi

#include <iostream>

using namespace std;

const int UKURAN_ARRAY = 10;
void inisialisasiArray(int x[],int ukuranX);
void isiArray(int x[],int ukuranX);
void tampilArray(const int x[],int ukuranX);
int jumArray(const int x[],int ukuranX);
int indeksElemenTerbesar(const int x[],int ukuranX);
void salinArray(int list1[], int sumber, int list2[], int target, int jumElemen);

int main()
{
    int listA[UKURAN_ARRAY] = {0}; //Mendeklarasikan array listA
                                   //dengan 10 komponen dan
                                   //menginisialisasi setiap komponen
                                   //dengan 0.
    int listB[UKURAN_ARRAY]; //Mendeklarasikan array listB
                             //dengan 10 komponen.
    
	cout << "Baris 1: elemen-elemen listA: "; //Baris 1

	//Menampilkan elemen-elemen dari listA menggunakan
    //fungsi tampilArray
    tampilArray(listA, UKURAN_ARRAY); //Baris 2
    cout << endl; //Baris 3

	//Inisialisasi listB menggunakan fungsi
    //inisialisasiArray
    inisialisasiArray(listB, UKURAN_ARRAY); //Baris 4

    cout << "Baris 5: elemen-elemen listB: "; //Baris 5

    //Menampilkan elemen-elemen dari listB menggunakan
    //fungsi tampilArray
    tampilArray(listB, UKURAN_ARRAY); //Baris 6
    cout << endl; //Baris 7

	cout << "Baris 8: Masukkan " << UKURAN_ARRAY
         << " buah integer: "; //Baris 8

	//Membaca data ke dalam listA menggunakan
    //function fillArray
    isiArray(listA, UKURAN_ARRAY); //Baris 9
    cout << endl; //Baris 10
    cout << "Baris 11: Setelah mengisi listA, "
         << "elemen-elemennya adalah:" << endl; //Baris 11

	//Menampilkan elemen-elemen dari listA
    tampilArray(listA, UKURAN_ARRAY); //Baris 12
    cout << endl << endl; //Baris 13

    //Menghitung dan menampilkan penjumlahan atas
    //elemen-elemen dari listA
    cout << "Baris 14: Penjumlahan atas elemen-elemen "
         << "dari listA adalah: "
         << jumArray(listA, UKURAN_ARRAY) << endl
         << endl; //Baris 14

    //Mencari dan menampilkan posisi dari elemen
    //terbesar di dalam listA
    cout << "Baris 15: Posisi dari elemen terbesar "
         << "di dalam listA adalah: "
         << indeksElemenTerbesar(listA, UKURAN_ARRAY)
         << endl; //Baris 15

    //Menghitng dan menampilkan elemen terbesar
    //di dalam listA
    cout << "Baris 16: Elemen terbesar di dalam "
         << "listA adalah: "
         << listA[indeksElemenTerbesar(listA, UKURAN_ARRAY)]
         << endl << endl; //Baris 16

    //Menyalin elemen-elemen dari listA ke dalam listB 
    //menggunakan fungsi salinArray
    salinArray(listA, 0, listB, 0, UKURAN_ARRAY); //Baris 17
    cout << "Baris 18: Setelah penyalinan elemen-elemen "
         << "dari listA ke dalam listB," << endl
         << "Elemen-elemen dari listB adalah: "; //Baris 18

    //Menampilkan elemen-elemen dari listB
    tampilArray(listB, UKURAN_ARRAY); //Baris 19
    cout << endl; //Baris 20

    return 0;
}

//Fungsi untuk menginisialisasi sebuah array int dengan 0.
//Array yang akan diinisialisasi dan ukurannya dilewatkan
//sebagai parameter. Parameter ukuranList menetapkan
//jumlah elemen yang akan diinisialisasi.
void inisialisasiArray(int list[], int ukuranList)
{
    int indeks;

    for (indeks = 0; indeks < ukuranList; indeks++)
        list[indeks] = 0;
}

//Fungsi untuk membaca dan menyimpan data ke dalam sebuah array int.
//Array tempat penyimpanan dan ukurannya dilewatkan sebagai
//paramer. Parameter ukuranList menetapkan jumlah
//elemen yang akan dibaca.
void isiArray(int list[], int ukuranList)
{
    int indeks;

    for (indeks = 0; indeks < ukuranList; indeks++)
        cin >> list[indeks];
}

//Fungsi untuk menampilkan elemen-elemen sebuah array int.
//Array yang akan ditampilkan dan jumlah elemen dilewatkan
//sebagai parameter. Parameter ukuranList menetapkan
//jumlah elemen yang akan ditampilkan.
void tampilArray(const int list[], int ukuranList)
{
    int indeks;

    for (indeks = 0; indeks < ukuranList; indeks++)
        cout << list[indeks] << " ";
}

//Fungsi untuk menghitung dan menjadikan nilai balik penjumlahan
//elemen-elemen sebuah array int. Parameter ukuranList
//menetapkan jumlah elemen yang akan dijumlahkan.
int jumArray(const int list[], int ukuranList)
{
    int indeks;
    int jum = 0;

    for (indeks = 0; indeks < ukuranList; indeks++)
        jum = jum + list[indeks];

    return jum;
}

//Fungsi untuk mencari elemen terbesar pertama di dalam array int
//dan menjadikan indeksnya sebagai nilai balik. Parameter ukuranList
//menetapkan jumlah elemen di dalam array.
int indeksElemenTerbesar(const int list[], int ukuranList)
{
    int indeks;
    int indeksMaks  = 0; //assume the first element is the largest

    for (indeks = 1; indeks < ukuranList; indeks++)
        if (list[indeksMaks] < list[indeks])
            indeksMaks = indeks;

    return indeksMaks;
}

//Fungsi untuk menyalin semua atau beberapa elemen sebuah array
//ke dalam array lain. Dimulai dari posisi yang dispesifikasi
//oleh sumber, elemen-elemen dari list1 disalin ke dalam list2
//dimulai pada posisi yang dispesifikasi oleh target. Parameter
//jumElemen menetapkan jumlah elemen dari list1 
//yang akan disalin ke dalam list2. Dimulai pada posisi yang ditetapkan
//oleh target, list2 harus memiliki cukup komponen untuk menyalin
//elemen-elemen dari list1. Pemanggilan berikut menyalin semua
//elemen dari list1 ke dalam list2: 
//salinArray(list1, 0, list2, 0, jumElemen);
void salinArray(int list1[], int sumber, int list2[],
                int target, int jumElemen)
{
    for (int indeks = sumber; indeks < sumber + jumElemen; indeks++)
    {
        list2[indeks] = list1[target];
        target++;
    }
}
