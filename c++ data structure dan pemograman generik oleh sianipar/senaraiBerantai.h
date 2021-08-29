//****************************************************************
// Penulis: RH. Sianipar
//
// Kelas ini menetapkan anggota-anggota untuk mengimplementasikan
// beberapa watak dasar senarai berantai. Ini adalah kelas abstrak.
// Anda tidak bisa menginstansiasi sebuah objek dari kelas ini.
//****************************************************************

#include "iteratorSenaraiBerantai.h"

template <class Tipe>
class tipeSenaraiBerantai
{
public:
    const tipeSenaraiBerantai<Tipe>& operator=
                        (const tipeSenaraiBerantai<Tipe>&);
    //Mengoverload operator penugasan.

    void inisialisasiSenarai();
    //Menginisialisasi senarai dengan keadaan kosong.
    //Postkondisi: pertama = NULL, akhir = NULL, hitung = 0;

    bool apaSenaraiKosong() const;
    //Fungsi untuk menentukan apakah senarai kosong.
    //Postkondisi: Menghasilkan true jika senarai kosong, sebaliknya
    //ia menghasilkan false.

    void tampil() const;
    //Fungsi untuk menampilkan data yang dimuat di dalam setiap simpul.
    //Postkondisi: tidak ada

    int panjang() const;
    //Fungsi untuk menghasilkan jumlah simpul di dalam senarai berantai.
    //Postkondisi: Nilai dari hitung dijadikan nilai balik.

    void hancurSenarai();
    //Fungsi untuk menghapus semua simpul dari senarai.
    //Postkondisi: pertama = NULL, akhir = NULL, hitung = 0;

    Tipe depan() const;
    //Fungsi untuk menghasilkan elemen pertama senarai.
    //Prakondisi: Senarai harus ada dan tidak kosong.
    //Postkondisi: Jika senarai kosong, program berhenti;
    //sebaliknya, elemen pertama dari senarai dijadikan nilai balik.

    Tipe belakang() const;
    //Fungsi untuk menghasilkan elemen terakhir senarai.
    //Prakondisi: Senarai harus ada dan tidak kosong.
    //Postkondisi: Jika senarai kosong, program akan
    //berhenti; sebaliknya, elemen terakhir senarai berantai
    //dijadikan nilai balik.

    virtual bool cari(const Tipe& itemCari) const = 0;
    //Fungsi untuk menentukan apakah itemCari ada di dalam senarai.
    //Postkondisi: Menghasilkan true jika itemCari ada di dalam senarai,
    //sebaliknya false dijadikan nilai balik.

    virtual void sisipPertama(const Tipe& itemBaru) = 0;
    //Fungsi untuk menyisipkan itemBaru di awal senarai berantai.
    //Postkondisi: pointer pertama menunjuk ke senarai baru, itemBaru
    //disisip di awal senarai, pointer akhir menunjuk ke
    //simpul terakhir di dalam senarai, dan hitung diinkremen
    //sebesar 1.

    virtual void sisipAkhir(const Tipe& itemBaru) = 0;
    //Fungsi untuk menyisipkan itemBaru di akhir senarai.
    //Postkondisi: pointer pertama menunjuk ke senarai baru, itemBaru
    //disisipkan di akhir senarai, pointer akhir menunjuk ke
    //simpul akhir di dalam senarai, dan hitung diinkremen sebesar 1.

    virtual void hapusSimpul(const Tipe& itemHapus) = 0;
    //Fungsi untuk menghapus itemHapus dari senarai.
    //Postkondisi: Jika ditemukan, simpul yang memuat itemHapus 
    //akan dihapus dari senarai. Pointer pertama akan menunjuk ke 
    //simpul pertama, pointer akhir akan menunjuk ke simpul akhir, dan
    //hitung akan didekremen sebesar 1.

    iteratorSenaraiBerantai<Tipe> awal();
    //Fungsi untukmenghasilkan sebuah iterator di awal 
    //senarai berantai.
    //Postkondisi: Menghasilkan sebuah iterator sehingga pointer sekarang
    //ditetapkan menjadi pointer pertama.

    iteratorSenaraiBerantai<Tipe> terakhir();
    //Fungsi untuk menghasilkan sebuah iterator untuk elemen sesudah
    //elemen terakhir di dalam senarai.
    //Postkondisi: Menghasilkan sebuah iterator sehingga pointer sekarang 
    //ditetapkan menjadi NULL.

    tipeSenaraiBerantai();
    //konstruktor default
    //Menginisialisasi senarai dengan keadaan kosong.
    //Postkondisi: pertama = NULL, akhir = NULL, hitung = 0;

    tipeSenaraiBerantai(const tipeSenaraiBerantai<Tipe>& senaraiLain);
    //konstruktor penyalin

    ~tipeSenaraiBerantai();
    //destruktor
    //Menghapus semua simpul dari senarai.
    //Postkondisi: Objek senarai dihancurkan.

protected:
    int hitung;                //variabel untuk menampung jumlah elemen senarai 
    tipeSimpul<Tipe> *pertama; //pointer ke simpul pertama senarai
    tipeSimpul<Tipe> *akhir;   //pointer ke simpul akhir senarai

private:
    void salinSenarai(const tipeSenaraiBerantai<Tipe>& senaraiLain);
    //Fungsi untuk membuat salinan dari senaraiLain.
    //Postkondisi: Salinan dari senaraiLain diciptakan dan ditugaskan
    //kepada senarai ini.
};

template <class Tipe>
bool tipeSenaraiBerantai<Tipe>::apaSenaraiKosong() const
{
    return (pertama == NULL);
}

template <class Tipe>
tipeSenaraiBerantai<Tipe>:: tipeSenaraiBerantai() //konstruktor default
{
    pertama = NULL;
    akhir = NULL;
    hitung = 0;
}

template <class Tipe>
void tipeSenaraiBerantai<Tipe>::hancurSenarai()
{
    tipeSimpul<Tipe> *temp; //pointer untuk mendealokasi memori
                            //yang diokupasi oleh simpul
    while (pertama != NULL) //ketika ada simpul di dalam senarai
    {
        temp = pertama;          //menetapkan temp ke simpul sekarang
        pertama = pertama->link; //memajukan pointer pertama ke simpul berikutnya
        delete temp;             //mendealokasi memori yang diokupasi temp
    }

    akhir = NULL; //menginisiaslisasi pointer akhir dengan NULL; 
                  //pointer pertama telah ditetapkan NULL oleh loop while
    hitung = 0;
}

template <class Tipe>
void tipeSenaraiBerantai<Tipe>::inisialisasiSenarai()
{
    hancurSenarai(); //jika senarai memiliki simpul, maka akan dihapus
}

template <class Tipe>
void tipeSenaraiBerantai<Tipe>::tampil() const
{
    tipeSimpul<Tipe> *sekarang; //pointer untuk menjelajah senarai

    sekarang = pertama; //menetapkan pointer sekarang menunjuk ke simpul pertama
    while (sekarang != NULL) //ketika ada data untuk ditampilkan
    {
        cout << sekarang->info << " ";
        sekarang = sekarang->link;
    }
}//akhir tampil

template <class Tipe>
int tipeSenaraiBerantai<Tipe>::panjang() const
{
    return hitung;
}

template <class Tipe>
Tipe tipeSenaraiBerantai<Tipe>::depan() const
{
    assert(pertama != NULL);
    
    return pertama->info; //menghasilkan info pada simpul pertama
}//akhir dari depan

template <class Tipe>
Tipe tipeSenaraiBerantai<Tipe>::belakang() const
{
    assert(akhir != NULL);
    
    return akhir->info; //menghasilkan info pada simpul terakhir
}//akhir dari belakang

template <class Tipe>
iteratorSenaraiBerantai<Tipe> tipeSenaraiBerantai<Tipe>::awal()
{
    iteratorSenaraiBerantai<Tipe> temp(pertama);
    return temp;
}

template <class Tipe>
iteratorSenaraiBerantai<Tipe> tipeSenaraiBerantai<Tipe>::terakhir()
{
    iteratorSenaraiBerantai<Tipe> temp(NULL);
    return temp;
}

template <class Tipe>
void tipeSenaraiBerantai<Tipe>::salinSenarai
                        (const tipeSenaraiBerantai<Tipe>& senaraiLain)
{
    tipeSimpul<Tipe> *simpulBaru; //pointer untuk menciptakan simpul
    tipeSimpul<Tipe> *sekarang;   //pointer untuk menjelajah senarai

    if (pertama != NULL) //jika senarai tak-kosong, maka kosongkan
        hancurSenarai();

    if (senaraiLain.pertama == NULL) //senaraiLain kosong
    {
        pertama = NULL;
        akhir = NULL;
        hitung = 0;
    }
    else
    {
        sekarang = senaraiLain.pertama;  //sekarang menunjuk ke
                                         //senarai yang akan disalin
        hitung = senaraiLain.hitung;

        //menyalin simpul pertama
        pertama = new tipeSimpul<Tipe>; //menciptakan simpul
        pertama->info = sekarang->info; //menyalin info
        pertama->link = NULL;      //menetapkan bidang link menjadi NULL
        akhir = pertama;           //pointer akhir menunjuk ke simpul pertama
        sekarang = sekarang->link; //pointer sekarang menunjuk ke simpul
                                   //berikutnya
        
        //menyalin sisa senarai
        while (sekarang != NULL)
        {
            simpulBaru = new tipeSimpul<Tipe>; //menciptakan sebuah simpul
            simpulBaru->info = sekarang->info; //menyalin info
            simpulBaru->link = NULL;    //menetapkan link dari simpulBaru 
                                        //menjadi NULL
            akhir->link = simpulBaru;    //menemperlkan simpulBaru setelah akhir
            akhir = simpulBaru;          //pointer akhir menunjuk ke
                                         //simpul akhir aktual
            sekarang = sekarang->link;   //pointer sekarang menunjuk ke
                                         //simpul berikutnya
        }//akhir while
    }//akhir else
}//akhir salinSenarai

template <class Tipe>
tipeSenaraiBerantai<Tipe>::~ tipeSenaraiBerantai() //destruktor
{
    hancurSenarai();
}

template <class Tipe>
tipeSenaraiBerantai<Tipe>:: tipeSenaraiBerantai
                           (const tipeSenaraiBerantai<Tipe>& senaraiLain)
{
    pertama = NULL;
    salinSenarai(senaraiLain);
}//akhir konstruktor penyalin

//mengoverload operator penugasan
template <class Tipe>
const tipeSenaraiBerantai<Tipe>& tipeSenaraiBerantai<Tipe>::operator=
                         (const tipeSenaraiBerantai<Tipe>& senaraiLain)
{
    if (this != &senaraiLain) //menghindari penyalinan-diri
    {
        salinSenarai(senaraiLain);
    }//akhir else

    return *this;
}
