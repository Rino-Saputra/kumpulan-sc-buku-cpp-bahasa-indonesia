#ifndef H_SenaraiBerantaiTakTerurut
#define H_SenaraiBerantaiTakTerurut

//*******************************************************************
// Penulis: RH. Sianipar
//
// Kelas ini menspesifikasi anggota-anggota untuk mengimplementasikan
// beberapa watak dasar dari senarai berantai tak terurut. Kelas ini
// diderivasi dari kelas tipeSenaraiBerantai.
//*******************************************************************

#include "senaraiBerantai.h"

template <class Tipe>
class senaraiBerantaiTakTerurut: public tipeSenaraiBerantai<Tipe>
{
public:
    bool cari(const Tipe& itemCari) const;
    //Fungsi untuk menentukan apakah itemCari di dalam senarai.
    //Postkondisi: Menghasilkan true jika itemCari berada di dalam senarai,
    //sebaliknya, nilai false dijadikan nilai balik.

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

    void pengurutanPenyisipanBerantai();
	//Fungsi untuk mengurutkan senarai berantai
	//menggunakan pengurutan penyisipan.

	void pengurutanMerge();
	//Fungsi untuk mengurutkan senarai berantai
	//menggunakan pengurutan merge

private:
	void bagiSenarai(tipeSimpul<Tipe>* pertama1, tipeSimpul<Tipe>* &pertama2);
    tipeSimpul<Tipe>* gabungSenarai(tipeSimpul<Tipe>* pertama1,
                                tipeSimpul<Tipe>* pertama2);
	void rekPengurutanMerge(tipeSimpul<Tipe>* &kepala);

};

template <class Tipe>
bool senaraiBerantaiTakTerurut<Tipe>::
                              cari(const Tipe& itemCari) const
{
    tipeSimpul<Tipe> *sekarang; //pointer untuk menjelajah senarai
    bool ditemukan = false;

    sekarang = pertama;  //menetapkan sekarang menunjuk ke simpul
                         //pertama di dalam senarai

    while (sekarang != NULL && !ditemukan) //melakukan pencarian
        if (sekarang->info == itemCari) //itemCari ditemukan
            ditemukan = true;
        else
            sekarang = sekarang->link; //pointer sekarang menunjuk ke
                                       //simpul berikutnya
    return ditemukan;
}//akhir cari

template <class Tipe>
void senaraiBerantaiTakTerurut<Tipe>::sisipPertama(const Tipe& itemBaru)
{
    tipeSimpul<Tipe> *simpulBaru; //pointer untuk menciptakan simpul baru
    
    simpulBaru = new tipeSimpul<Tipe>; //menciptakan simpul baru
    simpulBaru->info = itemBaru;       //menyimpan item baru di dalam simpul
    simpulBaru->link = pertama;        //menyisipkan simpulBaru sebelum pertama
    pertama = simpulBaru; //pointer pertama menunjuk ke simpul terakhir aktual
    hitung++; //menginkremen hitung

    if (akhir == NULL) //jika senarai kosong, simpulBaru merupakan
                       //simpul terakhir di dalam senarai
        akhir = simpulBaru;
}//akhir sisipPertama

template <class Tipe>
void senaraiBerantaiTakTerurut<Tipe>::sisipAkhir(const Tipe& itemBaru)
{
    tipeSimpul<Tipe> *simpulBaru; //pointer untuk menciptakan simpul baru
    
    simpulBaru = new tipeSimpul<Tipe>; //menciptakan simpul baru
    simpulBaru->info = itemBaru;       //menyimpan item baru di dalam simpul
    simpulBaru->link = NULL;           //menetapkan bidang link dari simpulBaru
                                       //menjadi NULL
    
    if (pertama == NULL) //jika senarai kosong, simpulBaru merupakan
                       //simpul pertama dan simpul terakhir di dalam senarai
    {
        pertama = simpulBaru;
        akhir = simpulBaru;
        hitung++;
    }
    else  //senari tak kosong, sisipkan simpulBaru setelah pointer akhir
    {
        akhir->link = simpulBaru; //menyisipkan simpulBaru setelah akhir
        akhir = simpulBaru; //pointer akhir menunjuk ke simpul akhir
                            //aktual di dalam senarai
        hitung++;           //menginkremen hitung
    }
}//akhir sisipAkhir

template <class Tipe>
void senaraiBerantaiTakTerurut<Tipe>::hapusSimpul(const Tipe& itemHapus)
{
    tipeSimpul<Tipe> *sekarang;        //pointer untuk menjelajah senarai
    tipeSimpul<Tipe> *sebelumSekarang; //pointer sebelum pointer sekarang
    bool ditemukan;

    if (pertama == NULL) //kasus 1; senarai berantai kosong.
        cout << "Tidak dapat menghapus pada senarai kosong."
             << endl;
    else
    {
        if (pertama->info == itemHapus) //kasus 2
        {
            sekarang = pertama;
            pertama = pertama->link;
            hitung--;

            if (pertama == NULL) //senarai hanya mempunyai satu simpul
                akhir = NULL;

            delete sekarang;
        }
        
        else //mencari simpul dengan info tertentu
        {
            ditemukan = false;
            sebelumSekarang = pertama; //menetapkan sebelumSekarang menunjuk
                                       //ke simpul pertama
            sekarang = pertama->link;  //menetapkan sekarang menunjuk ke
                                      //simpul kedua
            while (sekarang != NULL && !ditemukan)
            {
                if (sekarang->info != itemHapus)
                {
                    sebelumSekarang = sekarang;
                    sekarang = sekarang-> link;
                }
                else
                    ditemukan = true;
            }//akhir while

        if (ditemukan) //kasus 3; jika ditemukan, hapus simpul
        {
            sebelumSekarang->link = sekarang->link;
            hitung--;

            if (akhir == sekarang)        //simpul yang akan dihapus 
                                          //adalah simpul terakhir
                akhir = sebelumSekarang;  //memperbarui nilai dari pointer akhir
            delete sekarang; //menghapus simpul dari senarai
        }
        else
            cout << "Item yang akan dihapus tidak ada "
                 << "di dalam senarai berantai." << endl;
        }//akhir else
    }//akhir else
}//akhir hapusSimpul


template <class Tipe>
void senaraiBerantaiTakTerurut<Tipe>::pengurutanPenyisipanBerantai()
{
    tipeSimpul<Tipe> *terakhirTerurut;
    tipeSimpul<Tipe> *pertamaTakTerurut;
    tipeSimpul<Tipe> *sekarang;
    tipeSimpul<Tipe> *sebelumSekarang;

    terakhirTerurut = pertama;

    if (pertama == NULL)
        cerr << "Tidak dapat mengurutkan senarai berantai kosong." << endl;
    else if (pertama->link == NULL)
        cout << "Senarai berantai dengan panjang 1. "
             << "Pasti dalam kondisi terurut." << endl;
    else
        while (terakhirTerurut->link != NULL)
        {
            pertamaTakTerurut = terakhirTerurut->link;

            if (pertamaTakTerurut->info < pertama->info)
            {
                terakhirTerurut->link = pertamaTakTerurut->link;
                pertamaTakTerurut->link = pertama;
                pertama = pertamaTakTerurut;
            }
            else
            {
                sebelumSekarang = pertama;
                sekarang = pertama->link;

                while (sekarang->info < pertamaTakTerurut->info)
                {
                    sebelumSekarang = sekarang;
                    sekarang = sekarang->link;
                }

                if (sekarang != pertamaTakTerurut)
                {
                    terakhirTerurut->link = pertamaTakTerurut->link;
                    pertamaTakTerurut->link = sekarang;
                    sebelumSekarang->link = pertamaTakTerurut;
                }
                else
                    terakhirTerurut = terakhirTerurut->link;
            }
        } //akhir while
} //akhir pengurutanPenyisipanBerantai


//===========================================================
//Pengurutan Merge
//===========================================================
template <class Tipe>
void senaraiBerantaiTakTerurut<Tipe>::
                    bagiSenarai(tipeSimpul<Tipe>* pertama1,
                                tipeSimpul<Tipe>* &pertama2)
{
    tipeSimpul<Tipe>* tengah;
    tipeSimpul<Tipe>* sekarang;

    if (pertama1 == NULL) //senarai kosong
        pertama2 = NULL;
    else if (pertama1->link == NULL) //senarai hanya memuat satu simpul
        pertama2 = NULL;
    else
    {
        tengah = pertama1;
        sekarang = pertama1->link;

        if (sekarang != NULL) //senarai mempunyai lebih dari dua simpul
            sekarang = sekarang->link;

        while (sekarang != NULL)
        {
            tengah = tengah->link;
            sekarang = sekarang->link;

            if (sekarang != NULL)
                sekarang = sekarang->link;
        } //akhir while

        pertama2 = tengah->link; //pertama2 menunjuk ke simpul pertama
                                 //dari subsenarai kedua
        tengah->link = NULL;     //menetapkan link dari simpul akhir
                                 //dari subsenarai pertama menjadi NULL
    } //akhir else
} //akhir bagiSenarai

template <class Tipe>
tipeSimpul<Tipe>* senaraiBerantaiTakTerurut<Tipe>::
                  gabungSenarai(tipeSimpul<Tipe>* pertama1,
                                tipeSimpul<Tipe>* pertama2)
{
    tipeSimpul<Tipe> *kecilAkhir; //pointer menunjuk ke simpul akhir pada
                                  //senarai tergabung
    tipeSimpul<Tipe> *kepalaBaru; //pointer menunjuk ke senarai tergabung

    if (pertama1 == NULL)      //subsenarai pertama kosong
        return pertama2;
    else if (pertama2 == NULL) //subsenarai kedua kosong
        return pertama1;
    else
    {
        if (pertama1->info < pertama2->info) //membandingkan dua simpul pertama
        {
            kepalaBaru = pertama1;
            pertama1 = pertama1->link;
            kecilAkhir = kepalaBaru;
        }
        else
        {
            kepalaBaru = pertama2;
            pertama2 = pertama2->link;
            kecilAkhir = kepalaBaru;
        }

        while (pertama1 != NULL && pertama2 != NULL)
        {
            if (pertama1->info < pertama2->info)
            {
                kecilAkhir->link = pertama1;
                kecilAkhir = kecilAkhir->link;
                pertama1 = pertama1->link;
            }
            else
            {
                kecilAkhir->link = pertama2;
                kecilAkhir = kecilAkhir->link;
                pertama2 = pertama2->link;
            }
        } //akhir while

        if (pertama1 == NULL) //subsenarai pertama tuntas lebih dahulu
            kecilAkhir->link = pertama2;
        else //subsenarai kedua tuntas lebih dahulu
            kecilAkhir->link = pertama1;

        return kepalaBaru;
    }
}//akhir gabungSenarai

template <class Tipe>
void senaraiBerantaiTakTerurut<Tipe>::rekPengurutanMerge(tipeSimpul<Tipe>* &kepala)
{
    tipeSimpul<Tipe> *kepalaLain;

    if (kepala != NULL) //jika senarai tidak kosong
        if (kepala->link != NULL) //jika senarai lebih dari satu simpul
        {
            bagiSenarai(kepala, kepalaLain);
            rekPengurutanMerge(kepala);
            rekPengurutanMerge(kepalaLain);
            kepala = gabungSenarai(kepala, kepalaLain);
        }
} //akhir rekPengurutanMerge

template<class Tipe>
void senaraiBerantaiTakTerurut<Tipe>::pengurutanMerge()
{
    rekPengurutanMerge(pertama);

    if (pertama == NULL)
        akhir = NULL;
    else
    {
        akhir = pertama;

        while (akhir->link != NULL)
            akhir = akhir->link;
    }
} //akhir pengurutanMerge


#endif
