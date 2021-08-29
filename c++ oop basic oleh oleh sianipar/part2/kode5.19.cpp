// kode5.19.cpp
#include <iostream>
#include <string>
template <class T1, class T2>
class Pasangan
{
private:
T1 a;
T2 b;
public:
T1 & pertama();
T2 & kedua();
T1 pertama() const { return a; }
T2 kedua() const { return b; }
Pasangan(const T1 & aval, const T2 & bval) : a(aval), b(bval) { }
Pasangan() {}
};
template<class T1, class T2>
T1 & Pasangan<T1,T2>::pertama()
{
return a;
}
template<class T1, class T2>
T2 & Pasangan<T1,T2>::kedua()
{
return b;
}
int main()
{
using std::cout;
using std::endl;
using std::string;
Pasangan<string, int> peringkat[4] =
{
Pasangan<string, int>("Katerina Siantar", 5),
Pasangan<string, int>("Krista Smatiq", 4),
Pasangan<string, int>("Rosintan Smantiq", 5),
Pasangan<string, int>("Ester Smantiq", 3)
};
int gabungan = sizeof(peringkat) / sizeof (Pasangan<string, int>);
cout << "Peringkat Memasak\n";
for (int i = 0; i < gabungan; i++)
cout << peringkat[i].kedua() << ":\t "
<< peringkat[i].pertama() << endl;
cout << "Oops! Peringkat direvisi:\n";
peringkat[3].pertama() = "Ester Smantiq";
peringkat[3].kedua() = 6;
cout << peringkat[3].kedua() << ":\t "
<< peringkat[3].pertama() << endl;
return 0;
}