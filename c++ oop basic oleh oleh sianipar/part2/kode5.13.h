// kode5.13.h
#ifndef KODE5_13_H_
#define KODE5_13_H_
template <class Type>
class Tumpukan
{
private:
enum {MAX = 10};			// konstanta spesifik kelas
Type items[MAX];			// memuat item-item tumpukan
int top;					// indeks untuk item atas Tumpukan
public:
Tumpukan();
bool isempty();
bool isfull();
bool push(const Type & item); // menambahkan item ke tumpukan
bool pop(Type & item);		
};
template <class Type>
Tumpukan<Type>::Tumpukan()
{
top = 0;
}
template <class Type>
bool Tumpukan<Type>::isempty()
{
return top == 0;
}
template <class Type>
bool Tumpukan<Type>::isfull()
{
return top == MAX;
}
template <class Type>
bool Tumpukan<Type>::push(const Type & item)
{
if (top < MAX)
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
#endif