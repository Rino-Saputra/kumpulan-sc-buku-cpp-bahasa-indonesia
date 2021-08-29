#include <iostream>
#include <iomanip>

using namespace std;

class kelasBasis
{
public:
    virtual void tampil();  //fungsi virtual
    kelasBasis(int u = 0);

private:
    int x;
};

void kelasBasis::tampil()
{
    cout << "Dalam kelasBasis x = " << x << endl;
}

kelasBasis::kelasBasis(int u)
{
    x = u;
}
