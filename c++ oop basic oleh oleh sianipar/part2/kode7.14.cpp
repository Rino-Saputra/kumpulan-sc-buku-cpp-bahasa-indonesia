// kode7.14.cpp
#include <iostream>
int main()
{
using std::cout;
using std::cin;
using std::endl;
// membaca sampai ditemukan karakter #
char ch;
while(cin.get(ch)) // berhenti pada EOF
{
if (ch != '#')
cout << ch;
else
{
cin.putback(ch); // menyisipkan ulang karakter
break;
}
}
if (!cin.eof())
{
cin.get(ch);
cout << endl << ch << " adalah karakter masukan berikutnya.\n";
}
else
{
cout << "Akhir suatu file ditemukan.\n";
exit(0);
}
while(cin.peek() != '#') // mengintip
{
cin.get(ch);
cout << ch;
}
if (!cin.eof())
{
cin.get(ch);
cout << endl << ch << " adalah karakter masukan berikutnya.\n";
}
else
cout << "Akhir suatu file ditemukan.\n";
return 0;
}