#include <iostream>
using namespace std;

class Pojazd {
public:
    string nazwa;
    int predkosc;
    void jedz() {
        cout << "Pojazd jedzie z prędkoscia: " << this->predkosc << endl;
    }
};

class Samochod :public Pojazd {
public:
    int liczbaDrzwi;
    void opisSamochodu()
    {
        cout << "Ilosc drzwi: " << this->liczbaDrzwi << endl;
    }
};

int main()
{
    Samochod fiatunio;
    fiatunio.nazwa = "Fiatunio 125p";
    fiatunio.liczbaDrzwi = 5;
    fiatunio.predkosc = 920;
    fiatunio.opisSamochodu();
    fiatunio.jedz();


    return EXIT_SUCCESS;
}
