#ifndef H_SenaraiBerantaiTerurut
#define H_SenaraiBerantaiTerurut

#include "senaraiBerantai.h"

//*******************************************************************
// Penulis: RH. Sianipar
//
// Kelas ini menspesifikasi anggota-anggota untuk mengimplementasikan
// beberapa watak dasar dari senarai berantai terurut. Kelas ini
// diderivasi dari kelas tipeSenaraiBerantai.
//*******************************************************************

template <class Tipe>
class senaraiBerantaiTerurut: public tipeSenaraiBerantai<Tipe>
{
public:
    bool cari(const Tipe& itemCari) const;
    //Fungsi untuk menentukan apakah itemCari di dalam senarai.
    //Postkondisi: Menghasilkan true jika itemCari berada di dalam senarai,
    //sebaliknya, nilai false dijadikan nilai balik.

    void sisip(const Tipe& itemBaru);
    //Fungsi untuk menyisipkan itemBaru di dalam senarai berantai.
    //Postkondisi: pointer pertama menunjuk ke item baru, itemBaru
    //disisipkan di tempat yang tepat di dalam senarai, dan
    //hitung didekremen sebesar 1.

    void sisipPertama(const Tipe& itemBaru);
    //Fungsi untuk menyisipkan itemBaru di awal senarai.
    //Postkondisi: pointer pertama menunjuk ke senarai baru, itemBaru
    //disisipkan di awal senarai, pointer akhir menunjuk ke
    //simpul akhir, dan hitung diinkremen sebesar 1.

    void sisipAkhir(const Tipe& itemBaru);
    //Fungsi untuk menyisipkan itemBaru di akhir senarai.
    //Postkondisi: pointer pertama menunjuk ke senarai baru, itemBaru
    //disisipkan di akhir senarai, pointer akhir menunjuk ke
    //simpul akhir, dan hitung diinkremen sebesar 1.

    void hapusSimpul(const Tipe& itemHapus);
    //Fungsi untuk menghapus itemHapus dari senarai.
    //Postkondisi: Jika ditemukan, simpul yang memuat itemHapus
    //dihapus dari senarai. Pointer pertama menunjuk ke simpul pertama,
    //pointer akhir menunjuk ke simpul terakhir dari senarai yang terperbarui
    //terperbarui, dan hitung didekremen sebesar 1.
};

//Tempatkan definisi atas fungsi cari, sisipSimpul, sisip
template <class Tipe>
bool senaraiBerantaiTerurut<Tipe>::
                              cari(const Tipe& itemCari) const
{
    bool ditemukan = false;
    tipeSimpul<Tipe> *sekarang; //pointer untuk menjelajah senarai

    sekarang = pertama; //memulai pencarian pada simpul pertama

    while (sekarang != NULL && !ditemukan)
        if (sekarang->info >= itemCari)
            ditemukan = true;
        else
            sekarang = sekarang->link;

    if (ditemukan)
        ditemukan = (sekarang->info == itemCari); //menguji ekualitas

    return ditemukan;
}//akhir cari

template <class Tipe>
void senaraiBerantaiTerurut<Tipe>::sisip(const Tipe& itemBaru)
{
    tipeSimpul<Tipe> *sekarang; //pointer untuk menjelajah senarai
    tipeSimpul<Tipe> *sebelumSekarang; //pointer tepat sebelum sekarang
    tipeSimpul<Tipe> *simpulBaru; //pointer untuk menciptakan sebuah simpul
    
    bool ditemukan;

    simpulBaru = new tipeSimpul<Tipe>; //menciptakan simpul
    simpulBaru->info = itemBaru;       //menyimpan itemBaru di dalam simpul
    simpulBaru->link = NULL;           //menetapkan bidang link
                                       //menjadi NULL

    if (pertama == NULL) //kasus 1
    {
        pertama = simpulBaru;
        akhir = simpulBaru;
        hitung++;
    }
    else
    {
        sekarang = pertama;
        ditemukan = false;

        while (sekarang != NULL && !ditemukan) //melakukan pencarian
            if (sekarang->info >= itemBaru)
                ditemukan = true;
            else
            {
                sebelumSekarang = sekarang;
                sekarang = sekarang->link;
            }

        if (sekarang == pertama) //kasus 2
        {
            simpulBaru->link = pertama;
            pertama = simpulBaru;
            hitung++;
        }

        else //kasus 3
        {
            sebelumSekarang->link = simpulBaru;
            simpulBaru->link = sekarang;
 
            if (sekarang == NULL)
                akhir = simpulBaru;
            
            hitung++;
        }
    }//akhir else
}

template <class Tipe>
void senaraiBerantaiTerurut<Tipe>::sisipPertama(const Tipe& itemBaru)
{
    sisip(itemBaru);
}//akhir sisipPertama

template <class Tipe>
void senaraiBerantaiTerurut<Tipe>::sisipAkhir(const Tipe& itemBaru)
{
    sisip(itemBaru);
}//akhir sisipAkhir

template <class Tipe>
void senaraiBerantaiTerurut<Tipe>::hapusSimpul(const Tipe& itemHapus)
{
    tipeSimpul<Tipe> *sekarang; //pointer untuk menjelajah senarai
    tipeSimpul<Tipe> *sebelumSekarang; //pointer tepat sebelum sekarang
    bool ditemukan;

    if (pertama == NULL) //kasus 1
        cout << "Tidak dapat menghapus dari senarai kosong." << endl;
    else
    {
        sekarang = pertama;
        ditemukan = false;

        while (sekarang != NULL && !ditemukan) //melakukan pencarian
            if (sekarang->info >= itemHapus)
                ditemukan = true;
            else
            {
                sebelumSekarang = sekarang;
                sekarang = sekarang->link;
            }

        if (sekarang == NULL) //kasus 4
            cout << "Item yang akan dihapus tidak ada di dalam senarai."
                 << endl;
        else
            if (sekarang->info == itemHapus)  //item yang akan
                                            //dihapus ada di dalam senarai
            {
                if (pertama == sekarang) //kasus 2
                {
                    pertama = pertama->link;
                    if (pertama == NULL)
                        akhir = NULL;
                    delete sekarang;
                }
            else  //kasus 3
            {
                sebelumSekarang->link = sekarang->link;
                if (sekarang == akhir)
                    akhir = sebelumSekarang;
                delete sekarang;
            }
            hitung--;
        }
        else //kasus 4
            cout << "Item yang akan dihapus tidak ada "
                 << "di dalam senarai." << endl;
    }
}//akhir hapusSimpul


#endif
