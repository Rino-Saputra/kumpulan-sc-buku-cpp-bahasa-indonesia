// kode5.15.h
#ifndef KODE5_15_H_
#define KODE5_15_H_
template <class Type>
class Tumpukan
{
private:
enum {UKURAN = 10}; // ukuran default
int ukuranTumpukan;
Type * items; // memuat item-item tumpukan
int top; // indeks untuk item tumpukan atas
public:
explicit Tumpukan(int ss = UKURAN);
Tumpukan(const Tumpukan & st);
~Tumpukan() { delete [] items; }
bool isempty() { return top == 0; }
bool isfull() { return top == ukuranTumpukan; }
bool push(const Type & item); // menambahkan item ke tumpukan
bool pop(Type & item); 
Tumpukan & operator=(const Tumpukan & st);
};
template <class Type>
Tumpukan<Type>::Tumpukan(int ss) : ukuranTumpukan(ss), top(0)
{
items = new Type [ukuranTumpukan];
}
template <class Type>
Tumpukan<Type>::Tumpukan(const Tumpukan & st)
{
ukuranTumpukan = st.ukuranTumpukan;
top = st.top;
items = new Type [ukuranTumpukan];
for (int i = 0; i < top; i++)
items[i] = st.items[i];
}
template <class Type>
bool Tumpukan<Type>::push(const Type & item)
{
if (top < ukuranTumpukan)
{
items[top++] = item;
return true;
}
else
return false;
}
template <class Type>
bool Tumpukan<Type>::pop(Type & item)
{
if (top > 0)
{
item = items[--top];
return true;
}
else
return false;
}
template <class Type>
Tumpukan<Type> & Tumpukan<Type>::operator=(const Tumpukan<Type> & st)
{
if (this == &st)
return *this;
delete [] items;
ukuranTumpukan = st.ukuranTumpukan;
top = st.top;
items = new Type [ukuranTumpukan];
for (int i = 0; i < top; i++)
items[i] = st.items[i];
return *this;
}
#endif