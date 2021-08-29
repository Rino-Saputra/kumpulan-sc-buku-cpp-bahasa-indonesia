#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double x = 1.0;
    double y = 3.0 / 7.0 + 2.0 / 7.0 + 2.0 / 7.0;

    cout << fixed << showpoint << setprecision(17);

    cout << "3.0 / 7.0 + 2.0 / 7.0 + 2.0 / 7.0 = "
         << 3.0 / 7.0 + 2.0 / 7.0 + 2.0 / 7.0 << endl;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    if (x == y)
        cout << "x dan y sama." << endl;
    else
        cout << "x dan y tidak sama." << endl;

    if (fabs(x - y) < 0.000001)
        cout << "x dan y sama dengan toleransi "
             << "0.000001." << endl;
    else
        cout << " x dan y tidak sama dengan "
             << "toleransi 0.000001." << endl;

    return 0;
}