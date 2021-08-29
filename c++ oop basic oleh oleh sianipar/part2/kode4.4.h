// kode4.4.h
#ifndef KODE4_4_H_
#define KODE4_4_H_
// kelas basis sederhana
class TabelPemainTennis
{
private:
enum {LIM = 20};
char namapertama[LIM];
char namaakhir[LIM];
bool Tabelmilik;
public:
TabelPemainTennis (const char * fn = "tidak ada",
const char * ln = "tidak ada", bool ht = false);
void Nama() const;
bool TabelMilik() const { return Tabelmilik; };
void ResetTabel(bool v) { Tabelmilik = v; };
};

// kelas terderivasi yang sederhana
class PemainSenior : public TabelPemainTennis
{
private:
unsigned int peringkat; 			// menambahkan suatu anggota data
public:
PemainSenior (unsigned int r = 0, const char * fn = "tidak ada", const char * ln = "tidak ada", bool ht = false);
PemainSenior(unsigned int r, const TabelPemainTennis & tp);
unsigned int Peringkat() { return peringkat; } 	// menambahkan suatu metode
void ResetPeringkat (unsigned int r) {peringkat = r;} // menambahkan suatu metode
};

#endif