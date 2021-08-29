// kode2.17.cpp -- implementasi metode-metode kelas Batuberat
#include <iostream>
using std::cout;
#include "kode2.16.h"
// mengkonstruksi objek Batuberat dari nilai double
Batuberat::Batuberat(double gr)
{
batu = int (gr) / Gram_per_batu; // pembagian integer
gram_sisa = int (gr) % Gram_per_batu + gr - int(gr);
gram = gr;
}
// mengkonstruksi objek Batuberat dari batu, nilai-nilai double
Batuberat::Batuberat(int btu, double gr)
{
batu = btu;
gram_sisa = gr;
gram = btu * Gram_per_batu +gr;
}
Batuberat::Batuberat()	// konstruktor default
{
	batu = gram = gram_sisa = 0;
}
Batuberat::~Batuberat() // destruktor
{
}
// menampilkan berat dalam batu
void Batuberat::tampil_btu() const
{
cout << batu << " batu, " << gram_sisa << " gram\n";
}
// menampilkan berat dalam gram
void Batuberat::tampil_gr() const
{
cout << gram << " gram\n";
}