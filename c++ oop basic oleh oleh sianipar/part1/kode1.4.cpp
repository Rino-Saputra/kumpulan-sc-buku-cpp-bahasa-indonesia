//kode1.4.cpp
#include <iostream>
using namespace std;
union tukar_byte {
void tukar();
void atur_byte(unsigned short i);
void tampil_word();
unsigned short u;
unsigned char c[2];
};
void tukar_byte::tukar()
{
unsigned char t;
t = c[0];
c[0] = c[1];
c[1] = t;
}
void tukar_byte::tampil_word()
{
cout << u << endl;
}
void tukar_byte::atur_byte(unsigned short i)
{
u = i;
}
int main()
{
tukar_byte b;
b.atur_byte(49034);
b.tukar();
b.tampil_word();
return 0;
}