// kode2.18.cpp -- konversi tipe-tipe built-in
#include <iostream>
using std::cout;
#include "kode2.16.h"
void tampil(const Batuberat & st, int n);
int main()
{
Batuberat dian_pisesha = 260; // menggunakan konstruktor untuk menginisialisasi
Batuberat rinto_harahap(285.7); // sama dengan Batuberat rinto_harahap = 285.7;
Batuberat rano_karno(21, 8);
cout << "Berat penyanyi wanita ";
dian_pisesha.tampil_btu();
cout << "Berat pengarang lagu ";
rinto_harahap.tampil_btu();
cout << "Berat aktor ";
rano_karno.tampil_gr();
dian_pisesha = 265.8;		// menggunakan konstruktor untuk konversi
rano_karno = 325;			// sama dengan rano_karno = Batuberat(325);
cout << "Setelah makan malam, penyanyi wanita memiliki berat ";
dian_pisesha.tampil_btu();
cout << "Setelah makan malam, aktor memiliki berat ";
rano_karno.tampil_gr();
tampil(rano_karno, 2);
cout << "Pegulat memiliki berat.\n";
tampil(422, 2);
return 0;
}
void tampil(const Batuberat & st, int n)
{
for (int i = 0; i < n; i++)
{
cout << "Wow! ";
st.tampil_btu();
}
}