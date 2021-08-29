// kode4.14.cpp
#include "kode4.13.h"
#include <cstring>
// metode-metode basisAMD
basisAMD::basisAMD(const char * l, int r)
{
label = new char[strlen(l) + 1];
strcpy(label, l);
peringkat = r;
}
basisAMD::basisAMD(const basisAMD & rs)
{
label = new char[strlen(rs.label) + 1];
strcpy(label, rs.label);
peringkat = rs.peringkat;
}
basisAMD::~basisAMD()
{
delete [] label;
}
basisAMD & basisAMD::operator=(const basisAMD & rs)
{
if (this == &rs)
return *this;
delete [] label;
label = new char[strlen(rs.label) + 1];
strcpy(label, rs.label);
peringkat = rs.peringkat;
return *this;
}
std::ostream & operator<<(std::ostream & os, const basisAMD & rs)
{
os << "Label: " << rs.label << std::endl;
os << "Peringkat: " << rs.peringkat << std::endl;
return os;
}
// metode-metode tanpaAMD
tanpaAMD::tanpaAMD(const char * c, const char * l, int r) : basisAMD(l, r)
{
strncpy(warna, c, 39);
warna[39] = '\0';
}
tanpaAMD::tanpaAMD(const char * c, const basisAMD & rs) : basisAMD(rs)
{
strncpy(warna, c, COL_LEN - 1);
warna[COL_LEN - 1] = '\0';
}
std::ostream & operator<<(std::ostream & os, const tanpaAMD & ls)
{
os << (const basisAMD &) ls;
os << "Warna: " << ls.warna << std::endl;
return os;
}
// metode-metode denganAMD
denganAMD::denganAMD(const char * s, const char * l, int r) : basisAMD(l, r)
{
gaya = new char[strlen(s) + 1];
strcpy(gaya, s);
}
denganAMD::denganAMD(const char * s, const basisAMD & rs) : basisAMD(rs)
{
gaya = new char[strlen(s) + 1];
strcpy(gaya, s);
}
denganAMD::denganAMD(const denganAMD & hs) : basisAMD(hs) // memanggil konstruktor pengganda kelas basis
{
	gaya = new char[strlen(hs.gaya) + 1];
strcpy(gaya, hs.gaya);
}
denganAMD::~denganAMD()
{
delete [] gaya;
}
denganAMD & denganAMD::operator=(const denganAMD & hs)
{
if (this == &hs)
return *this;
basisAMD::operator=(hs); // menggandakan porsi basis
gaya = new char[strlen(hs.gaya) + 1];
strcpy(gaya, hs.gaya);
return *this;
}
std::ostream & operator<<(std::ostream & os, const denganAMD & hs)
{
os << (const basisAMD &) hs;
os << "Gaya: " << hs.gaya << std::endl;
return os;
}