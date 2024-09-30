#include <iostream>
using namespace std;

class Prostokat {
private:
    double szerokosc, wysokosc;
public:
    void ustawSzerokosc(double s)[this->szerokosc = s; ];
    void ustawWysokosc(double w)[this->wysokosc = w;];
    double obliczPole() { return this->szerokosc * this->wysokosc; }
};
int main()
{
    cout << "Zadanie nr1\n";
    Prostokat prostokat;
    prostokat.ustawSzerokosc(10.23);
    prostokat.ustawWysokosc(4.45);
    cout << "wynik pola prostkąta = " << prostokat.obliczPole();


    return EXIT_SUCCESS;
}

