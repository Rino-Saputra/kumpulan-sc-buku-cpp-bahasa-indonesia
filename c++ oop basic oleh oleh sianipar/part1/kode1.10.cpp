//kode1.10.cpp
#include <iostream>
using namespace std;
inline int maks(int a, int b)
{
return a>b ? a : b;
}
int main()
{
cout << maks(10, 20);
cout << " " << maks(99, 88) << endl;
return 0;
}