// kode6.4.h
#ifndef KODE6_4_H_
#define KODE6_4_H_
class Tv; // deklarasi maju
class Remote
{
public:
enum Keadaan{Mati, Hidup};
enum {MinNil,MaksNil = 20};
enum {Antenna, Kabel};
enum {TV, VCR};
private:
int mode;
public:
Remote(int m = TV) : mode(m) {}
bool volnaik(Tv & t); // hanya prototipe
bool volturun(Tv & t);
void HidupMati(Tv & t) ;
void kanNaik(Tv & t) ;
void kanTurun(Tv & t) ;
void atur_mode(Tv & t) ;
void atur_masukan(Tv & t);
void atur_kan(Tv & t, int c);
};
class Tv
{
public:
friend void Remote::atur_kan(Tv & t, int c);
enum Keadaan{Mati, Hidup};
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
void pengaturan() const;
private:
int keadaan;
int volume;
int makskanal;
int kanal;
int mode;
int masukan;
};
// metode-metode Remote sebagai fungsi-fungsi inline
inline bool Remote::volnaik(Tv & t) { return t.volnaik();}
inline bool Remote::volturun(Tv & t) { return t.volturun();}
inline void Remote::HidupMati(Tv & t) { t.HidupMati(); }
inline void Remote::kanNaik(Tv & t) {t.kanNaik();}
inline void Remote::kanTurun(Tv & t) {t.kanTurun();}
inline void Remote::atur_mode(Tv & t) {t.atur_mode();}
inline void Remote::atur_masukan(Tv & t) {t.atur_masukan();}
inline void Remote::atur_kan(Tv & t, int c) {t.kanal = c;}
#endif