//kode1.14.cpp
#include <iostream>
using namespace std;
class kelasku {
int a, b;
public:
kelasku(int i, int j) {a=i; b=j;}
void tampil() {cout << a << " " << b <<"\n";}
};
int main()
{
kelasku ob(3, 5);
ob.tampil();
return 0;
}