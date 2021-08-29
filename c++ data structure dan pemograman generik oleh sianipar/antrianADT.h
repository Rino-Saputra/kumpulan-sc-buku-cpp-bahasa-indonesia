//****************************************************************
// Penulis: RH. Sianipar
//
// Kelas ini menetapkan operasi-operasi dasar pada sebuah antrian.
//****************************************************************

template <class Tipe>
class antrianADT
{
public:
    virtual bool apaAntrianKosong() const = 0;
    //Fungsi untuk menentukan apakah antrian kosong.
    //Postkondisi: Menghasilkan true jika antrian kosong,
    //sebaliknya menghasilkan false.

    virtual bool apaAntrianPenuh() const = 0;
    //Fungsi untuk menentukan apakah antrian penuh.
    //Postkondisi: Menghasilkan true jika antrian penuh,
    //sebaliknya menghasilkan false.

    virtual void inisialisasiAntrian() = 0;
    //Fungsi untuk menginisialisasi antrian dengan keadaan kosong.
    //Postkondisi: Antrian kosong.

    virtual Tipe depan() const = 0;
    //Fungsi untuk menghasilkan elemen terdepan antrian.
    //Prakondisi: Antrian ada dan tidak kosong.
    //Postkondisi: Jika antrian kosong, program akan
    //berhenti; sebaliknya, elemen pertama antrian akan
    //dijadikan nilai balik.

    virtual Tipe belakang() const = 0;
    //Fungsi untuk menghasilkan elemen terbelakang antrian.
    //Prakondisi: Antrian ada dan tidak kosong.
    //Postkondisi: Jika antrian kosong, program akan
    //berhenti; sebaliknya, elemen terakhir antrian akan
    //dijadikan nilai balik.

    virtual void tambahAntrian(const Tipe& elemenAntrian) = 0;
    //Fungsi untuk menambahkan elemenAntrian ke dalam antrian.
    //Prakondisi: Antrian ada dan tidak penuh.
    //Postkondisi: Antrian berubah dan elemenAntrian
    //ditambahkan ke dalam antrian.

    virtual void hapusAntrian() = 0;
    //Fungsi untuk menghapus elemen pertama dari antrian.
    //Prakondisi: Antrian ada dan tidak kosong.
    //Postkondisi: Antrian berubah dan elemen pertama antrian
    //dihapus dari antrian.
};
