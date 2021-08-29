//***************************************************************
// Penulis: RH. Sianipar
//
// Kelas tipeDispenser
// Kelas ini menetapkan anggota-anggota untuk mengimplementasikan
// dispenser.
//***************************************************************

class tipeDispenser
{
public:
    int getJumlahItem() const;
    //Fungsi untuk menampilkan jumlah item di dalam mesin.
    //Postkondisi: Nilai dari jumlahItem dijadikan nilai balik.

    int getBiaya() const;
    //Fungsi untuk menampilkan biaya item.
    //Postkondisi: Nilai dari biaya dijadikan nilai balik.

    void lakukanPenjualan();
    //Fungsi untuk mereduksi jumlah item sebesar 1.
    //Postkondisi: jumlahItem--;

    tipeDispenser();
    //Konstruktor default
    //Menetapkan biaya dan jumlah item di dalam dispenser menjadi 50.
    //Postkondisi: jumlahItem = 50; biaya = 50;

    tipeDispenser(int setJumlahItem, int setBiaya);
    //Konstruktor dengan parameter
    //Menetapkan biaya dan jumlah item di dalam dispenser
    //menjadi nilai-nilai yang ditetapkan pengguna.
    //Postkondisi: jumlahItem = setJumlahItem;
    //biaya = setBiaya;

private:
    int jumlahItem; //variabel untuk menyimpan jumlah
                   //item di dalam dispenser
    int biaya; //variabel untuk menyimpan biaya sebuah item
};

int tipeDispenser::getJumlahItem() const
{
    return jumlahItem;
}

int tipeDispenser::getBiaya() const
{
    return biaya;
}

void tipeDispenser::lakukanPenjualan()
{
    jumlahItem--;
}

tipeDispenser::tipeDispenser()
{
    jumlahItem = 50;
    biaya = 50;
}

tipeDispenser::tipeDispenser(int setJumlahItem, int setBiaya) 
{
    if (setJumlahItem >= 0)
        jumlahItem = setJumlahItem;
    else
        jumlahItem = 50;

    if (setBiaya >= 0)
        biaya = setBiaya;
    else
        biaya = 50;
}
