//Program menu-driven.

#include <iostream>

using namespace std;

const double KONVERSI = 2.54;
const int INCI_DALAM_KAKI = 12;
const int SENTIMETER_DALAM_METER = 100;

void tampilPilihan();
void kakiDanInciKeMeterDanSenti(int f, int in, int& mt, int& ct);
void meterDanSentiKeKakiDanInci(int mt, int ct, int& f, int& in);

int main()
{
    int kaki, inci;
    int meter, sentimeter;
    int pilihan;

    do
    {
        tampilPilihan();

        cin >> pilihan;
        cout << endl;

        switch (pilihan)
        {
        case 1:
            cout << "Masukkan kaki dan inci: ";
            cin >> kaki >> inci;
            cout << endl;

            kakiDanInciKeMeterDanSenti(kaki, inci, meter, sentimeter);

            cout << kaki << " kaki, "
                 << inci << " inci = "
                 << meter << " meter, "
                 << sentimeter << " sentimeter." << endl;
            break;
        case 2:
            cout << "Masukkan meter dan sentimeter: ";
            cin >> meter >> sentimeter;
            cout << endl;

            meterDanSentiKeKakiDanInci(meter, sentimeter, kaki, inci);

            cout << meter << " meter, "
                 << sentimeter << " sentimeter = "
                 << kaki << " kaki, "
                 << inci << " inci."
                 << endl;
            break;
        case 99:
            break;
        default:
            cout << "Masukan tak-valid." << endl;
        }
    }
    while (pilihan != 99);

    return 0;
}

void tampilPilihan()
{
    cout << "Tekan--" << endl;
    cout << "1: Untuk mengkonversi dari kaki dan inci ke meter "
         << "dan sentimeter." << endl;

    cout << "2: Untuk mengkonversi dari meter dan sentimeter ke kaki "
         << "dan inci." << endl;

    cout << "99: Untuk keluar program." << endl;
}

void kakiDanInciKeMeterDanSenti(int f, int in, int& mt, int& ct)
{
    int inci;

    inci = f * INCI_DALAM_KAKI + in;
    ct = static_cast<int>(inci * KONVERSI);
    mt = ct / SENTIMETER_DALAM_METER;
    ct = ct % SENTIMETER_DALAM_METER;
}

void meterDanSentiKeKakiDanInci(int mt, int ct, int& f, int& in)
{
    int sentimeter;

    sentimeter = mt * SENTIMETER_DALAM_METER + ct;
    in = static_cast<int>(sentimeter / KONVERSI);
    f = in / INCI_DALAM_KAKI;
    in = in % INCI_DALAM_KAKI;
}