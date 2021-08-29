// kode6.14.h
#include <stdexcept>
#include <cstring>
class Sales
{
public:
enum {BULAN = 12}; // dapat berupa suatu konstanta statik
class indeks_buruk : public std::logic_error
{
private:
int bi; // nilai indeks buruk
public:
explicit indeks_buruk(int ix, const char * s = "Error indeks di dalam objek Sales\n");
int bi_val() const {return bi;}
};
explicit Sales(int yy = 0);
Sales(int yy, const double * gr, int n);
virtual ~Sales() { }
int Tahun() const { return tahun; }
virtual double operator[](int i) const throw(std::logic_error);
virtual double & operator[](int i) throw(std::logic_error);
private:
double gross[BULAN];
int tahun;
};
class DilabelSales : public Sales
{
public:
	enum{ STRLEN = 50}; // dapat berupa enumerasi
class nindeks_buruk : public Sales::indeks_buruk
{
private:
char lbl[STRLEN];
public:
nindeks_buruk(const char * lb, int ix, const char * s = "Error indeks di dalam objek DilabelSales\n");
const char * label_nil() {return lbl;}
};
explicit DilabelSales(const char * lb = "tidak_ada", int yy = 0);
DilabelSales(const char * lb, int yy, const double * gr, int n);
virtual ~DilabelSales() { }
const char * Label() const {return label;}
virtual double operator[](int i) const throw(std::logic_error);
virtual double & operator[](int i) throw(std::logic_error);
private:
char label[STRLEN];
};