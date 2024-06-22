#include <iostream>

class Base
{
public:
    void add(int a, int b) { std::cout << "Base class Sum: " << (a + b) << std::endl; }
};

class Derived : public Base
{
public:
    void add(int a, int b) { std::cout << "Derived class Sum: " << ((a + b) * 2) << std::endl; }
};

int main()
{
    Derived d;
    d.add(100, 100);
    Base b;
    Base x = Derived();
    b.add(100, 100);
    x.add(100, 100);
    exit(EXIT_SUCCESS);
}