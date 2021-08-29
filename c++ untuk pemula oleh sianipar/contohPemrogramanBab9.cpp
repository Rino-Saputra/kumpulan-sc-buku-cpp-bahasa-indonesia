//Contoh pemrograman Bab 9.

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

const int JUMLAH_PENJUAL = 6;

struct rekamanPenjual
{
    string ID; 			//ID penjual
    double penjualanQuarter[4]; 	//array untuk menyimpan total
    					//penjualan untuk tiap quarter
   
    double totalPenjualan; 	//jumlah penjualan tahunan penjual
};


void inisialisasi(ifstream& indata, rekamanPenjual list[], int ukuranList);
void dapatData(ifstream& infile, rekamanPenjual list[], int ukuranList);
void penjualanPerQuarter(rekamanPenjual list[], int ukuranList, double totalPenjualanQuarter[]);
void totalPenjualanPerOrang(rekamanPenjual list[], int ukuranList);
void tampilLaporan(ofstream& outfile, rekamanPenjual list[], int ukuranList, double penjualanQuarter[]);
void penjualanMaksPerOrang(ofstream& outData, rekamanPenjual list[], int ukuranList);
void penjualanMaksPerQuarter(ofstream& outData, double penjualanQuarter[]);


int main()
{
    ifstream infile; //variabel aliran masukan
    ofstream outfile; //variabel aliran keluaran

    string inputFile; //variabel untuk memuat nama file masukan
    string outputFile; //variabel untuk memuat nama file keluaran
    double totalPenjualanQuarter[4]; //array untuk memuat penjualan per quarter

    rekamanPenjual daftarPenjual[JUMLAH_PENJUAL]; //array untuk memuat
                                                  //data penjual

    cout << "Masukkan nama file ID penjual: "; 
    cin >> inputFile; 
    cout << endl;

    infile.open(inputFile.c_str()); 

    if (!infile)
    {
        cout << "Tidak dapat membuka file masukan."
             << endl;
        return 1;
    }

    inisialisasi(infile, daftarPenjual, JUMLAH_PENJUAL); 

    infile.close(); 
    infile.clear(); 

    cout << "Masukkan nama file data penjualan: "; 
    cin >> inputFile; 
    cout << endl;

    infile.open(inputFile.c_str()); 

    if (!infile) 
    {
        cout << "Tidak dapat membuka file masukan."
        << endl;
        return 1;
    }

    cout << "Masukkan nama file keluaran: "; 
    cin >> outputFile;
    cout << endl;

    outfile.open(outputFile.c_str()); 
    outfile << fixed << showpoint
            << setprecision(2); 

    dapatData(infile, daftarPenjual, JUMLAH_PENJUAL); 

    penjualanPerQuarter(daftarPenjual, JUMLAH_PENJUAL, totalPenjualanQuarter); 

    totalPenjualanPerOrang(daftarPenjual, JUMLAH_PENJUAL); 

    tampilLaporan(outfile, daftarPenjual, JUMLAH_PENJUAL, totalPenjualanQuarter); 

    penjualanMaksPerOrang(outfile, daftarPenjual, JUMLAH_PENJUAL); 

    penjualanMaksPerQuarter(outfile, totalPenjualanQuarter); 

    infile.close(); 
    outfile.close(); 

    return 0;
}

void inisialisasi(ifstream& indata, rekamanPenjual list[], int ukuranList)
{
    int indeks;
    int quarter;

    for (indeks = 0; indeks < ukuranList; indeks++)
    {
        indata >> list[indeks].ID; //mendapatkan ID penjual
        for (quarter = 0; quarter < 4; quarter++)
            list[indeks].penjualanQuarter[quarter] = 0.0;
        list[indeks].totalPenjualan = 0.0;
    }
} //akhir inisialisasi

void dapatData(ifstream& infile, rekamanPenjual list[], int ukuranList)
{
    int indeks;
    int quarter;
    string sID;
    int bulan;
    double jumlah;

    infile >> sID; //mendapatkan ID penjual

    while (infile)
    {
        infile >> bulan >> jumlah; //mendapatkan bulan penjualan
                                   //dan jumlah penjualan

        for (indeks = 0; indeks < ukuranList; indeks++)
            if (sID == list[indeks].ID)
                break;

        if (1 <= bulan && bulan <= 3)
            quarter = 0;
        else if (4 <= bulan && bulan <= 6)
            quarter = 1;
        else if (7 <= bulan && bulan <= 9)
            quarter = 2;
        else
            quarter = 3;
 
               if (indeks < ukuranList)
            list[indeks].penjualanQuarter[quarter] += jumlah;
        else
            cout << "ID penjual tak-valid." << endl;

        infile >> sID;
    } //akhir while
} //akhir dapatData

void penjualanPerQuarter(rekamanPenjual list[], int ukuranList,
                         double totalPenjualanQuarter[])
{
    int quarter;
    int indeks;

    for (quarter = 0; quarter < 4; quarter++)
        totalPenjualanQuarter[quarter] = 0.0;
    
    for (quarter = 0; quarter < 4; quarter++)
        for (indeks = 0; indeks < ukuranList; indeks++)
            totalPenjualanQuarter[quarter] +=
                list[indeks].penjualanQuarter[quarter];
} //akhir penjualanPerQuarter

void totalPenjualanPerOrang(rekamanPenjual list[], int ukuranList)
{
    int indeks;
    int quarter;

    for (indeks = 0; indeks < ukuranList; indeks++)
        for (quarter = 0; quarter < 4; quarter++)
            list[indeks].totalPenjualan +=
                list[indeks].penjualanQuarter[quarter];
} //akhir totalPenjualanPerOrang

void tampilLaporan(ofstream& outfile, rekamanPenjual list[],
                   int ukuranList, double penjualanQuarter[])
{
    int indeks;
    int quarter;

    outfile << "-------------- Laporan Penjualan Tahunan -----------"
            << "----" << endl;
    outfile << endl;

    outfile << " ID QT1 QT2 QT3 "
            << "QT4 Total" << endl;

    outfile << "_____________________________________________"
            << "_________________" << endl;

    for (indeks = 0; indeks < ukuranList; indeks++)
    {
        outfile << list[indeks].ID << " ";

        for (quarter = 0; quarter < 4; quarter++)
            outfile << setw(10)
                    << list[indeks].penjualanQuarter[quarter];
        outfile << setw(10) << list[indeks].totalPenjualan << endl;
    }
    outfile << "Total ";

    for (quarter = 0; quarter < 4; quarter++)
        outfile << setw(10)<< penjualanQuarter[quarter];
    outfile << endl << endl;
} //akhir tampilLaporan

void penjualanMaksPerOrang(ofstream& outData, rekamanPenjual list[],
                     int ukuranList)
{
    int indeksMaks = 0;
    int indeks;

    for (indeks = 1; indeks <ukuranList; indeks++)
        if (list[indeksMaks]. totalPenjualan <list[indeks].totalPenjualan)
            indeksMaks = indeks;
    
    outData << "Penjualan Maks Kategori Penjual: ID = "
            << list[indeksMaks].ID
            << ", Jumlah = Rp. " << list[indeksMaks].totalPenjualan
            << endl;
} //akhir penjualanMaksPerOrang

void penjualanMaksPerQuarter(ofstream& outData,
                      double penjualanQuarter[])
{
    int quarter;
    int indeksMaks = 0;

    for (quarter = 0; quarter < 4; quarter++)
        if (penjualanQuarter[indeksMaks] < penjualanQuarter[quarter])
            indeksMaks = quarter;

    outData << "Penjualan Maks Kategori Quarter: Quarter = "
            << indeksMaks + 1
            << ", Jumlah = Rp. " << penjualanQuarter[indeksMaks]
            << endl;
} //akhir penjualanMaksPerQuarter
