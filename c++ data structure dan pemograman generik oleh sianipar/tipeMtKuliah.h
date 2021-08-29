#include <string>

class tipeMtKuliah
{
public:
    void setInfoMtKuliah(string cNama, string cNo,
                         char nilai, int kredit);
    //Fungsi untuk menetapkan informasi matakuliah
    //Informasi matakuliah akan ditetapkan sesuai dengan
    //parameter-parameter.
    //Postkondisi: namaMtKuliah = cNama; noMtKuliah = cNo;
    //nilaiMtKuliah = nilai; kreditMtKuliah = kredit;

    void tampil(ostream& outp, bool apaNilai);
    //Fungsi untuk menampilkan informasi matakuliah
    //Jika parameter bool apaNilai bernilai true, maka nilai
    //akan ditampilkan, sebaliknya tiga bintang akan ditampilkan.

    int getKredit();
    //Fungsi untuk menghasilkan jam kredit
    //Nilai dari anggota data private krediMtKuliah
    //dijadikan nilai balik.

    void getNomorMtKuliah(string& cNo);
    //Fungsi untuk menghasilkan nomor matakuliah
    //Postkondisi: cNo = noMtKuliah;

    char getNilai();
    //Fungsi untuk menghasilkan nilai matakuliah
    //Nilai dari anggota data private nilaiMtKuliah
    //dijadikan nilai balik.

    bool operator==(const tipeMtKuliah&) const;
    bool operator!=(const tipeMtKuliah&) const;
    bool operator<=(const tipeMtKuliah&) const;
    bool operator<(const tipeMtKuliah&) const;
    bool operator>=(const tipeMtKuliah&) const;
    bool operator>(const tipeMtKuliah&) const;

    tipeMtKuliah(string cNama = "", string cNo = "",
                 char nilai = '*', int kredit = 0);
    //Konstruktor
    //Objek diinisialisasi sesuai parameter-parameter.
    //Postkondisi: namaMtKuliah = cNama; noMtKuliah = cNo;
    //nilaiMtKuliah = nilai; kreditMtKuliah = kredit;

private:
    string namaMtKuliah; //variabel untuk menyimpan nama matakuliah
    string noMtKuliah; //variabel untuk menyimpan nomor matakuliah
    char nilaiMtKuliah; //variabel untuk menyimpan nilai
    int kreditMtKuliah; //variabel untuk menyimpan kredit matakuliah
};

void tipeMtKuliah::setInfoMtKuliah(string cNama, string cNo,
                                   char nilai, int kredit)
{
    namaMtKuliah = cNama;
    noMtKuliah = cNo;
    nilaiMtKuliah = nilai;
    kreditMtKuliah = kredit;
}

void tipeMtKuliah::tampil(ostream& outp, bool apaNilai)
{
    outp << left; 					            //langkah 1
    outp << "        " << noMtKuliah << " "; 		//langkah 2
    outp << "                " << namaMtKuliah; 		    //langkah 3
    outp.unsetf(ios::left); 				    //langkah 4
    outp << "   " << kreditMtKuliah << " "; 	//langkah 5

    if (apaNilai) 					//langkah 6
        outp << "    " << nilaiMtKuliah << endl;
    else
        outp << "    " << "***" << endl;
}

tipeMtKuliah::tipeMtKuliah(string cNama, string cNo,
                           char nilai, int kredit)
{
    setInfoMtKuliah(cNama, cNo, nilai, kredit);
}

int tipeMtKuliah::getKredit()
{
    return kreditMtKuliah;
}

char tipeMtKuliah::getNilai()
{
    return nilaiMtKuliah;
}

void tipeMtKuliah::getNomorMtKuliah(string& cNo)
{
    cNo = noMtKuliah;
}

bool tipeMtKuliah::operator==(const tipeMtKuliah& kanan) const
{
    return (noMtKuliah == kanan.noMtKuliah);
}

bool tipeMtKuliah::operator!=(const tipeMtKuliah& kanan) const
{
    return (noMtKuliah != kanan.noMtKuliah);
}

bool tipeMtKuliah::operator<=(const tipeMtKuliah& kanan) const
{
    return (noMtKuliah <= kanan.noMtKuliah);
}

bool tipeMtKuliah::operator<(const tipeMtKuliah& kanan) const
{
    return (noMtKuliah < kanan.noMtKuliah);
}

bool tipeMtKuliah::operator>=(const tipeMtKuliah& kanan) const
{
    return (noMtKuliah >= kanan.noMtKuliah);
}

bool tipeMtKuliah::operator>(const tipeMtKuliah& kanan) const
{
    return (noMtKuliah > kanan.noMtKuliah);
}
