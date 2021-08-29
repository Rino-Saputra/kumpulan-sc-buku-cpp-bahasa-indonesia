//kode1.28.cpp
#include <iostream>
using namespace std;
class cl {
int i;
public:
void atur_i(int j) { i=j; }
int ambil_i() { return i; }
};
int main()
{
cl ob[3];
int i;
for(i=0; i<3; i++) ob[i].atur_i(i+1);
for(i=0; i<3; i++)
cout << ob[i].ambil_i() << "\n";
return 0;
}