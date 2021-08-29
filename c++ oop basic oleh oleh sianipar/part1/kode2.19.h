// kode2.19.h 
#ifndef BATU_H_
#define BATU_H_
class Batuberat
{
private:
enum {Gram_per_batu = 14};		// gram per batu
int batu;						// semua batu
double gram_sisa;				// bagian pecahan gram
double gram;					// keseluruhan berat dalam gram
public:
Batuberat(double gr);			// konstruktor untuk berat double 
Batuberat(int btu, double gr);	// konstruktor untuk batu, gr
Batuberat();					// konstruktor default
~Batuberat(); 
void tampil_gr() const;			// menampilkan berat dalam format gram
void tampil_btu() const;		// menampilkan berat dalam format batu
// fungsi-fungsi konversi
operator int() const;
operator double() const;
};
#endif
