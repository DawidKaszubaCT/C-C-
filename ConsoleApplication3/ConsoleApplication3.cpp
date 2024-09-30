#include <iostream>
using namespace std;

class Figura{
public:
    virtual double obliczPole() = 0;
};

class Kwadrat :public Figura{
private:
    double bok;
public:

};
class Kolo :public Figura{

};

int main()
{
    return EXIT_SUCCESS;
}
