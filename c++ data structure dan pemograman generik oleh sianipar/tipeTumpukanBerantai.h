//*************************************************************
// Penulis: RH. Sianipar
//
// Kelas ini menspesifikasi operasi-operasi dasar pada tumpukan
// sebagai sebuah senarai berantai.
//*************************************************************

#include "tumpukanADT.h"
#include <cassert>

//Definisi simpul
template <class Tipe>
struct tipeSimpul
{
    Tipe info;
    tipeSimpul<Tipe> *link;
};


template <class Tipe>
class tipeTumpukanBerantai: public tumpukanADT<Tipe>
{
public:
    const tipeTumpukanBerantai<Tipe>& operator=
                                    (const tipeTumpukanBerantai<Tipe>&);
    //Mengoverload operator penugasan.

    void inisialisasiTumpukan();
    //Fungsi untuk menginisialisasi tumpukan dengan keadaan kosong.
    //Postkondisi: Elemen-elemen tumpukan dihapus.
    //atasTumpukan = NULL

    bool apaTumpukanKosong() const;
    //Fungsi untuk menentukan apakah tumpukan kosong.
    //Postkondisi: Menghasilkan true jika tumpukan kosong,
    //sebaliknya menghasilkan false.

    bool apaTumpukanPenuh() const;
    //Fungsi untuk menentukan apakah tumpukan penuh.
    //Postkondisi: Menghasilkan false 

    void push(const Tipe& itemBaru);
    //Fungsi untuk menambahkan itemBaru ke atas tumpukan.
    //Prakondisi: Tumpukan ada dan tidak penuh.
    //Postkondisi: Tumpukan berubah dan itemBaru ditambahkan
    //ke atas tumpukan.

    Tipe top() const;
    //Fungsi untuk menghasilkan elemen teratas tumpukan.
    //Prakondisi: Tumpukan ada dan tidak kosong.
    //Postkondisi: Jika tumpukan kosong, maka program
    //berhenti; sebaliknya, elemen teratas tumpukan
    //dijadikan nilai balik.

    void pop();
    //Fungsi untuk menghapus elemen teratas dari tumpukan.
    //Prakondisi: Tumpukan ada dan tidak kosong.
    //Postkondisi: Tumpukan berubah dan elemen teratas 
    //dihapus dari tumpukan.

    tipeTumpukanBerantai();
    //Konstruktor default
    //Postkondisi: atasTumpukan = NULL

    tipeTumpukanBerantai(const tipeTumpukanBerantai<Tipe>& tumpukanLain);
    //Konstruktor penyalin

    ~tipeTumpukanBerantai();
    //Destruktor
    //PostKondisi: Menghapus semua elemen dari tumpukan.

private:
    tipeSimpul<Tipe> *atasTumpukan; //pointer ke tumpukan    
    
    void salinTumpukan(const tipeTumpukanBerantai<Tipe>& tumpukanLain);
    //Fungsi untuk membuat salinan dari tumpukanLain.
    //Postkondisi: Sebuah salinan dari tumpukanLain diciptakan dan ditugaskan
    //kepada tumpukan ini.
};

template <class Tipe>
tipeTumpukanBerantai<Tipe>:: tipeTumpukanBerantai()
{
    atasTumpukan = NULL;
}

template <class Tipe>
bool tipeTumpukanBerantai<Tipe>::apaTumpukanKosong() const
{
    return(atasTumpukan == NULL);
} //akhir apaTumpukanKosong

template <class Tipe>
bool tipeTumpukanBerantai<Tipe>::apaTumpukanPenuh() const
{
    return false;
} //akhir apaTumpukanPenuh

template <class Tipe>
void tipeTumpukanBerantai<Tipe>:: inisialisasiTumpukan()
{
    tipeSimpul<Tipe> *temp; //pointer untuk menghapus simpul

    while (atasTumpukan != NULL) //ketika ada elemen di dalam
                                 //tumpukan
    {
        temp = atasTumpukan; //menetapkan temp untuk menunjuk ke
                             //simpul sekarang
        atasTumpukan = atasTumpukan->link; //memajukan atasTumpukan ke
                                           //simpul berikutnya
        delete temp; //mendealokasi memori yang ditempati oleh temp
    }
} //akhir inisialisasiTumpukan

template <class Tipe>
void tipeTumpukanBerantai<Tipe>::push(const Tipe& elemenBaru)
{
    tipeSimpul<Tipe> *simpulBaru;      //pointer untuk menciptakan simpul baru

    simpulBaru = new tipeSimpul<Tipe>; //menciptakan simpul

    simpulBaru->info = elemenBaru;     //menyimpan elemenBaru di dalam simpul
    simpulBaru->link = atasTumpukan;   //menyisipkan simpulBaru tepat sebelum   
                                       //atasTumpukan
    atasTumpukan = simpulBaru;         //menetapkan atasTumpukan agar menunjuk ke
                                       //simpul teratas
} //akhir push

template <class Tipe>
Tipe tipeTumpukanBerantai<Tipe>::top() const
{
    assert(atasTumpukan != NULL); //jika tumpukan kosong,
                                  //maka hentikan program
    return atasTumpukan->info;    //menghasilkan elemen teratas
}//akhir top

template <class Tipe>
void tipeTumpukanBerantai<Tipe>::pop()
{
    tipeSimpul<Tipe> *temp; //pointer untuk mendealokasi memori

    if (atasTumpukan != NULL)
    {
        temp = atasTumpukan; //menetapkan temp agar menunjuk ke simpul teratas
        
        atasTumpukan = atasTumpukan ->link; //memajukan atasTumpukan ke
                                            //simpul berikutnya
        delete temp; //menghapus simpul teratas
    }
    else
        cout << "Tidak dapat menghapus dari tumpukan kosong." << endl;
}//akhir pop

template <class Tipe>
void tipeTumpukanBerantai<Tipe>::salinTumpukan
                         (const tipeTumpukanBerantai<Tipe>& tumpukanLain)
{
    tipeSimpul<Tipe> *simpulBaru, *sekarang, *akhir;

    if (atasTumpukan != NULL) //jika tumpukan tak kosong, maka kosongkan
        inisialisasiTumpukan();

    if (tumpukanLain.atasTumpukan == NULL)
        atasTumpukan = NULL;
    else
    {
        sekarang = tumpukanLain.atasTumpukan; //menetapkan sekarang agar menunjuk
                                              //ke tumpukan yang akan disalin

        //menyalin elemen atasTumpukan 
        atasTumpukan = new tipeSimpul<Tipe>; //menciptakan simpul

        atasTumpukan->info = sekarang->info; //menyalin info
        atasTumpukan->link = NULL; //menetapkan bidang link menjadi NULL
        akhir = atasTumpukan;      //menetapkan akhir menunjuk ke simpul
        sekarang = sekarang->link; //menetapkan sekarang agar menunjuk ke
                                   //simpul berikutnya

        //menyalin sisa tumpukan
        while (sekarang != NULL)
        {
            simpulBaru = new tipeSimpul<Tipe>;

            simpulBaru->info = sekarang->info;
            simpulBaru->link = NULL;
            akhir->link = simpulBaru;
            akhir = simpulBaru;
            sekarang = sekarang->link;
        }//akhir while
    }//akhir else
} //akhir salinTumpukan 

//konstruktor penyalin
template <class Tipe>
tipeTumpukanBerantai<Tipe>:: tipeTumpukanBerantai(
                             const tipeTumpukanBerantai<Tipe>& tumpukanLain)
{
    atasTumpukan = NULL;
    salinTumpukan(tumpukanLain);
}//akhir konstruktor penyalin

//destruktor
template <class Tipe>
tipeTumpukanBerantai<Tipe>::~ tipeTumpukanBerantai()
{
    inisialisasiTumpukan();
}//akhir destruktor

template <class Tipe>
const tipeTumpukanBerantai<Tipe>& tipeTumpukanBerantai<Tipe>::operator=
                                 (const tipeTumpukanBerantai<Tipe>& tumpukanLain)
{
    if (this != & tumpukanLain) //menghindari penyalinan-diri
        salinTumpukan(tumpukanLain);

    return *this;
}//akhir operator=
