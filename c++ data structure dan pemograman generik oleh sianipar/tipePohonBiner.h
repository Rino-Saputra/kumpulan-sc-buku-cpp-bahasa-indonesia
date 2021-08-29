//*************************************************************
// Penulis: RH. Sianipar
//
// Kelas tipePohonBiner
// Kelas ini menspesifikasi operasi-operasi dasar dalam mengimple- 
// mentasikan pohon biner.
//*************************************************************

//Definisi simpul
template <class tipeElem>
struct simpulPohonBiner
{
    tipeElem info;
    simpulPohonBiner<tipeElem> *llink;
    simpulPohonBiner<tipeElem> *rlink;
};

//Definisi kelas
template <class tipeElem>
class tipePohonBiner
{
public:
    const tipePohonBiner<tipeElem>& operator=
                (const tipePohonBiner<tipeElem>&);
    //Mengoverload operator penugasan.

    bool apaKosong() const;
    //Menghasilkan true jika pohon biner kosong;
    //sebaliknya, menghasilkan false.

    void penjelajahanInorder(void (*visit) (tipeElem&));
    //Fungsi untuk melakukan penjelajahan inroder atas pohon biner.

    void penjelajahanPreorder(void (*visit) (tipeElem&));
    //Fungsi untuk melakukan penjelajahan preorder atas pohon biner.

    void penjelajahanPostorder(void (*visit) (tipeElem&));
    //Fungsi untuk melakukan penjelajahan postorder atas pohon biner.

    int tinggiPohon() const;
    //Menghasilkan tinggi pohon biner.

    //int hitungSimpulPohon() const;
    //Menghasilkan jumlah simpul di dalam pohon biner.

    //int hitungDaunPohon() const;
    //Menghasilkan jumlah daun di dalam pohon biner.

    void hancurPohon();
    //Mendealokasi ruang memori yang ditempati oleh pohon biner.
    //Postkondisi: akar = NULL;

    tipePohonBiner(const tipePohonBiner<tipeElem>& pohonLain);
    //konstruktor penyalin

    tipePohonBiner();
    //konstruktor default

    ~ tipePohonBiner();
    //destruktor

protected:
    simpulPohonBiner<tipeElem> *akar;

private:
    void salinPohon(simpulPohonBiner<tipeElem>* &akarPohonSalin,
                    simpulPohonBiner<tipeElem>* akarPohonLain);
    //Membuat salinan dari pohon biner ke simpul yang
    //ditunjuk oleh akarPohonLain. Pointer akarPohonSalin menunjuk
    //ke akar dari pohon biner yang disalin.

    void hancur(simpulPohonBiner<tipeElem>* &p);
    //Fungsi untuk menghancurkan pohon biner yang ditunjuk oleh p.
    //Postkondisi: p = NULL

    void inorder(simpulPohonBiner<tipeElem> *p, void (*visit) (tipeElem&));
    //Fungsi untuk melakukan penjelajahan inorder atas
    //pohon biner yang ditunjuk oleh p.

    void preorder(simpulPohonBiner<tipeElem> *p, void (*visit) (tipeElem&));
    //Fungsi untuk melakukan penjelajahan preorder atas
    //pohon biner yang ditunjuk oleh p.

    void postorder(simpulPohonBiner<tipeElem> *p, void (*visit) (tipeElem&));
    //Fungsi untuk melakukan penjelajahan postorder atas
    //pohon biner yang ditunjuk oleh p.

    int tinggi(simpulPohonBiner<tipeElem> *p) const;
    //Fungsi untuk menghasilkan tinggi pohon biner
    //yang ditunjuk oleh p.

    int maks(int x, int y) const;
    //Menghasilkan yang lebih besar dari x dan y.

    //int hitungSimpul(simpulPohonBiner<tipeElem> *p) const;
    //Fungsi untuk menghasilkan jumlah simpul di dalam pohon biner
    //yang ditunjuk oleh p

    //int hitungDaun(simpulPohonBiner<tipeElem> *p) const;
    //Fungsi untuk menghasilkan jumlah daun di dalam pohon biner
    //yang ditunjuk oleh p
};

template <class tipeElem>
bool tipePohonBiner<tipeElem>::apaKosong() const
{
    return (akar == NULL);
}

template <class tipeElem>
tipePohonBiner<tipeElem>::tipePohonBiner()
{
    akar = NULL;
}

template <class tipeElem>
void tipePohonBiner<tipeElem>::penjelajahanInorder
                               (void (*visit) (tipeElem& item)) 
{
    inorder(akar, *visit);
}

template <class tipeElem>
void tipePohonBiner<tipeElem>::penjelajahanPreorder
                               (void (*visit) (tipeElem& item)) 
{
    preorder(akar, *visit);
}

template <class tipeElem>
void tipePohonBiner<tipeElem>::penjelajahanPostorder
                              (void (*visit) (tipeElem& item)) 
{
    postorder(akar, *visit);
}
template <class tipeElem>
int tipePohonBiner<tipeElem>::tinggiPohon() const
{
    return tinggi(akar);
}

//template <class tipeElem>
//int tipePohonBiner<tipeElem>::hitungSimpulPohon() const
//{
//    return hitungSimpul(akar);
//}

//template <class tipeElem>
//int tipePohonBiner<tipeElem>::hitungDaunPohon() const
//{
//    return hitungDaun(akar);
//}

template <class tipeElem>
void tipePohonBiner<tipeElem>::
                    inorder(simpulPohonBiner<tipeElem> *p,
					void (*visit) (tipeElem& item)) 
{
    if (p != NULL)
    {
        inorder(p->llink, *visit);
        (*visit)(p->info);
        inorder(p->rlink, *visit);
    }
}

template <class tipeElem>
void tipePohonBiner<tipeElem>::
                    preorder(simpulPohonBiner<tipeElem> *p,
					void (*visit) (tipeElem& item)) 
{
    if (p != NULL)
    {
        (*visit)(p->info);
        preorder(p->llink, *visit);
        preorder(p->rlink, *visit);
    }
}

template <class tipeElem>
void tipePohonBiner<tipeElem>::
                    postorder(simpulPohonBiner<tipeElem> *p,
					void (*visit) (tipeElem& item)) 
{
    if (p != NULL)
    {
        postorder(p->llink, *visit);
        postorder(p->rlink, *visit);
        (*visit)(p->info);
    }
}

template <class tipeElem>
int tipePohonBiner<tipeElem>::
tinggi(simpulPohonBiner<tipeElem> *p) const
{
    if (p == NULL)
        return 0;
    else
        return 1 + maks(tinggi(p->llink), tinggi(p->rlink));
}

template <class tipeElem>
int tipePohonBiner<tipeElem>::maks(int x, int y) const
{
    if (x >= y)
        return x;
    else
        return y;
}

template <class tipeElem>
void tipePohonBiner<tipeElem>::salinPohon
                             (simpulPohonBiner<tipeElem>* &akarPohonSalin,
                              simpulPohonBiner<tipeElem>* akarPohonLain)
{
    if (akarPohonLain == NULL)
        akarPohonSalin = NULL; 
    else
    {
        akarPohonSalin = new simpulPohonBiner<tipeElem>;
        akarPohonSalin->info = akarPohonLain->info;
        salinPohon(akarPohonSalin->llink, akarPohonLain->llink);
        salinPohon(akarPohonSalin->rlink, akarPohonLain->rlink);
    }
} //akhir salinPohon

template <class tipeElem>
void tipePohonBiner<tipeElem>::hancur(simpulPohonBiner<tipeElem>* &p)
{
    if (p != NULL)
    {
        hancur(p->llink);
        hancur(p->rlink);
        delete p;
        p = NULL;
    }
}

template <class tipeElem>
void tipePohonBiner<tipeElem>::hancurPohon()
{
    hancur(akar);
}

//konstruktor penyalin
template <class tipeElem>
tipePohonBiner<tipeElem>::tipePohonBiner
                          (const tipePohonBiner<tipeElem>& pohonLain)
{
    if (pohonLain.akar == NULL) // pohonLain kosong
        akar = NULL;
    else
        salinPohon(akar, pohonLain.akar);
}

//destruktor
template <class tipeElem>
tipePohonBiner<tipeElem>::~tipePohonBiner()
{
    hancur(akar);
}

//mengoverload operator penugasan
template <class tipeElem>
          const tipePohonBiner<tipeElem>& tipePohonBiner<tipeElem>::operator=
         (const tipePohonBiner<tipeElem>& pohonLain)
{
    if (this != &pohonLain) //menghindari penugasan-diri
    {
        if (akar != NULL) //jika pohon biner kosong,
                          //hancurkan pohon biner
            hancur(akar);
        if (pohonLain.akar == NULL) //pohonLain kosong
            akar = NULL;
        else
            salinPohon(akar, pohonLain.akar);
    }//akhir else
    return *this;
}
