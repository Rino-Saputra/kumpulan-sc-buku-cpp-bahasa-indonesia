//****************************************************************
// Penulis: RH. Sianipar
//
// Kelas ini menentukan anggota-anggota untuk mengimplementasikan 
// properti-properti dasar dari senarai berbasis-array.
//****************************************************************

template <class tipeElem>
class tipeSenaraiArray
{
public:
    const tipeSenaraiArray<tipeElem>& operator=
                          (const tipeSenaraiArray<tipeElem>&);
    //mengoverload operator penugasan

    bool apaKosong() const;
    //Fungsi untuk menentukan apakah senarai kosong
    //Postkondisi: Menghasilkan true jika senarai kosong;
    //sebaliknya, menghasilkan false.

    bool apaPenuh() const;
    //Fungsi untuk menentukan apakah senarai penuh.
    //Postkondisi: Menghasilkan true jika senarai penuh;
    //sebaliknya, menghasilkan false.

    int ukuranSenarai() const;
    //Fungsi untuk menentukan jumlah elemen di dalam senarai
    //Postkondisi: Menghasilkan nilai dari panjang.

    int ukuranSenaraiMaks() const;
    //Fungsi untuk menentukan ukuran senarai.
    //Postkondisi: Menghasilkan nilai dari ukuranMaks.

    void tampil() const;
    //Fungsi untuk menampilkan elemen-elemen senarai
    //Postkondisi: Elemen-elemen senarai ditampilkan pada
    //divais keluaran standar.

    bool apaItemSama(int lokasi, const tipeElem& item) const;
    //Fungsi untuk menentukan apakah item sama dengan
    //item yang ada di dalam senarai pada posisi yang ditentukan oleh lokasi
    //Postkondisi: Menghasilkan true jika senarai[lokasi]
    //sama dengan item; sebaliknya,
    //menghasilkan false.

    void sisipPada(int lokasi, const tipeElem& itemSisip);
    //Fungsi untuk menyisipkan sebuah item di dalam senarai pada
    //posisi yang ditentukan oleh lokasi. Item yang akan disisipkan
    //dilewatkan sebagai sebuah parameter kepada fungsi.
    //Postkondisi: Dimulai dari lokasi, elemen-elemen dari senarai
    //digeser ke bawah, senarai[lokasi] = itemSisip;,
    //dan panjang++;. Jika senarai penuh atau lokasi di luar
    //rentang, maka pesan ditampilkan.

    void sisipAkhir(const tipeElem& itemSisip);
    //Fungsi untuk menyisipkan sebuah item di akhir senarai.
    //Parameter itemSisip menetapkan item yang akan disisipkan.
    //Postkondisi: senarai[panjang] = itemSisip; dan panjang++;
    //Jika senarai penuh, maka pesan seusai akan
    //ditampilkan.

    void hapusPada(int lokasi);
    //Fungsi untuk menghapus item dari senarai pada
    //posisi yang ditetapkan oleh lokasi
    //Postkondisi: Elemen senarai pada senarai[lokasi] dihapus
    //dan panjang didekremen sebesar 1. Jika lokasi di luar
    //rentang, maka pesan sesuai akan ditampilkan.

    void ambilPada(int lokasi, tipeElem& itemAmbil) const;
    //Fungsi untuk mengambil elemen dari senarai pada
    //posisi yang ditetapkan oleh lokasi.
    //Postkondisi: itemAmbil = senarai[lokasi]
    //Jika lokasi di luar rentang, maka pesan yang sesuai
    //akan ditampilkan.

    void gantiPada(int lokasi, const tipeElem& itemGanti);
    //Fungsi untuk mengganti elemen-elemen di dalam senarai pada
    //posisi yang ditetapkan oleh lokasi. Item yang akan diganti
    //ditetapkan oleh parameter itemGanti.
    //Postkondisi: senarai[lokasi] = itemGanti
    //Jika lokasi di luar rentang, maka pesan yang sesuai
    //akan ditampilkan.

    void bersihSenarai();
    //Fungsi untuk menghapus semua elemen dari senarai.
    //Setelah operasi ini, ukuran senarai menjadi nol.
    //Postkondisi: panjang = 0;

    int cariSek(const tipeElem& item) const;
    //Fungsi untuk mencari item tertentu pada senarai.
    //Postkondisi: Jika item ditemukan, maka dihasilkan lokasi
    //di dalam array dimana item ditemukan; sebaliknya,
    //dihasilkan -1.

    void sisip(const tipeElem& itemSisip);
    //Fungsi untuk menyisipkan item yang ditetapkan oleh parameter
    //itemSisip di akhir senarai. Namun, pertama-tama senarai
    //diteliti untuk melihat apakah item yang akan disisipkan
    //telah ada di dalam senarai.
    //Postkondisi: senarai[panjang] = itemSisip dan panjang++
    //Jika item telah ada di dalam senarai atau senarai
    // penuh, maka pesan sesuai akan ditampilkan.

    void hapus(const tipeElem& itemHapus);
    //Fungsi untuk menghapus sebuah item dari senarai. Parameter
    //itemHapus menetapkan item yang akan dihapus.
    //Postkondisi: Jika itemHapus ditemukan di dalam senarai,
    // maka ia dihapus dari senarai dan panjang
    // didekremen sebesar satu.

    tipeSenaraiArray(int ukuran = 100);
    //konstruktor
    //Menciptakan sebuah array dengan ukuran yang ditetapkan oleh
    //parameter ukuran. UKuran array default adalah 100.
    //Postkondisi: panjang = 0,
    //dan ukuranMaks = ukuran

    tipeSenaraiArray(const tipeSenaraiArray<tipeElem>& senaraiLain);
    //konstruktor penyalin

    ~tipeSenaraiArray();
    //destruktor
    //Mendealokasi memori yang ditempati oleh array.

	void pengurutanSeleksi();
	void pengurutanPenyisipan();
	void quickSort();

protected:
    tipeElem *senarai; //array untuk menampung elemen-elemen senarai
    int panjang; //untuk menyimpan panjang senarai
    int ukuranMaks; //untuk menyimpan ukuran maksimum dari senarai

private:
	void tukar(int pertama, int kedua);
    int lokasiMin(int pertama, int akhir);
	int partisi(int pertama, int akhir);
	void rekQuickSort(int pertama, int akhir);
};

template <class tipeElem>
bool tipeSenaraiArray<tipeElem>::apaKosong() const
{
    return (panjang == 0);
}

template <class tipeElem>
bool tipeSenaraiArray<tipeElem>::apaPenuh() const
{
    return (panjang == ukuranMaks);
}

template <class tipeElem>
int tipeSenaraiArray<tipeElem>::ukuranSenarai() const
{
    return panjang;
}

template <class tipeElem>
int tipeSenaraiArray<tipeElem>::ukuranSenaraiMaks() const
{
    return ukuranMaks;
}


template <class tipeElem>
void tipeSenaraiArray<tipeElem>::tampil() const
{
    for (int i = 0; i < panjang; i++)
        cout << senarai[i] << " ";
    cout << endl;
}

template <class tipeElem>
bool tipeSenaraiArray<tipeElem>::apaItemSama
                              (int lokasi, const tipeElem& item) const
{
    return(list[lokasi] == item);
}


template <class tipeElem>
void tipeSenaraiArray<tipeElem>::sisipPada
                    (int lokasi, const tipeElem& itemSisip)
{
    if (lokasi < 0 || lokasi >= ukuranMaks)
        cerr << "Posisi item yang akan disisipkan "
             << "berada di luar rentang" << endl;
    else
        if (panjang >= ukuranMaks) //senarai penuh
            cerr << "Tidak dapat menyisipkan di dalam senarai penuh" << endl;
        else
        {
            for (int i = panjang; i > lokasi; i--)
                senarai[i] = senarai[i - 1]; //memindahkan elemen-elemen ke kanan
            senarai[lokasi] = itemSisip; //menyisipkan item pada
                                         //posisi tertentu
            panjang++; //menginkremen panjang
        }
} //akhir sisipPada

template <class tipeElem>
void tipeSenaraiArray<tipeElem>::sisipAkhir(const tipeElem& itemSisip)
{
    if (panjang >= ukuranMaks) //senarai penuh
        cerr << "Tidak dapat menyisipkan karena senarai penuh" << endl;
    else
    {
        senarai[panjang] = itemSisip; //menyisipkan item di akhir
        panjang++; //menginkremen panjang
    }
} //akhir sisipAkhir


template <class tipeElem>
void tipeSenaraiArray<tipeElem>::hapusPada(int lokasi)
{
    if (lokasi < 0 || lokasi >= panjang)
        cerr << "Lokasi item yang akan dihapus "
             << "berada di luar rentang" << endl;
    else
    {
        for (int i = lokasi; i < panjang - 1; i++)
            senarai[i] = senarai[i+1];
        panjang--;
    }
} //akhir hapusPada

template <class tipeElem>
void tipeSenaraiArray<tipeElem>::ambilPada
(int lokasi, tipeElem& itemAmbil) const
{
    if (lokasi < 0 || lokasi >= panjang)
        cerr << "Lokasi dari item yang akan diambil nilainya "
             << "berada di luar rentang." << endl;
    else
        itemAmbil = senarai[lokasi];
} //akhir ambilPada

template <class tipeElem>
void tipeSenaraiArray<tipeElem>::gantiPada
                    (int lokasi, const tipeElem& itemGanti)
{
    if (lokasi < 0 || lokasi >= panjang)
        cerr << "Lokasi item yang akan diganti "
             << "berada di luar rentang." << endl;
    else
        senarai[lokasi] = itemGanti;
} //akhir gantiPada

template <class tipeElem>
void tipeSenaraiArray<tipeElem>::bersihSenarai()
{
    panjang = 0;
} //akhir bersihSenarai

template <class tipeElem>
tipeSenaraiArray<tipeElem>::tipeSenaraiArray(int ukuran)
{
    if (ukuran < 0)
    {
        cerr << "Ukuran array harus positif. Menciptakan "
             << "sebuah array berukuran 100. " << endl;
        
        ukuranMaks = 100;
    }

    else
        ukuranMaks = ukuran;

    panjang = 0;

    senarai = new tipeElem[ukuranMaks];
  //  assert(senarai != NULL);
}

template <class tipeElem>
tipeSenaraiArray<tipeElem>::~tipeSenaraiArray()
{
    delete [] senarai;
}

template <class tipeElem>
tipeSenaraiArray<tipeElem>::tipeSenaraiArray(const tipeSenaraiArray<tipeElem>& senaraiLain)
{
    ukuranMaks = senaraiLain.ukuranMaks;
    panjang = senaraiLain.panjang;
    senarai = new tipeElem[ukuranMaks]; //menciptakan array
 //   assert(senarai != NULL); //berhenti jika tidak dapat mengalokasikan
                             //ruang memori

    for (int j = 0; j < panjang; j++) //menyalin senaraiLain
        senarai[j] = senaraiLain.senarai[j];
} //akhir konstruktor penyalin

template <class tipeElem>
const tipeSenaraiArray<tipeElem>& tipeSenaraiArray<tipeElem>::operator=(const tipeSenaraiArray<tipeElem>& senaraiLain)
{
    if (this != &senaraiLain) //menghindari penugasan-diri
    {
        delete [] senarai;
        ukuranMaks = senaraiLain.ukuranMaks;
        panjang = senaraiLain.panjang;

        senarai = new tipeElem[ukuranMaks]; //menciptakan array
    //    assert(senarai != NULL); //jika tidak dapat mengalokasikan ruang
                                 //memori, maka program berhenti

        for (int i = 0; i < panjang; i++)
            senarai[i] = senaraiLain.senarai[i];
    }

    return *this;
}

template <class tipeElem>
int tipeSenaraiArray<tipeElem>::cariSek(const tipeElem& item) const
{
    int lok;
    bool ditemukan = false;
    
    for (lok = 0; lok < panjang; lok++)
        if (senarai[lok] == item)
        {
            ditemukan = true;
            break;
        }
     
    if (ditemukan)
        return lok;
    else
        return -1;
} //akhir cariSek

template <class tipeElem>
void tipeSenaraiArray<tipeElem>::sisip(const tipeElem& itemSisip)
{
    int lok;

    if (panjang == 0) //senarai kosong
        senarai[panjang++] = itemSisip; //menyisipkan item dan
                                        //menginkremen panjang
    else if (panjang == ukuranMaks)
        cerr << "Tidak dapat menyisipkan di dalam senarai penuh." << endl;
    else
    {
        lok = cariSek(itemSisip);
        
        if (lok == -1) //item yang akan disisipkan
                       //tidak ada di dalam senarai
            senarai[panjang++] = itemSisip;
        else
            cerr << "item yang akan disisipkan sudah ada di dalam "
                 << "senarai. Tidak boleh ada duplikat." << endl;
    }
} //akhir sisip

template<class tipeElem>
void tipeSenaraiArray<tipeElem>::hapus(const tipeElem& itemHapus)
{
    int lok;

    if (panjang == 0)
        cerr << "Tidak dapat menghapus dari senarai kosong." << endl;
    else
    {
        lok = cariSek(itemHapus);
        
        if (lok != -1)
            hapusPada(lok);
        else
            cout << "Item yang akan dihapus tidak ada di dalam senarai."
                 << endl;
    }
} //akhir hapus


//===================================================================
//Pengurutan Seleksi
//===================================================================
template <class tipeElem>
int tipeSenaraiArray<tipeElem>::lokasiMin(int pertama, int akhir)
{
    int indeksMin;
    indeksMin = pertama;

    for (int lok = pertama + 1; lok <= akhir; lok++)
        if( senarai[lok] < senarai[indeksMin])
            indeksMin = lok;

    return indeksMin;
} //akhir lokasiMin

template <class tipeElem>
void tipeSenaraiArray<tipeElem>::tukar(int pertama, int kedua)
{
    tipeElem temp;

    temp = senarai[pertama];
    senarai[pertama] = senarai[kedua];
    senarai[kedua] = temp;
}//akhir tukar

template <class tipeElem>
void tipeSenaraiArray<tipeElem>::pengurutanSeleksi()
{
    int indeksMin;

    for (int lok = 0; lok < panjang - 1; lok++)
    {
        indeksMin = lokasiMin(lok, panjang - 1);
        tukar(lok, indeksMin);
    }
}

template <class tipeElem>
void tipeSenaraiArray<tipeElem>::pengurutanPenyisipan()
{
    int pertamaTakTerurut, lokasi;
    tipeElem temp;

    for (pertamaTakTerurut = 1; pertamaTakTerurut < panjang;
                                pertamaTakTerurut++)
    if (senarai[pertamaTakTerurut] < senarai[pertamaTakTerurut - 1])
    {
        temp = senarai[pertamaTakTerurut];
        lokasi = pertamaTakTerurut;

        do
        {
            senarai[lokasi] = senarai[lokasi - 1];
            lokasi--;
        }
        while (lokasi > 0 && senarai[lokasi - 1] > temp);

        senarai[lokasi] = temp;
    }
} //akhir pengurutanPenyisipan

//===================================================================
// Quicksort
//===================================================================
template <class tipeElem>
int tipeSenaraiArray<tipeElem>::partisi(int pertama, int akhir)
{
    tipeElem pivot;

    int indeks, indeksKecil;

    tukar(pertama, (pertama + akhir) / 2);

    pivot = senarai[pertama];
    indeksKecil = pertama;

    for (indeks = pertama + 1; indeks <= akhir; indeks++)
        if (senarai[indeks] < pivot)
        {
            indeksKecil++;
            tukar(indeksKecil, indeks);
        }

    tukar(pertama, indeksKecil);

    return indeksKecil;
}

template <class tipeElem>
void tipeSenaraiArray<tipeElem>::rekQuickSort(int pertama, int akhir)
{
    int lokasiPivot;

    if (pertama < akhir)
    {
        lokasiPivot = partisi(pertama, akhir);
        rekQuickSort(pertama, lokasiPivot - 1);
        rekQuickSort(lokasiPivot + 1, akhir);
    }
}

template <class tipeElem>
void tipeSenaraiArray<tipeElem>::quickSort()
{
    rekQuickSort(0, panjang -1);
}
