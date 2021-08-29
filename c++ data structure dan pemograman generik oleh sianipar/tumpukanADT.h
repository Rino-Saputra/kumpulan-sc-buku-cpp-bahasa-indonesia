//*****************************************************************
// Penulis: RH. Sianipar
//
// Kelas ini menetapkan operasi-operasi dasar pada sebuah tumpukan.
//*****************************************************************

template <class Tipe>
class tumpukanADT
{
public:
    virtual void inisialisasiTumpukan() = 0;
    //Metode untuk menginisialisasi tumpukan dengan keadaan kosong.
    //Postkondisi: Tumpukan kosong.

    virtual bool apaTumpukanKosong() const = 0;
    //Fungsi untuk menentukan apakah tumpukan kosong.
    //Postkondisi: Menghasilkan true jika tumpukan kosong,
    //sebaliknya menghasilkan false.

    virtual bool apaTumpukanPenuh() const = 0;
    //Fungsi untuk menentukan apakah tumpukan penuh.
    //Postkondisi: Menghasilkan true jika tumpukan penuh,
    //sebaliknya menghasilkan false.

    virtual void push(const Tipe& itemBaru) = 0;
    //Fungsi untuk menambahkan itemBaru ke atas tumpukan.
    //Prakondisi: Tumpukan ada dan tidak penuh.
    //Postkondisi: Tumpukan berubah dan itemBaru ditambahkan
    //ke atas tumpukan.

    virtual Tipe top() const = 0;
    //Fungsi untuk menghasilkan elemen teratas tumpukan.
    //Prakondisi: Tumpukan ada dan tidak kosong.
    //Postkondisi: Jika tumpukan kosong, maka program
    //berhenti; sebaliknya, elemen teratas tumpukan
    //dijadikan nilai balik.

    virtual void pop() = 0;
    //Fungsi untuk menghapus elemen teratas dari tumpukan.
    //Prakondisi: Tumpukan ada dan tidak kosong.
    //Postkondisi: Tumpukan berubah dan elemen teratas 
    //dihapus dari tumpukan.
};
