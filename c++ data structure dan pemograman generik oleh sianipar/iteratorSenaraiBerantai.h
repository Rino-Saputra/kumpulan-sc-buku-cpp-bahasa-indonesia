//***************************************************************
// Penulish: RH. Sianipar
//
// Kelas ini menetapkan anggota-anggota untuk mengimplementasikan
// sebuah iterator untuk sebuah senarai berantai.
//***************************************************************

//Definisi atas simpul
template <class Tipe>
struct tipeSimpul
{
    Tipe info;
    tipeSimpul<Tipe> *link;
};


template <class Tipe>
class iteratorSenaraiBerantai
{
public:
    iteratorSenaraiBerantai();
    //Konstruktor default
    //Postkondisi: sekarang = NULL;

    iteratorSenaraiBerantai(tipeSimpul<Tipe> *ptr);
    //Konstruktor dengan sebuah parameter.
    //Postkondisi: sekarang = ptr;

    Tipe operator*();
    //Fungsi untuk mengoverload operator dereferensi *.
    //Postkondisi: Menghasilkan nilai infoe yang dimuat di dalam simpul.

    iteratorSenaraiBerantai<Tipe> operator++();
    //Mengoverload operator prainkremen.
    //Postkondisi: Iterator digerakkan maju ke simpul berikutnya.

    bool operator==( const iteratorSenaraiBerantai<Tipe>& kanan) const;
    //Mengoverload operator ekualitas.
    //Postkondisi: Menghasilkan true jika iterator ini sama dengan
    //iterator yang ditetapkan oleh kanan, sebaliknya ia menghasilkan
    //false.

    bool operator!=(const iteratorSenaraiBerantai<Tipe>& kanan) const;
    //Mengoverload operator tidak sama dengan.
    //Postkondisi: Menghasilkan true jika iterator ini tidak sama dengan
    //iterator yang ditetapkan oleh kanan, sebaliknya ia menghasilkan
    //false.

private:
    tipeSimpul<Tipe> *sekarang; //pointer untuk menunjuk ke simpul sekarang
                                //di dalam senarai berantai
};

template <class Tipe>
iteratorSenaraiBerantai<Tipe>::iteratorSenaraiBerantai()
{
    sekarang = NULL;
}

template <class Tipe>
iteratorSenaraiBerantai<Tipe>::
                       iteratorSenaraiBerantai(tipeSimpul<Tipe> *ptr)
{
    sekarang = ptr;
}

template <class Tipe>
Tipe iteratorSenaraiBerantai<Tipe>::operator*()
{
    return sekarang->info;
}

template <class Tipe>
iteratorSenaraiBerantai<Tipe> iteratorSenaraiBerantai<Tipe>::operator++()
{
    sekarang = sekarang->link;
    return *this;
}

template <class Tipe>
bool iteratorSenaraiBerantai<Tipe>::operator==
               (const iteratorSenaraiBerantai<Tipe>& kanan) const
{
    return (sekarang == kanan.sekarang);
}

template <class Tipe>
bool iteratorSenaraiBerantai<Tipe>::operator!=
               (const iteratorSenaraiBerantai<Tipe>& kanan) const
{
    return (sekarang != kanan.sekarang);
}
