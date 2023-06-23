#include <iostream>
#include <cmath>
using namespace std;

class Figura
{
public:
    virtual void Narysuj() = 0;
    virtual double Obwod() = 0;
    virtual double PolePowierzchni() = 0;
};

class Trojkat : public Figura
{
private:
    double a, b, c;

public:
    Trojkat(double a, double b, double c) : a(a), b(b), c(c) {}

    void Narysuj()
    {
        cout << "Przepis na narysowanie trojkata" << endl;
    }

    double Obwod()
    {
        return a + b + c;
    }

    double PolePowierzchni()
    {
        // Zastosowanie wzoru Herona
        double p = (a + b + c) / 2.0;
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }
};

class Kwadrat : public Figura
{
private:
    double a;

public:
    Kwadrat(double a) : a(a) {}

    void Narysuj()
    {
        cout << "Przepis na narysowanie kwadrata" << endl;
    }

    double Obwod()
    {
        return 4 * a;
    }

    double PolePowierzchni()
    {
        return a * a;
    }
};

class Prostokat : public Figura
{
private:
    double a, b;

public:
    Prostokat(double a, double b) : a(a), b(b) {}

    void Narysuj()
    {
        cout << "Przepis na narysowanie prostokata" << endl;
    }

    double Obwod()
    {
        return 2 * (a + b);
    }

    double PolePowierzchni()
    {
        return a * b;
    }
};

class Kolo : public Figura
{
private:
    double r;

public:
    Kolo(double r) : r(r) {}

    void Narysuj()
    {
        cout << "Przepis na narysowanie kola" << endl;
    }

    double Obwod()
    {
        return 2 * M_PI * r;
    }

    double PolePowierzchni()
    {
        return M_PI * r * r;
    }

    double Dystans(double powierzchniaNaOsobe)
    {
        return sqrt(powierzchniaNaOsobe / M_PI);
    }
};

int main()
{
    Figura *figura1 = new Trojkat(3, 4, 5);
    figura1->Narysuj();
    cout << "Obwod: " << figura1->Obwod() << endl;
    cout << "Pole powierzchni: " << figura1->PolePowierzchni() << endl;

    Figura *figura2 = new Kwadrat(5);
    figura2->Narysuj();
    cout << "Obwod: " << figura2->Obwod() << endl;
    cout << "Pole powierzchni: " << figura2->PolePowierzchni() << endl;

    Figura *figura3 = new Prostokat(4, 6);
    figura3->Narysuj();
    cout << "Obwod: " << figura3->Obwod() << endl;
    cout << "Pole powierzchni: " << figura3->PolePowierzchni() << endl;

    Figura *figura4 = new Kolo(3);
    figura4->Narysuj();
    cout << "Obwod: " << figura4->Obwod() << endl;
    cout << "Pole powierzchni: " << figura4->PolePowierzchni() << endl;

    Kolo *kolo = dynamic_cast<Kolo *>(figura4);
    if (kolo)
    {
        double powierzchniaNaOsobe = 2.0;
        cout << "Dystans dla powierzchni na osobe = " << powierzchniaNaOsobe << " wynosi: " << kolo->Dystans(powierzchniaNaOsobe) << endl;
    }

    delete figura1;
    delete figura2;
    delete figura3;
    delete figura4;

    return 0;
}
