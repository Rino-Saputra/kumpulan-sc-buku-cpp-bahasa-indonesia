// kode6.1.h
#ifndef KODE6_1_H_
#define KODE6_1_H_
class Tv
{
public:
friend class Remote;	// Remote dapat mengakses bagian-bagian privat kelas Tv
enum {Mati, Hidup};
enum {MinNil,MaksNil = 20};
enum {Antenna, Kabel};
enum {TV, VCR};
Tv(int s = Mati, int mc = 100) : keadaan(s), volume(5),
makskanal(mc), kanal(2), mode(Kabel), masukan(TV) {}
void HidupMati() {keadaan = (keadaan == Hidup)? Mati : Hidup;}
bool apaHidup() const {return keadaan == Hidup;}
bool volnaik();
bool volturun();
void kanNaik();
void kanTurun();
void atur_mode() {mode = (mode == Antenna)? Kabel : Antenna;}
void atur_masukan() {masukan = (masukan == TV)? VCR : TV;}
void pengaturan() const; // menampilkan semua pengaturan
private:
int keadaan; // Hidup atau Mati
int volume; // diasumsikan telah didigitalisasi
int makskanal; // jumlah maksimum kanal
int kanal; // pengaturan kanal saat ini
int mode; // broadcast atau kabel
int masukan; // TV atau VCR
};
class Remote
{
private:
int mode; // pengendali TV atau VCR
public:
Remote(int m = Tv::TV) : mode(m) {}
bool volnaik(Tv & t) { return t.volnaik();}
bool volturun(Tv & t) { return t.volturun();}
void HidupMati(Tv & t) { t.HidupMati(); }
void kanNaik(Tv & t) {t.kanNaik();}
void kanTurun(Tv & t) {t.kanTurun();}
void atur_kan(Tv & t, int c) {t.kanal = c;}
void atur_mode(Tv & t) {t.atur_mode();}
void atur_masukan(Tv & t) {t.atur_masukan();}
};
#endif