#include "tipeOrang.h"
#include "tipeMtKuliah.h"

class tipeMahasiswa: public tipeOrang
{
public:
    void setInfo(string fnama, string lNama, int ID,
                 bool apaDibayar,
                 vector<tipeMtKuliah> kuliah);
    //Fungsi untuk menetapkan informasi mahasiswa
    //Anggota-anggota private ditetapkan berdasarkan
    //parameter-parameter.

    void tampil(ostream& out, double biayaPerSKS);
    //Fungsi untuk menampilkan laporan nilai mahasiswa
    //Keluaran disimpan di dalam sebuah file yang ditetapkan oleh
    //parameter out.

    tipeMahasiswa();
    //Konstruktor default
    //Postkondis: Anggota-anggota data diinisialisasi dengan
    //nilai-nilai defaul.

    int getJumlahKredit();
    //Fungsi untuk menghasilkan jumlah kredit yang diambil
    //oleh seorang mahasiswa.
    //Postkondisi: Jumlah kredit yang diambil seorang mahasiswa
    //dihitung dan dijadikan nilai balik.

    double getIPK();
    //Fungsi untuk menghasilkan IPK.
    //Postkondisi: IPK dihitung dan dijadikan nilai balik.

    double totalUangKuliah(double biayaPerSKS);
    //Fungsi untuk menghasilkan uang kuliah
    //Postkondisi: Tagihan uang kuliah dihitung
    //dan dijadikan nilai balik.

private:
int sNIP;                  //variabel untuk menyimpan NIP mahasiswa
int jumlahMtKuliah;        //variabel untuk menampung jumlah matakuliah
bool apaUangKuliahDibayar; //variabel untuk mengindikasikan jika 
                           //uang kuliah sudah dibayarkan atau tidak
vector<tipeMtKuliah> daftarMtKuliah;//vektor untuk menyimpan matakuliah
};

void tipeMahasiswa::setInfo(string fNama, string lNama, int NIP,
                            bool apaDibayar,
                            vector<tipeMtKuliah> kuliah)
{
    setNama(fNama, lNama);
    sNIP = NIP;
    apaUangKuliahDibayar = apaDibayar;
    jumlahMtKuliah = kuliah.size();
    daftarMtKuliah = kuliah;
    sort(daftarMtKuliah.begin(),daftarMtKuliah.end());
}

tipeMahasiswa::tipeMahasiswa()
{
    jumlahMtKuliah = 0;
    sNIP = 0;
    apaUangKuliahDibayar = false;
}

void tipeMahasiswa::tampil(ostream& outp, double biayaPerSKS)
{
    outp << "Nama mahasiswa: " << tipeOrang::getNamaPertama()
         << " " << tipeOrang::getNamaAkhir() << endl;             //langkah 1

    outp << "NIP mahasiswa: " << sNIP << endl;                    //langkah 2
    
    outp << "Jumlah matakuliah yang diambil: "
         << jumlahMtKuliah << endl << endl;                       //langkah 3

    outp << left;
    outp << "Nomor MtKuliah" << "                  " << " Nama MtKuliah"
         << "        " << "Kredit"
         << "      "<< "Nilai" << endl;                           //langkah 4

    outp.unsetf(ios::left);

    for (int i = 0; i < jumlahMtKuliah; i++)
        daftarMtKuliah[i].tampil(outp, apaUangKuliahDibayar);      //langkah 5
    outp << endl;

    outp << "Total kredit adalah: "
         << getJumlahKredit() << endl;                            //langkah 6
    
    outp << fixed << showpoint;              //langkah 7
 
    if (apaUangKuliahDibayar)                                      //langkah 8
        outp << "IPK Midsemester: " << getIPK() << endl;
    else
    {
        outp << "*** Nilai Anda sedang ditahan karena belum "
             << "membayar uang kuliah. ***" << endl;
        outp << "Total yang harus Anda bayar: Rp. " << totalUangKuliah(biayaPerSKS)
             << endl;
    }
 
    outp << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"
         << "-*-*-*-*-" << endl << endl;
}

int tipeMahasiswa::getJumlahKredit()
{
    int totalKredit = 0;
    
    for (int i = 0; i < jumlahMtKuliah; i++)
        totalKredit += daftarMtKuliah[i].getKredit();

    return totalKredit;
}

double tipeMahasiswa::totalUangKuliah(double biayaPerSKS)
{
    return biayaPerSKS * getJumlahKredit();
}

double tipeMahasiswa::getIPK()
{
    double jum = 0.0;

    for (int i = 0; i < jumlahMtKuliah; i++)
    {
        switch (daftarMtKuliah[i].getNilai())
        {
        case 'A':
            jum += daftarMtKuliah[i].getKredit() * 4;
            break;

        case 'B':
            jum += daftarMtKuliah[i].getKredit() * 3;
            break;

        case 'C':
            jum += daftarMtKuliah[i].getKredit() * 2;
            break;

        case 'D':
            jum += daftarMtKuliah[i].getKredit() * 1;
            break;

        case 'F':
            break;

        default:
            cout << "Nilai matakuliah tidak valid" << endl;
        }
    }

    if (getJumlahKredit() != 0)
        return jum / getJumlahKredit();
    else
        return 0;
}
