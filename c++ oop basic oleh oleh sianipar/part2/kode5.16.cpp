// kode5.16.cpp
#include <iostream>
#include <cstdlib> // untuk rand(), srand()
#include <ctime> // untuk time()
#include "kode5.15.h"
const int Num = 10;
int main()
{
srand(time(0));	
std::cout << "Silahkan masukkan ukuran tumpukan: ";
int ukuranTumpukan;
std::cin >> ukuranTumpukan;
// menciptaakan suatu tumpukan kosong dengan slot ukuranTumpukan
Tumpukan<const char *> st(ukuranTumpukan);
// basket masuk
const char * in[Num] = {
" 1: Jody Pranata", " 2: Happy Simangunsong",
" 3: Altri Naibaho", " 4: Ester Sinaga",
" 5: Robert Tohonan", " 6: Lalu Satria Utama",
" 7: Baiq Egy Yuliana", " 8: Puji Hidayati",
" 9: I Nyoman Suprapta", "10: Edison Siahaan"
};
// basket keluar
const char * out[Num];
int diproses = 0;
int masukBerikutnya = 0;
while (diproses < Num)
{
if (st.isempty())
st.push(in[masukBerikutnya++]);
else if (st.isfull())
st.pop(out[diproses++]);
else if (rand() % 2 && masukBerikutnya < Num) // peluang 50-50
st.push(in[masukBerikutnya++]);
else
st.pop(out[diproses++]);
}
for (int i = 0; i < Num; i++)
std::cout << out[i] << std::endl;
std::cout << "Terimakasih\n";
return 0;
}