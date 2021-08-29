// kode5.14.cpp
#include <iostream>
#include <string>
#include <cctype>
#include "kode5.13.h"
using std::cin;
using std::cout;
int main()
{
Tumpukan<std::string> st; // menciptakan suatu tumpukan kosong
char ch;
std::string po;
cout << "Silahkan masukkan A untuk menambah pemesanan pembelian,\n"
<< "P untuk memproses, atau Q untuk keluar.\n";
while (cin >> ch && toupper(ch) != 'Q')
{
while (cin.get() != '\n')
continue;
if (!isalpha(ch))
{
cout << '\a';
continue;
}
switch(ch)
{
case 'A':
case 'a': cout << "Masukkan suatu angka pemesanan: ";
cin >> po;
if (st.isfull())
cout << "Tumpukan telah penuh\n";
else
st.push(po);
break;
case 'P':
case 'p': if (st.isempty())
cout << "Tumpukan telah kosong\n";
else {
st.pop(po);
cout << "PO #" << po << " telah dipop\n";
break;
}
}
cout << "Silahkan masukkan A untuk menambah pemesanan pembelian,\n"
<< "P untuk memproses, atau Q untuk keluar.\n";
}
cout << "Selesai\n";
return 0;
}