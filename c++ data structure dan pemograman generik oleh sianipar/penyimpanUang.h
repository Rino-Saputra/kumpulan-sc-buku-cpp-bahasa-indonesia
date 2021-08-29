//****************************************************************
// Penulis: RH. Sianipar
//
// Kelas penyimpanUang
// Kelas ini menetapkan anggota-anggota untuk mengimplementasikan
// sebuah penyimpan uang pada mesin jus buah.
//****************************************************************

class penyimpanUang
{
public:
    int getUangSekarang() const;
    //Fungsi untuk menampilkan uang sekarang di dalam penyimpan uang.
    //Postkondisi: Nilai dari uangTersimpan dijadikan nilai balik.

    void terimaUang(int uangMasuk);
    //Fungsi untuk menerima sejumlah uang dari
    //pelanggan dan memperbarui jumlah uang di dalam penyimpan uang.
    //Postkondisi: uangTersimpan = uangTersimpan + uangMasuk;

    penyimpanUang();
    //Konstruktor default
    //Menetapkan jumlah uang di dalam penyimpan menjadi 500 rupiah.
    //Postkondisi: uangTersimpan = 500.

    penyimpanUang(int uangDalam);
    //Konstruktor dengan sebuah parameter.
    //Menetapkan jumlah uang di dalam penyimpan menjadi jumlah tertentu.
    //Postkondisi: uangTersimpan = uangDalam;

private:
    int uangTersimpan; //variabel untuk menyimpan uang di dalam penyimpan
};

int penyimpanUang::getUangSekarang() const
{
    return uangTersimpan;
}

void penyimpanUang::terimaUang(int uangMasuk)
{
    uangTersimpan = uangTersimpan + uangMasuk;
}

penyimpanUang::penyimpanUang()
{
    uangTersimpan = 500;
}

penyimpanUang::penyimpanUang(int uangDalam)
{
    if (uangDalam >= 0)
        uangTersimpan = uangDalam;
    else
        uangTersimpan = 500;
}

