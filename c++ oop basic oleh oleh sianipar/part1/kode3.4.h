// kode3.4.h -- definisi kelas String
#include <iostream>
using std::ostream;
using std::istream;
#ifndef KODE3_4_H_
#define KODE3_4_H_
class String
{
private:
char * str; // pointer ke string
int len; // panjang string
static int jum_string; // jumlah objek
public:
// konstruktor dan metode lain
String(const char * s); // konstruktor
String(); // konstruktor default
String(const String &); // konstruktor pengganda
~String(); // destruktor
int panjang () const { return len; }
// metode-metode operator teroverload
String & operator=(const String &);
String & operator=(const char *);
char & operator[](int i);
const char & operator[](int i) const;
// fungsi-fungsi teman operator teroverload
friend bool operator<(const String &st, const String &st2);
friend bool operator>(const String &st1, const String &st2);
friend bool operator==(const String &st, const String &st2);
friend ostream & operator<<(ostream & os, const String & st);
friend istream & operator>>(istream & is, String & st);
// fungsi statis
static int BrpBanyak();
};
#endif