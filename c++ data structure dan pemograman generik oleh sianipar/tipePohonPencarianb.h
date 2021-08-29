//*************************************************************
// Penulis: RH. Sianipar
//
// Kelas tipePohonPencarianb
// Kelas ini menspesifikasi operasi-operasi dasar dalam mengimple- 
// mentasikan pohon pencarian biner.
//*************************************************************

#include "tipePohonBiner.h"
#include<cassert>

template <class tipeElem>
class tipePohonPencarianb: public tipePohonBiner<tipeElem>
{
public:
    bool cari(const tipeElem& itemCari) const;
    //Fungsi untuk menentukan jika itemCari ada di dalam pohon 
    //pencarian biner.
    //Postkondisi: Menghasilkan true jika itemCari ditemukan di
    //dalam pohon pencarian biner; sebaliknya, ia menghasilkan false.

    void sisip(const tipeElem& itemSisip);
    //Fungsi untuk menyisipkan itemSisip di dalam pohon pencarian biner.
    //Postkondisi: Jika tidak ada simpul di dalam pohon pencarian biner
    //memiliki info yang sama sebagai itemSisip, sebuah simpul dengan info 
    //itemSisip yang diciptakan dan disisipkan di dalam pohon pencarian biner.

    void hapusSimpul(const tipeElem& itemHapus);
    //Fungsi untuk menghapus itemHapus dari pohon pencarian biner.
    //Postkondisi: Jika sebuah simpul dengan info sama dengan itemHapus
    //ditemukan, ia dihapus dari pohon pencarian biner.


private:
    void hapusDariPohon(simpulPohonBiner<tipeElem>* &p);
    //Fungsi untuk menghapus simpul yang ditunjuk oleh p 
    //dari pohon pencarian biner.
    //Postkondisi: Simpul yang ditunjuk oleh p dihapus dari
    //pohon pencarian biner.
};

template <class tipeElem>
bool tipePohonPencarianb<tipeElem>::
                         cari(const tipeElem& itemCari) const
{
    simpulPohonBiner<tipeElem> *sekarang;
    bool ditemukan = false;

    if (akar == NULL)
        cerr << "Tidak dapat melakukan pencarian pada pohon kosong." << endl;
    else
    {
        sekarang = akar;

        while (sekarang != NULL && !ditemukan)
        {
            if (sekarang->info == itemCari)
                ditemukan = true;

            else if (sekarang->info > itemCari)
                sekarang = sekarang->llink;

            else
                sekarang = sekarang->rlink;
        }//akhir while
    }//akhir else

    return ditemukan;
}//akhir cari

template <class tipeElem>
void tipePohonPencarianb<tipeElem>::sisip(const tipeElem& itemSisip)
{
    simpulPohonBiner<tipeElem> *sekarang; //pointer untuk menjelajah pohon
    simpulPohonBiner<tipeElem> *sebelumSekarang; //pointer di belakang sekarang
    simpulPohonBiner<tipeElem> *simpulBaru; //pointer untuk menciptakan simpul

    simpulBaru = new simpulPohonBiner<tipeElem>;
    assert(simpulBaru != NULL);
    simpulBaru->info = itemSisip;
    simpulBaru->llink = NULL;
    simpulBaru->rlink = NULL;

    if (akar == NULL)
        akar = simpulBaru;
    else
    {
        sekarang = akar;

        while (sekarang != NULL)
        {
            sebelumSekarang = sekarang;

            if (sekarang->info == itemSisip)
            {
                cerr << "Item yang akan disisipkan sudah ada di dalam pohon-";
                cerr << "duplikat tidak diijinkan."
                     << itemSisip << endl;
                return;
            }

            else if (sekarang->info > itemSisip)
                sekarang = sekarang->llink;
            else
                sekarang = sekarang->rlink;
        }//akhir while

        if (sebelumSekarang->info > itemSisip)
            sebelumSekarang->llink = simpulBaru;
        else
            sebelumSekarang->rlink = simpulBaru;
    }
}//akhir sisip

template <class tipeElem>
void tipePohonPencarianb<tipeElem>::hapusDariPohon
                                    (simpulPohonBiner<tipeElem>* &p)
{
    simpulPohonBiner<tipeElem> *sekarang;//pointer untuk menjelajah pohon
    simpulPohonBiner<tipeElem> *sebelumSekarang; //pointer di belakang sekarang
    simpulPohonBiner<tipeElem> *temp; //pointer untuk menghapus simpul

    if (p == NULL)
        cerr << "Error: Simpul yang akan dihapus NULL." << endl;
    else if(p->llink == NULL && p->rlink == NULL)
    {
        temp = p;
        p = NULL;
        delete temp;
    }

    else if(p->llink == NULL)
    {
        temp = p;
        p = temp->rlink;
        delete temp;
    }

    else if(p->rlink == NULL)
    {
        temp = p;
        p = temp->llink;
        delete temp;
    }

    else
    {
        sekarang = p->llink;
        sebelumSekarang = NULL;

        while (sekarang->rlink != NULL)
        {
            sebelumSekarang = sekarang;
            sekarang = sekarang->rlink;
        }//akhir while

        p->info = sekarang->info;
   
        if (sebelumSekarang == NULL) //sekarang tidak pindah;
                                     //sekarang == p->llink; memperbarui p
            p->llink = sekarang->llink;
        else
            sebelumSekarang->rlink = sekarang->llink;

        delete sekarang;
    }//akhir else
}//akhir hapusDariPohon

template <class tipeElem>
void tipePohonPencarianb<tipeElem>::hapusSimpul(const tipeElem& itemHapus)
{
    simpulPohonBiner<tipeElem> *sekarang; //pointer untuk menjelajah pohon
    simpulPohonBiner<tipeElem> *sebelumSekarang; //pointer di belakang sekarang
    bool ditemukan = false;

    if (akar == NULL)
        cout << "Tidak dapat menghapus dari pohon kosong." << endl;
    else
    {
        sekarang = akar;
        sebelumSekarang = akar;

        while (sekarang != NULL && !ditemukan)
        {
            if (sekarang->info == itemHapus)
                ditemukan = true;
            else
            {
                sebelumSekarang = sekarang;

                if (sekarang->info > itemHapus)
                    sekarang = sekarang->llink;
                else
                    sekarang = sekarang->rlink;
            }
        }//akhir while

        if (sekarang == NULL)
            cout << "Item yang akan dihapus tidak ada di dalam pohon biner." << endl;
        else if (ditemukan)
        {
            if (sekarang == akar)
                hapusDariPohon(akar);
            else if (sebelumSekarang->info > itemHapus)
                hapusDariPohon(sebelumSekarang->llink);
            else
                hapusDariPohon(sebelumSekarang->rlink);
        }//akhir if
    }
}//akhir hapusSimpul
