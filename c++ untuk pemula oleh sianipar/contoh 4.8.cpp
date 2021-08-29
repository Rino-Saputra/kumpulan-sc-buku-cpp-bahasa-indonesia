// Program ini membaca data dari sebuah file yang memuat nama-nama
// mahasiswa dan skor ujian masing-masing. Program menampilkan nama
// tiap mahasiswa yang diikuti oleh skor ujian yang diikuti oleh nilai.
// Program juga menampilkan rerata skor ujian untuk semua mahasiswa.

#include <iostream> //Baris 1
#include <fstream> //Baris 2
#include <string> //Baris 3
#include <iomanip> //Baris 4

using namespace std; //Baris 5

int main() //Baris 6
{ //Baris 7
    //Mendeklarasikan variabel-variabel untuk memanipulasi data
    string namaPertama; //Baris 8
    string namaAkhir; //Baris 9
    double skorUjian; //Baris 10
    char nilai = ' '; //Baris 11
    double jum = 0; //Baris 12
    int hitung = 0; //Baris 13

    //Mendeklarasikan variabel-variabel aliran
    ifstream inFile; //Baris 14
    ofstream outFile; //Baris 15

    //Membuka file masukan
    inFile.open("Bab5Data.txt"); //Baris 16

    if (!inFile) //Baris 17
	{ //Baris 18
        cout << "Tidak dapat membuka file masukan. "
             << "Program berhenti!" << endl; //Baris 19
        return 1; //Baris 20
	} //Baris 21

    //Membukan file keluaran
    outFile.open("Bab5Data.out"); //Baris 22

    outFile << fixed << showpoint << setprecision(2); //Baris 23

    inFile >> namaPertama >> namaAkhir; //membaca nama Baris 24
    inFile >> skorUjian; //membaca skor ujian Baris 25

    while (inFile) //Baris 26
	{ //Baris 27
        jum = jum + skorUjian; //memperbarui jum Baris 28
        hitung++; //menginkremen hitung Baris 29

        //menentukan nilai
        switch (static_cast<int> (skorUjian) / 10) //Baris 30
		{ //Baris 31
            case 0: //Baris 32
            case 1: //Baris 33
            case 2: //Baris 34
            case 3: //Baris 35
            case 4: //Baris 36
            case 5: //Baris 37
                nilai = 'F'; //Baris 38
                break; //Baris 39
            case 6: //Baris 40
                nilai = 'D'; //Baris 41
                break; //Baris 42
            case 7: //Baris 43
                nilai = 'C'; //Baris 44
                break; //Baris 45
            case 8: //Baris 46
                nilai = 'B'; //Baris 47
                break; //Baris 48
            case 9: //Baris 49
            case 10: //Baris 50
                nilai = 'A'; //Baris 51
                break; //Baris 52
            default: //Baris 53
                cout << "Skor tak-valid." << endl; //Baris 54
		}//akhir switch //Baris 55

        outFile << left << setw(12) << namaPertama
                << setw(12) << namaAkhir
                << right << setw(4) << skorUjian
                << setw(2) << nilai << endl; //Baris 56

        inFile >> namaPertama >> namaAkhir; //membaca nama Baris 57
        inFile >> skorUjian; //membaca skor ujian Baris 58
	}//akhir while //Baris 59

    outFile << endl; //Baris 60

    if (hitung != 0) //Baris 61
        outFile << "Rerata kelas: " << jum / hitung
                <<endl; //Baris 62
    else //Baris 63
        outFile << "Tidak ada data." << endl; //Baris 64

    inFile.close(); //Baris 65
    outFile.close(); //Baris 66

    return 0; //Baris 67
}