// kode1.3.cpp
#include <iostream>
#include <cstring>
using namespace std;
struct stringku {
void bangunstr(char *s);		// publik
void tampilstr();
private:						// sekarang privat
char str[255];
} ;
void stringku::bangunstr(char *s)
{
if(!*s) *str = '\0';			// menginisialisasi string
else strcat(str, s);
}
void stringku::tampilstr()
{
cout << str << "\n";
}
int main()
{
stringku s;
s.bangunstr(""); // init
s.bangunstr("Teknik ");
s.bangunstr("Informatika UNRAM");
s.tampilstr();
return 0;
}