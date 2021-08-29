#include <iostream>
#include <iomanip>

#include "kelasBasis.h"

class kelasTerderivasi: public kelasBasis
{
public:
    void tampil();
    kelasTerderivasi(int u = 0, int v = 0);

private:
    int a;
};

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
