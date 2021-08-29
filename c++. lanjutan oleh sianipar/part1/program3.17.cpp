# include <iostream>
using namespace std;

class Matriks
{
   private:
      int m, n;

   public:
      int** Ptr;
      Matriks (int B , int K)
	  { 
         m = B, n = K ; // B untuk baris dan K untuk kolom
         Ptr = new int *[m];
         for(int i =0; i<m; i++)
            Ptr[i] = new int [n];
	  }

      // Nil_E untuk nilai elemen
      void Baca_Elemen()
	  { 
         cout<<"Masukkan elemen-elemen dari matriks "<<m<<"x"<<n<<": ";
         int Nil_E =0;

         for(int b =0; b< m; b++)
            for (int k =0; k<n;k++)
			{ 
               cin>>Nil_E;
               Ptr[b][k] = Nil_E; 
			} 
	  }

      void Tulis_Elemen()
	  {
         for(int s=0; s<m; s++)
		 {
            for(int p=0; p<n; p++)
               cout<<Ptr[s][p]<<"\t ";
            cout<<endl;
		 }
	  }
};

int main()
{
   Matriks A(3,3), B(3,3), K(3, 3), D(3,3), E(3,3);

   cout<<"Masukkan elemen-elemen dari matriks A dan B.\n";
   A.Baca_Elemen();
   B.Baca_Elemen();

   cout <<"Untuk matriks A, Anda memasukkan elemen-elemen berikut: \n";
   A.Tulis_Elemen( );

   cout <<"Untuk matriks B, Anda memasukkan elemen-elemen berikut: \n";
   B.Tulis_Elemen( );

   cout<<"A.Ptr[1][0] = " << A.Ptr[1][0]<< endl;
   for (int k = 0; k<3; k++ )
      for ( int p =0; p<3; p++)
	  {
         K.Ptr[k][p] = A.Ptr[k][p] + B.Ptr[k][p]; //penjumlahan matriks
         D.Ptr[k][p] = A.Ptr[k][p] - B.Ptr[k][p]; //pengurangan matriks
	  } 

	  for(int J = 0; J<3; J++) //perkalian matriks
         for (int K=0; K<3; K++)
		 { 
            E.Ptr[J][K] = 0;
            for (int S =0; S<3; S++)
               E.Ptr[J][K] += A.Ptr[J][S] * B.Ptr[S][K];
		 }

   //Statemen-statemen keluaran
   cout<<"Matriks K = Matriks A + Matriks B: "<<endl;
   cout<<"Elemen-elemen dari matriks K adalah berikut: "<<endl;
   K.Tulis_Elemen();

   cout<<"untuk matriks D = Matriks A - Matriks B :"<<endl;
   cout<<"Elemen-elemen dari matriks D adalah berikut: "<<endl;
   D.Tulis_Elemen();

   cout<<"untuk matriks E = Matriks A * Matriks B :"<<endl;
   cout<<"Elemen-elemen dari matriks E adalah berikut: "<<endl;
   E.Tulis_Elemen();

   return 0;
}