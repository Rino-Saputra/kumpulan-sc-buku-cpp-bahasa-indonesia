//Program: Permainan Batu, Kertas, dan Gunting

#include <iostream>

using namespace std;

enum tipeObjek {BATU, KERTAS, GUNTING};

//Prototipe fungsi
void tampilAturan();
tipeObjek ambilPermainan(char pilihan);
bool pilihanValid(char pilihan);
void konversiEnum(tipeObjek objek);
void hasilPermainan(tipeObjek pemain1, tipeObjek pemain2, int& pemenang);
void tampilHasil(int gHitung, int wHitung1, int wHitung2);
tipeObjek objekPemenangan(tipeObjek pemain1, tipeObjek pemain2);

int main()
{
    int hitungPermainan; 	//variabel untuk menyimpan jumlah permainan
                            //yang telah dimainkan
    int hitungMenang1; 		//variabel untuk menyimpan jumlah permainan
                            //yang dimenangkan oleh pemain 1
    int hitungMenang2; 		//variabel untuk menyimpan jumlah permainan
                            //yang dimenangkan oleh pemain 2
    int pemenangPermainan;
    char respon; 			//variabel untuk mendapatkan respon pengguna
    char pilihan1;
    char pilihan2;

    tipeObjek pemain1; 		//pilihan pemain 1
    tipeObjek pemain2; 		//pilihan pemain 2
 
    //Inisialisasi variabel-variabel
    hitungPermainan = 0;
    hitungMenang1 = 0;
    hitungMenang2 = 0;

    tampilAturan();

    cout << "Masukkan Y/y untuk memainkan permainan: "; 
    cin >> respon; 
    cout << endl;

    while (respon == 'Y' || respon == 'y') 
	{
        cout << "Pemain 1 masukkan pilhan Anda: "; 
        cin >> pilihan1; 
        cout << endl;

        cout << "Pemain 2 masukkan pilhan Anda: "; 
        cin >> pilihan2;
        cout << endl;

		if (pilihanValid(pilihan1)
            && pilihanValid(pilihan2))
		{
            pemain1 = ambilPermainan(pilihan1);
            pemain2 = ambilPermainan(pilihan2);

            hitungPermainan++;

            hasilPermainan(pemain1, pemain2, pemenangPermainan); 

            if (pemenangPermainan == 1) 
                hitungMenang1++;
            else if (pemenangPermainan == 2)
                hitungMenang2++;
		}//akhir if

        cout << "Masukkan Y/y untuk memainkan permainan: "; 
        cin >> respon; 
        cout << endl;
	}//akhir while

    tampilHasil(hitungPermainan, hitungMenang1, hitungMenang2);

    return 0;
}//akhir main

void tampilAturan()
{
    cout << "Selamat datang ke permainan Batu, Kertas, "
         << "dan Gunting." << endl;
    cout << "Ini merupakan sebuah permainan dua pemain. Untuk tiap "
         << "permainan, setiap" << endl;
    cout << " pemain memilih salah satu objek Batu, "
         << "Kertas, atau Gunting." << endl;
    cout << "Beberapa aturan untuk memenangkan permainan adalah: " << endl;
    cout << "1. Jika kedua pemain memilih objek yang sama, permainan "
         << "seri." << endl;
    cout << "2. Batu memecah Gunting: Jadi pemain yang memilih "
         << "Batu akan menang." << endl;
    cout << "3. Kertas menutupi Batu: Jadi pemain yang memilih "
         << "Kertas akan menang." << endl;
    cout << "4. Gunting memotong kertas: Jadi pemain yang memilih "
         << "Gunting akan menang." << endl << endl;
    cout << "Masukkan B atau b untuk Batu, K atau k untuk memilih "
         << "Kertas, dan G atau g untuk memilih Gunting." << endl;
}

tipeObjek ambilPermainan(char pilihan)
{
    tipeObjek objek;

    switch (pilihan)
    {
        case 'B':
        case 'b':
            objek = BATU;
            break;
        case 'K':
        case 'k':
            objek = KERTAS;
            break;
        case 'G':
        case 'g':
            objek = GUNTING;
    }

    return objek;
}

void hasilPermainan(tipeObjek pemain1, tipeObjek pemain2, int& pemenang)
{
    tipeObjek objekPemenang;

    if (pemain1 == pemain2)
    {
        pemenang = 0;
        cout << "Kedua pemain memilih ";
        konversiEnum(pemain1);
        cout << ". Ini adalah permainan seri." << endl;
    }
    else
    {
        objekPemenang = objekPemenangan(pemain1, pemain2);

        //Menampilkan pilihan tiap pemain
        cout << "Pemain 1 memilih ";
        konversiEnum(pemain1);
        cout << " dan pemain 2 memilih ";
        konversiEnum(pemain2);
        cout << ". ";

        //Menentukan pemenang
        if (pemain1 == objekPemenang)
            pemenang = 1;
        else if (pemain2 == objekPemenang)
            pemenang = 2;

        //Menampilkan pemenang
        cout << "Pemain " << pemenang << " memenangkan permainan."
             << endl;
    }
}

void konversiEnum(tipeObjek objek)
{
    switch (objek)
    {
        case BATU:
            cout << "Batu";
            break;
        case KERTAS:
            cout << "Kertas";
            break;
        case GUNTING:
            cout << "Gunting";
    }
}

tipeObjek objekPemenangan(tipeObjek pemain1, tipeObjek pemain2)
{
    if ((pemain1 == BATU && pemain2 == GUNTING)
          || (pemain2 == BATU && pemain1 == GUNTING))
        return BATU;
    else if ((pemain1 == BATU && pemain2 == KERTAS)
          || (pemain2 == BATU && pemain1 == KERTAS))
        return KERTAS;
    else
        return GUNTING;
}

bool pilihanValid(char pilihan)
{
    switch (pilihan)
    {
        case 'B':
        case 'b':
        case 'K':
        case 'k':
        case 'G':
        case 'g':
            return true;
        default:
            return false;
    }
}

void tampilHasil(int gHitung, int wHitung1, int wHitung2)
{
    cout << "Total jumlah permainan: " << gHitung
         << endl;

    cout << "Jumlah permainan yang dimenangkan oleh pemain 1: "
         << wHitung1 << endl;

    cout << " Jumlah permainan yang dimenangkan oleh pemain 2: "
         << wHitung2 << endl;
}

