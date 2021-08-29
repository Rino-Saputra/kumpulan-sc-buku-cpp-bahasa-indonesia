#include<iostream>
#include<algorithm>
using namespace std;

template <class T>
class LBS { // LBS = Lebih Besar atau Sama dengan
   private :
      T x;
   public :
      LBS (T A){x = A;} //konstruksi fungsi
      bool operator() (T y)
	  {return y >= x ? true :false;}
}; // akhir kelas

int main()
{ 
   LBS <int> lbs(30);			//lbs dideklarasikan sebagai objek dari LBS untuk int
   LBS <double> lbs2(25.0);		//lbs2 adalah objek untuk double 25.0

   int S[] = {10, 20, 30, 36, 44, 60, 70};
   double SD[] = {3.5, 27.5, 22.6, 56.7, 80.0, 90.7, 65.5, 35.5};

   //count_if() adalah sebuah algoritma
   int m = count_if(S, S+7, lbs);		//di sini lbs adalah predikat

   cout<<"Jumlah elemen dengan S >= 30 adalah = "<<m<<endl;

   int n = count_if(SD, SD+8, lbs2);	//di sini lbs2 adalah predikat

   cout<<"Jumlah elemen dengan SD >= 25.0 adalah = "<<n<<endl;

   return 0;
}