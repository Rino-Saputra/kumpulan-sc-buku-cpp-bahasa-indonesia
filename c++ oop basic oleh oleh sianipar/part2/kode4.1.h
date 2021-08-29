// kode4.1.h
#ifndef KODE4_1_H_
#define KODE4_1_H_
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
#endif