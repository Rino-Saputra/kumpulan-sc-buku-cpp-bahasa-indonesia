//****************************************************************
// Penulis: RH. Sianipar
//
// Kelas ini menetapkan operasi-operasi dasar pada sebuah antrian
// sebagai senarai berantai.
//****************************************************************

#include<cassert>
#include "antrianADT.h"

//Definisi atas simpul
template <class Tipe>
struct tipeSimpul
{
    Tipe info;
    tipeSimpul<Tipe> *link;
};

template <class Tipe>
class tipeAntrianBerantai: public antrianADT<Tipe>
{
public:
    const tipeAntrianBerantai<Tipe>& operator=
                             (const tipeAntrianBerantai<Tipe>&);
    //Mengoverload operator penugasan.    

    bool apaAntrianKosong() const;
    //Fungsi untuk menentukan apakah antrian kosong.
    //Postkondisi: Menghasilkan true jika antrian kosong,
    //sebaliknya menghasilkan false.

    bool apaAntrianPenuh() const;
    //Fungsi untuk menentukan apakah antrian penuh.
    //Postkondisi: Menghasilkan true jika antrian penuh,
    //sebaliknya menghasilkan false.

    void inisialisasiAntrian();
    //Fungsi untuk menginisialisasi antrian dengan keadaan kosong.
    //Postkondisi: depanAntrian = NULL; belakangAntrian = NULL;

    Tipe depan() const;
    //Fungsi untuk menghasilkan elemen terdepan antrian.
    //Prakondisi: Antrian ada dan tidak kosong.
    //Postkondisi: Jika antrian kosong, program akan
    //berhenti; sebaliknya, elemen pertama antrian akan
    //dijadikan nilai balik.

    Tipe belakang() const;
    //Fungsi untuk menghasilkan elemen terbelakang antrian.
    //Prakondisi: Antrian ada dan tidak kosong.
    //Postkondisi: Jika antrian kosong, program akan
    //berhenti; sebaliknya, elemen terakhir antrian akan
    //dijadikan nilai balik.

    void tambahAntrian(const Tipe& elemenAntrian);
    //Fungsi untuk menambahkan elemenAntrian ke dalam antrian.
    //Prakondisi: Antrian ada dan tidak penuh.
    //Postkondisi: Antrian berubah dan elemenAntrian
    //ditambahkan ke dalam antrian.

    void hapusAntrian();
    //Fungsi untuk menghapus elemen pertama dari antrian.
    //Prakondisi: Antrian ada dan tidak kosong.
    //Postkondisi: Antrian berubah dan elemen pertama antrian
    //dihapus dari antrian.

    tipeAntrianBerantai();
    //Konstruktor default

    tipeAntrianBerantai(const tipeAntrianBerantai<Tipe>& antrianLain);
    //Konstruktor penyalin

    ~ tipeAntrianBerantai();
    //Destruktor

private:
    tipeSimpul<Tipe> *depanAntrian;    //pointer ke depan antrian
    tipeSimpul<Tipe> *belakangAntrian; //pointer ke belakang antrian
};

template <class Tipe>
bool tipeAntrianBerantai<Tipe>::apaAntrianKosong() const
{
    return(depanAntrian == NULL);
} //akhir apaAntrianKosong

template <class Tipe>
bool tipeAntrianBerantai<Tipe>::apaAntrianPenuh() const
{
    return false;
} //akhir apaAntrianPenuh

template <class Tipe>
void tipeAntrianBerantai<Tipe>::inisialisasiAntrian()
{
    tipeSimpul<Tipe> *temp;

    while (depanAntrian!= NULL) //ketika masih ada elemen
                                //di dalam antrian
    {
        temp = depanAntrian; //menetapkan temp menunjuk ke simpul sekarang
        depanAntrian = depanAntrian->link; //memajukan depanAntrian ke
                                           //simpul berikutnya
        delete temp; //mendealokasi memori yang ditempati temp
    }

    belakangAntrian = NULL; //menetapkan belakangAntrian menjadi NULL
} //akhir inisialisasiAntrian

template <class Tipe>
void tipeAntrianBerantai<Tipe>::tambahAntrian(const Tipe& elemenBaru)
{
    tipeSimpul<Tipe> *simpulBaru;

    simpulBaru = new tipeSimpul<Tipe>; //menciptakan simpul
    simpulBaru->info = elemenBaru;     //menyimpan info
    simpulBaru->link = NULL; //menginisialisasi bidang link dengan NULL

    if (depanAntrian == NULL) //jika awalnya antrian kosong
    {
        depanAntrian = simpulBaru;
        belakangAntrian = simpulBaru;
    }
    
    else //menambah simpulBaru di akhir antrian
    {
        belakangAntrian->link = simpulBaru;
        belakangAntrian = belakangAntrian->link;
    }
}//akhir tambahAntrian

template <class Tipe>
Tipe tipeAntrianBerantai<Tipe>::depan() const
{
    assert(depanAntrian != NULL);
    return depanAntrian->info;
} //akhir depan

template <class Tipe>
Tipe tipeAntrianBerantai<Tipe>::belakang() const
{
    assert(belakangAntrian != NULL);
    return belakangAntrian->info;
} //akhir belakang

template <class Tipe>
void tipeAntrianBerantai<Tipe>::hapusAntrian()
{
    tipeSimpul<Tipe> *temp;

    if (!apaAntrianKosong())
    {
        temp = depanAntrian; //membuat temp menunjuk ke simpul pertama
        depanAntrian = depanAntrian->link; //memajukan depanAntrian

        delete temp; //menghapus simpul pertama

        if (depanAntrian == NULL)   //jika setelah penghapusan
                                    //antrian kosong
            belakangAntrian = NULL; //menetapkan belakangAntrian menjadi NULL
    }
    else
        cout << "Tidak dapat menghapus dari antrian kosong" << endl;
}//akhir hapusAntrian

template<class Tipe>
tipeAntrianBerantai<Tipe>:: tipeAntrianBerantai()
{
    depanAntrian = NULL;    //menetapkan depan menjadi null
    belakangAntrian = NULL; //menetapkan belakang menjadi null
} //akhir konstruktor default


//destruktor
template <class Tipe>
tipeAntrianBerantai<Tipe>::~ tipeAntrianBerantai()
{
    inisialisasiAntrian();
}//akhir destruktor

