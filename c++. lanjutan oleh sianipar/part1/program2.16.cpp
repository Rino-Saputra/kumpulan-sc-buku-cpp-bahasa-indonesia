#include <iostream>
using namespace std;

double Fungsi(double (*)(double, double, double), double, double, double);
//prototipe dari Fungsi()

double volume(double, double, double);		//prototipe dari fungsi volume()
double permukaan(double, double, double );	//prototipe dari fungsi permukaan()

int main()
{ 
   cout<<"Luas permukaan dan volume dari bangun kubik dengan sisi-sisi 4.0,5.0,6.0:"<<endl;

   cout<<"Luas permukaan = "<<Fungsi(permukaan, 4.0,5.0,6.0)<<endl;
   
   cout<<"Volume = "<<Fungsi(volume,4.0,5.0,6.0)<<endl;

   return 0;
}

//definisi dari fungsi Fungsi
double Fungsi(double(*pF)(double k, double m, double n), double p, double q, double r) 
{ 
   return (*pF)(p,q,r); 
}

//berikut adalah definisi dari fungsi permukaan
double permukaan(double k, double m, double n)
{ 
   return 2*(m*k+ n*k+ m*n); 
}

// berikut adalah definisi dari fungsi volume
double volume(double k, double m, double n)
{
   return k*m*n; 
}