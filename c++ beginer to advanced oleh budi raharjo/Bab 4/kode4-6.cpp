/**********************************************************
*  PEMROGRAMAN C++: MUDAH & CEPAT MENJADI MASTER C++      *
*                                                         *
*  Oleh    : Budi Raharjo                                 *
*  Email   : mbraharjo@gmail.com                          *
*                                                         *
*  Website : www.best-informatic.com                      *
*                                                         *
***********************************************************/

#include <iostream>
// Memasukkan header <cmath>
// untuk memanggil fungsi sqrt()
#include <cmath>

using namespace std;

int main() {
  int a, b, c;
  float D, x1, x2;
  int flag;

  // Meminta user untuk menentukan 
  // koefisien persamaan kuadrat
  cout<<"Masukkan nilai a: "; cin>>a;
  cout<<"Masukkan nilai b: "; cin>>b;
  cout<<"Masukkan nilai c: "; cin>>c;
  cout<<endl;

  // Menghitung nilai determinan
  D = (b*b) - (4*a*c);

  // Menentukan akar-akar persamaan kuadrat
  if (D > 0) {
     x1 = ((-b) + sqrt(D)) / (2*a);
     x2 = ((-b) - sqrt(D)) / (2*a);
     flag = 1;
  } else if (D == 0) {
     x1 = ((-b) + sqrt(D)) / (2*a);
     x2 = x1;
     flag = 1;
  } else {
     flag = 0;
  }

  // Menampilkan akar-akar persamaan kuadrat

  // dapat ditulis dengan if (flag) {
  if (flag == 1) {
     cout<<"x1 = "<<x1<<endl;
     cout<<"x2 = "<<x2<<endl;
  } else {
     cout<<"x1 dan x2 imaginer";
  }

  return 0;
}
