#include<iostream>
#include <iomanip>

using namespace std;

class kelasBasis
{
public:
    virtual void tampil();
    kelasBasis(int u = 0);

private:
    int x;
};

class kelasTerderivasi: public kelasBasis
{
public:
    void tampil();
    kelasTerderivasi(int u = 0, int v = 0);

private:
    int a;
};

void kelasBasis::tampil()
{
    cout << "Dalam kelasBasis x = " << x << endl;
}

kelasBasis::kelasBasis(int u)
{
    x = u;
}

void kelasTerderivasi::tampil()
{
    cout << "Dalam kelasTerderivasi ***: ";
    kelasBasis::tampil();
    cout << "Dalam kelasTerderivasi a = " << a << endl;
}

kelasTerderivasi:: kelasTerderivasi(int u, int v)
                       : kelasBasis(u)
{
    a = v;
}

void panggilTampil(kelasBasis& p)
{
    p.tampil();
}

int main() 
{ 
    kelasBasis satu(5); 
    kelasTerderivasi dua(3, 15); 

    satu.tampil(); 
    dua. tampil();
 
    cout << "*** Memanggil fungsi "
         << "panggilTampil ***" << endl; 

    panggilTampil(satu); 
    panggilTampil(dua); 

    return 0; 
}
