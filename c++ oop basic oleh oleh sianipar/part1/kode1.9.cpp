// kode1.9.cpp
#include <iostream>
using namespace std;
class duaNilai {
int a;
int b;
public:
duaNilai(int i, int j) { a = i; b = j; }
friend class Min;
};
class Min {
public:
int min(duaNilai x);
};
int Min::min(duaNilai x)
{
return x.a < x.b ? x.a : x.b;
}
int main()
{
duaNilai ob(10, 20);
Min m;
cout << m.min(ob)<< endl;
return 0;
}