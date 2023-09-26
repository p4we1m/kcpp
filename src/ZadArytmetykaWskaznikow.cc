#include <iostream>

void Funkcja1() {
    int a = 0;
    int* p = &a;

    std::cout << "Wyniki dla Funkcja1():\n";

    p++;
    std::cout << "1.  *p = " << *p << std::endl;

    ++p;
    std::cout << "2.  *p = " << *p << std::endl;

    //++*p;
    //std::cout << "3.  *p = " << *p << std::endl;

    //++(*p);
    //std::cout << "4.  *p = " << *p << std::endl;

    //++*(p);
    //std::cout << "5.  *p = " << *p << std::endl;

    //*p++;
    //std::cout << "6.  *p = " << *p << std::endl;

    //(*p)++;
    //std::cout << "7.  *p = " << *p << std::endl;

    *(p)++;
    std::cout << "8.  *p = " << *p << std::endl;

    *++p;
    std::cout << "9.  *p = " << *p << std::endl;

    *(++p)++;
    std::cout << "10. *p = " << *p << std::endl;
}

void Funkcja2() {
    int a = 0, b = 0, c = 0;
    int* pA = &a;
    int* pB = &b;
    int* pC = &c;

    std::cout << "\nWyniki dla Funkcja2():\n";

    std::cout << "1.  A, B, C: " << a << "  " << b << "  " << c << std::endl;

    *pB = 10;
    std::cout << "2.  A, B, C: " << a << "  " << b << "  " << c << std::endl;

    *pC = 20;
    std::cout << "3.  A, B, C: " << a << "  " << b << "  " << c << std::endl;

    *pB += *pC;
    std::cout << "4.  A, B, C: " << a << "  " << b << "  " << c << std::endl;

    *pA += *pB;
    std::cout << "5.  A, B, C: " << a << "  " << b << "  " << c << std::endl;

    *pB += *pC;
    std::cout << "6.  A, B, C: " << a << "  " << b << "  " << c << std::endl;

    *pC += *pA;
    std::cout << "7.  A, B, C: " << a << "  " << b << "  " << c << std::endl;

    *pB += *pA;
    std::cout << "8.  A, B, C: " << a << "  " << b << "  " << c << std::endl;

    *pA += *pA;
    std::cout << "9.  A, B, C: " << a << "  " << b << "  " << c << std::endl;

    *pB += *pB;
    std::cout << "10. A, B, C: " << a << "  " << b << "  " << c << std::endl;
}

int main() {
    Funkcja1();
    Funkcja2();

    return 0;
}
