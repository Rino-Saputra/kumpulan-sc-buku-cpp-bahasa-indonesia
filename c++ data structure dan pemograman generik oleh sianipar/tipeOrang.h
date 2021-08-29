//***************************************************************
// Penulis: RH. Sianipar
//
// Kelas tipeOrang
// Kelas ini menetapkan anggota-anggota untuk mengimplementasikan
// sebuah nama.
//***************************************************************

#include <string>

using namespace std;

class tipeOrang
{
public:
    void tampil() const;
    //Fungsi untuk menampilkan nama pertama dan nama akhir
    //di dalam namaPertama dan namaAkhir.

    void setNama(string pertama, string akhir);
    //Fungsi untuk menetapkan namaPertama dan namaAkhir
    //sesuai dengan parameter-parameter.
    //Postkondisi: namaPertama = pertama; namaAkhir = akhir

    string getNamaPertama() const;
    //Fungsi untuk menghasilkan nama pertama.
    //Postkondisi: Nilai dari namaPertama dijadikan nilai balik.

    string getNamaAkhir() const;
    //Fungsi untuk menghasilkan nama akhir.
    //Postkondisi: Nilai dari namaAkhir dijadikan nilai balik.

    tipeOrang();
    //Konstruktor default
    //Menetapkan namaPertama dan namaAkhir menjadi string null.
    //Postkondisi: namaPertama = ""; namaAkhir = "";

    tipeOrang(string pertama, string akhir);
    //Konstruktor dengan parameter.
    //Menetapkan namaPertama dan namaAkhir sesuai dengan parameter-parameter.
    //Postkondisi: namaPertama = pertama; namaAkhir = akhir;

private:
    string namaPertama; //variabel untuk menyimpan nama pertama
    string namaAkhir; //variabel untuk menyimpan nama akhir
};

void tipeOrang::tampil() const
{
    cout << namaPertama << " " << namaAkhir;
}

void tipeOrang::setNama(string pertama, string akhir)
{
    namaPertama = pertama;
    namaAkhir = akhir;
}

string tipeOrang::getNamaPertama() const
{
    return namaPertama;
}

string tipeOrang::getNamaAkhir() const
{
    return namaAkhir;
}

//Konstruktor default
tipeOrang::tipeOrang()
{
    namaPertama = " ";
    namaAkhir = " ";
}

//Konstruktor dengan parameter
tipeOrang::tipeOrang(string pertama, string akhir)
{
    namaPertama = pertama;
    namaAkhir = akhir;
}
