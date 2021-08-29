// kode3.10.h 
#ifndef KODE3_10_H_
#define KODE3_10_H_
// Antrian ini memuat kelas Konsumen
class Konsumen
{
private:
long tiba; 				// waktu tiba konsumen
int waktuproses; 			// waktu pemrosesan bagi konsumen
public:
Konsumen() { tiba = waktuproses = 0; }
void atur(long kapan);
long kapan() const { return tiba; }
int pwaktu() const { return waktuproses; }
};

typedef Konsumen Item;

class Antrian
{
private:
// definisi-definisi kelas skop
// Simpul adalah suatu struktur bertingkat dan bersifat lokal
struct Simpul { Item item; struct Simpul * berikutnya;};
enum {Q_SIZE = 10};
// anggota-anggota kelas privat
Simpul * depan; 		// pointer ke depan Antrian
Simpul * belakang; 		// pointer ke belakang Antrian
int items; 			// jumlah item saat ini di dalam Antrian
const int qsize; 			// jumlah item maksimum di dalam Antrian
// definisi-definisi pencegahan untuk mencegah penduplikasian publik
Antrian(const Antrian & q) : qsize(0) { }
Antrian & operator=(const Antrian & q) { return *this;}
public:
Antrian(int qs = Q_SIZE); 		// menciptakan antrian dengan batas qs
~Antrian();
bool apakosong() const;
bool apapenuh() const;
int hitungantri() const;
bool pengantrian(const Item &item); 	// menambah item ke bagian belakang
bool pembuangan(Item &item); 		// membuang item dari depan
};
#endif