//*************************************************************
// Penulis: RH. Sianipar
//
// Kelas ini menspesifikasi operasi-operasi dasar pada tumpukan
// sebagai sebuah array.
//*************************************************************

#include "tumpukanADT.h"
#include <cassert>

template <class Tipe>
class tipeTumpukan: public tumpukanADT<Tipe>
{
public:
    const tipeTumpukan<Tipe>& operator=(const tipeTumpukan<Tipe>&);
    //Mengoverload operator penugasan.

    void inisialisasiTumpukan();
    //Fungsi untuk menginisialisasi tumpukan dengan keadaan kosong.
    //Postkondisi: atasTumpukan = 0.

    bool apaTumpukanKosong() const;
    //Fungsi untuk menentukan apakah tumpukan kosong.
    //Postkondisi: Menghasilkan true jika tumpukan kosong,
    //sebaliknya menghasilkan false.

    bool apaTumpukanPenuh() const;
    //Fungsi untuk menentukan apakah tumpukan penuh.
    //Postkondisi: Menghasilkan true jika tumpukan penuh,
    //sebaliknya menghasilkan false.

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

    tipeTumpukan(int ukuranTumpukan = 100);
    //Konstruktor
    //Menciptakan sebuah array berukuran ukuranTumpukan untuk menampung
    //elemen-elemen tumpukan. Ukuran tumpukan default adalah 100.
    //Postkondisi: Variabel list memuat alamat basis dari
    //array, atasTumpukan = 0, dan ukuranTumpukanMaks  = ukuranTumpukan

    tipeTumpukan(const tipeTumpukan<Tipe>& tumpukanLain);
    //Konstruktor penyalin

    ~tipeTumpukan();
    //Destruktor
    //Menghapus semua elemen dari tumpukan.
    //Postkondisi: Array (list) memuat elemen-elemen tumpukan
    //diciptakan.

private:
    int ukuranTumpukanMaks; //variabel untuk menyimpan ukuran tumpukan maksimum
    int atasTumpukan; //variabel untuk menunjuk ke atas tumpukan
    Tipe *list; //pointer menunjuk ke array yang memuat elemen-elemen tumpukan
    
    void salinTumpukan(const tipeTumpukan<Tipe>& tumpukanLain);
    //Fungsi untuk membuat salinan dari tumpukanLain.
    //Postkondisi: Sebuah salinan dari tumpukanLain diciptakan dan ditugaskan
    //kepada tumpukan ini.
};


template <class Tipe>
void tipeTumpukan<Tipe>::inisialisasiTumpukan()
{
    atasTumpukan = 0;
}//akhir inisialisasiTumpukan


template <class Tipe>
bool tipeTumpukan<Tipe>::apaTumpukanKosong() const
{
    return(atasTumpukan == 0);
}//akhir apaTumpukanKosong

template <class Tipe>
bool tipeTumpukan<Tipe>::apaTumpukanPenuh() const
{
    return(atasTumpukan == ukuranTumpukanMaks);
} //akhir apaTumpukanPenuh

template <class Tipe>
void tipeTumpukan<Tipe>::push(const Tipe& itemBaru)
{
    if (!apaTumpukanPenuh())
    {
        list[atasTumpukan] = itemBaru; //menambahkan itemBaru ke atas tumpukan
        atasTumpukan++; //menginkremen atasTumpukan
    }
    else
        cout << "Tidak dapat menambahkan ke tumpukan penuh." << endl;
}//akhir push

template <class Tipe>
Tipe tipeTumpukan<Tipe>::top() const
{
    assert(atasTumpukan != 0); //jika tumpukan kosong, maka hentikan
                               //program

    return list[atasTumpukan - 1]; //menghasilkan elemen tumpukan yang
                                   //diindikasikan oleh atasTumpukan - 1
}//akhir top

template <class Tipe>
void tipeTumpukan<Tipe>::pop()
{
    if (!apaTumpukanKosong())
        atasTumpukan--; //dekremen atasTumpukan
    else
        cout << "Tidak dapat menghapus dari tumpukan kosong." << endl;
}//akhir pop

template <class Tipe>
void tipeTumpukan<Tipe>::salinTumpukan(const tipeTumpukan<Tipe>& tumpukanLain)
{
    delete [] list;
    ukuranTumpukanMaks = tumpukanLain.ukuranTumpukanMaks;
    atasTumpukan = tumpukanLain.atasTumpukan;

    list = new Tipe[ukuranTumpukanMaks];
    
    //menyalin tumpukanLain ke tumpukan ini
    for (int j = 0; j < atasTumpukan; j++)
        list[j] = tumpukanLain.list[j];
} //akhir salinTumpukan

template <class Tipe>
tipeTumpukan<Tipe>::tipeTumpukan(int ukuranTumpukan)
{
    if (ukuranTumpukan <= 0)
    {
        cout << "Ukuran array untuk menampung tumpukan harus "
             << "positif." << endl;
        cout << "Menciptakan sebuah array berukuran 100." << endl;

        ukuranTumpukanMaks = 100;
    }
    else
        ukuranTumpukanMaks = ukuranTumpukan; //menetapkan ukuran tumpukan 
                                             //menjadi nilai yang ditentukan
                                             //oleh parameter ukuranTumpukan

    atasTumpukan = 0; //menetapakan atasTumpukan menjadi 0
    list = new Tipe[ukuranTumpukanMaks]; //menciptakan array untuk
                                         //menampung elemen-elemen tumpukan
}//akhir konstruktor

template <class Tipe>
tipeTumpukan<Tipe>::~tipeTumpukan() //destruktor
{
    delete [] list; //mendealokasi memori yang ditempati
                    //oleh array
}//akhir destruktor

template <class Tipe>
tipeTumpukan<Tipe>::tipeTumpukan(const tipeTumpukan<Tipe>& tumpukanLain)
{
    list = NULL;
    salinTumpukan(tumpukanLain);
}//akhir konstruktor penyalin

template <class Tipe>
const tipeTumpukan<Tipe>& tipeTumpukan<Tipe>::operator=
                          (const tipeTumpukan<Tipe>& tumpukanLain)
{
    if (this != &tumpukanLain) //menghindari penyalinan-diri
        salinTumpukan(tumpukanLain);

    return *this;
} //akhir operator=

