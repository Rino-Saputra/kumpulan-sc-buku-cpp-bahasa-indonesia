//kode1.7.cpp
#include <iostream>
using namespace std;
const int IDLE = 0;
const int SDG_DIGUNAKAN = 1;
class C2;				// deklarasi maju
class C1 {
int status;				// IDLE jika off, SDG_DIGUNAKAN jika ditampilkan
// ...
public:
void atur_status(int keadaan);
friend int idle(C1 a, C2 b);
};
class C2 {
int status;			// IDLE jika off, SDG_DIGUNAKAN jika ditampilkan
// ...
public:
void atur_status(int keadaan);
friend int idle(C1 a, C2 b);
};
void C1::atur_status(int keadaan)
{
status = keadaan;
}
void C2::atur_status(int keadaan)
{
status = keadaan;
}
int idle(C1 a, C2 b)
{
if(a.status || b.status) return 0;
else return 1;
}
int main()
{
C1 x;
C2 y;
x.atur_status(IDLE);
y.atur_status(IDLE);
if(idle(x, y)) cout << "Layar dapat digunakan.\n";
else cout << "Sedang digunakan.\n";
x.atur_status(SDG_DIGUNAKAN);
if(idle(x, y)) cout << "Layar dapat digunakan.\n";
else cout << "Sedang digunakan.\n";
return 0;
}