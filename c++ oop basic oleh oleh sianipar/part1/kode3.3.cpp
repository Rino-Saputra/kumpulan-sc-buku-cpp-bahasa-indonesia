// kode3.3.cpp
// dikompilasi dengan kode12.2.cpp
#include <iostream>
using std::cout;
#include "kode3.1.h"
void panggilsy1(StringBuruk &);		// melewatkan dengan referensi
void panggilsy2(StringBuruk);		// melewatkan dengan nilai
int main()
{
using std::endl;
StringBuruk tajukberita1("Tsunami Aceh 2005");
StringBuruk tajukberita2("Gempa di Jogjakarta");
StringBuruk olahraga("Tim Garuda Kalah di Final");
cout << "tajukberita1: " << tajukberita1 << endl;
cout << "tajukberita2: " << tajukberita2 << endl;
cout << "olah raga: " << olahraga << endl;
panggilsy1(tajukberita1);
cout << "tajukberita1: " << tajukberita1 << endl;
panggilsy2(tajukberita2);
cout << "tajukberita2: " << tajukberita2 << endl;
cout << "Inisialisasi satu objek dengan yang lain:\n";
StringBuruk atlet = olahraga;
cout << "atlet: " << atlet << endl;
cout << "Menugaskan satu objek kepada yang lain:\n";
StringBuruk koran;
koran = tajukberita1;
cout << "koran: " << koran << endl;
cout << "Akhir dari main()\n";
return 0;
}
void panggilsy1(StringBuruk & rsb)
{
cout << "String dilewatkan dengan referensi:\n";
cout << " \" " << rsb << "\"\n";
}
void panggilsy2(StringBuruk sb)
{
cout << "String dilewatkan dengan nilai:\n";
cout << " \"" << sb << "\"\n";
}