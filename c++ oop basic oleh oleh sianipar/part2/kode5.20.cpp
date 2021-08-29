// kode5.20.cpp
#include <iostream>
using std::cout;
using std::endl;
template <typename T>
class beta
{
private:
template <typename V>		// anggota kelas template bertingkat
class pegang
{
private:
V nil;
public:
pegang(V v = 0) : nil(v) {}
void tampil() const { cout << nil << endl; }
V Nilai() const { return nil; }
};
pegang<T> q; // objek template
pegang<int> n; // objek template
public:
beta( T t, int i) : q(t), n(i) {}
template<typename U> // metode template
U seluruh(U u, T t) { return (n.Nilai() + q.Nilai()) * u / t; }
void tampil() const { q.tampil(); n.tampil();}
};
int main()
{
beta<double> cowok(3.5, 3);
cowok.tampil();
cout << cowok.seluruh(10.0, 2.3) << endl;
cout << "Selesai\n";
return 0;
}