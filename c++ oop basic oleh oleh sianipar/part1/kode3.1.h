// kode3.1.h -- kelas StringBuruk
#include <iostream>
#ifndef KODE3_1_H_
#define KODE3_1_H_
class StringBuruk
{
private:
char * str;				// pointer ke string
int len;				// panjang string
static int jum_string;	// jumlah objek
public:
StringBuruk(const char * s); // konstruktor
StringBuruk(const StringBuruk & st);
StringBuruk & operator=(const StringBuruk & st);
StringBuruk();				// konstruktor default
~StringBuruk();				// destruktor
// fungsi teman
friend std::ostream & operator<<(std::ostream & os,
const StringBuruk & st);
};
#endif