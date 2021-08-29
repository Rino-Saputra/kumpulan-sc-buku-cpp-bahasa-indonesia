// kode3.2.cpp
#include <cstring>			// string.h 
#include "kode3.1.h"
using namespace std;
// menginisialisasi anggota kelas static
int StringBuruk::jum_string = 0;
// metode-metode kelas
// mengkonstruksi StringBuruk dari C string
StringBuruk::StringBuruk(const StringBuruk & st)
{
jum_string++; 				// menangani pembaruan anggota statis
len = st.len; 				// panjang sama
str = new char [len + 1]; 			// mengalokasikan memori
strcpy(str, st.str); 			// menggandakan string ke lokasi baru
cout << jum_string << ": \"" << str
<< "\" objek yang diciptakan\n"; 		// untuk informasi anda
}

StringBuruk & StringBuruk::operator=(const StringBuruk & st)
{
if (this == &st) 			// objek ditugaskan ke dirinya sendiri
return *this; 			// beres
delete [] str; 				// bebaskan string yang lama
len = st.len;
str = new char [len + 1]; 			// dapatkan memori untuk string yang baru
strcpy(str, st.str); 			// duplikasi string
return *this; 				// mengembalikan referensi ke objek pemanggil
}
StringBuruk::StringBuruk(const char * s)
{
len = strlen(s);		// menetapkan panjang
str = new char[len + 1];	// alokasi penyimpanan
strcpy(str, s);		// inisialisasi pointer
jum_string++;				// menhitung jumlah objek
cout << jum_string << ": \" " << str
<< "\" objek yang telah diciptakan\n"; // Untuk informasi anda
}


StringBuruk::StringBuruk() // konstruktor default
{
len = 4;
str = new char[4];
strcpy(str, "C++");	// string default
jum_string++;
cout << jum_string << ": \" " << str
<<"\" objek default diciptakan\n"; // Untuk informasi anda
}
StringBuruk::~StringBuruk() // destruktor yang dibutuhkan
{
cout << "\" " << str << "\" objek yang dihancurkan, "; // Untuk informasi anda
--jum_string;				// diperlukan
cout << jum_string << " yang tinggal\n"; // Untuk informasi anda
delete [] str; // diperlukan
}

std::ostream & operator<<(std::ostream & os, const StringBuruk & st)
{
os << st.str;
return os;
}