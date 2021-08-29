// kode3.5.cpp
#include <cstring> // string.h 
#include "kode3.4.h" // includes <iostream>
using std::cin;
using std::cout;
// inisialisasi anggota kelas statis
int String::jum_string = 0;
// metode statis
int String::BrpBanyak()
{
return jum_string;
}
// metode-metode kelas
String::String(const char * s) // mengkonstruksi String dari C string
{
len = strlen(s);			// menetapkan ukuran
str = new char[len + 1];		// allokasi penyimpanan
strcpy(str, s);			// inisialisasi pointer
jum_string++;					// menetapkan penghitungan objek
}
String::String() // konstruktor default
{
len = 4;
str = new char[1];
str[0] = '\0'; // string default 
jum_string++;
}
String::String(const String & st)
{
jum_string++; // menangani pembaruan anggota statis
len = st.len; // panjang sama
str = new char [len + 1]; // allokasi memori
strcpy(str, st.str); // duplikasi string ke lokasi baru
}
String::~String() // destruktor yang diperlukan
{
--jum_string; // diperlukan
delete [] str; // diperlukan
}
// metode-metode operator teroverload
// menugaskan suatu String kepada suatu String
String & String::operator=(const String & st)
{
if (this == &st)
return *this;
delete [] str;
len = st.len;
str = new char[len + 1];
strcpy(str, st.str);
return *this;
}
// menugaskan suatu string C kepada suatu String
String & String::operator=(const char * s)
{
delete [] str;
len = strlen(s);
str = new char[len + 1];
strcpy(str, s);
return *this;
}
// akses baca-tulis char untuk non-const String
char & String::operator[](int i)
{
return str[i];
}
// akses hanya-baca char untuk const String
const char & String::operator[](int i) const
{
return str[i];
}
// fungsi-fungsi teman operator teroverload
bool operator<(const String &st1, const String &st2)
{
return (strcmp(st1.str, st2.str) < 0);
}
bool operator>(const String &st1, const String &st2)
{
return st2.str < st1.str;
}
bool operator==(const String &st1, const String &st2)
{
return (strcmp(st1.str, st2.str) == 0);
}
// keluaran String sederhana
ostream & operator<<(ostream & os, const String & st)
{
os << st.str;
return os;
}
// masukan String cepat
istream & operator>>(istream & is, String & st)
{
char temp[80];
is.get(temp, 80);
if (is)
st = temp;
while (is && is.get() != '\n')
continue;
return is;
}