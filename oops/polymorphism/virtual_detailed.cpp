#include <iostream>

class Base {
public:
  virtual void func() { std::cout << "base\n"; }
};

class Derived : public Base {
  void func() override // 'override' is optional
  {
    std::cout << "derived\n";
  }
};

int main() {
  Base b;
  Derived d;

  // virtual function call through reference
  Base &br = b; // the type of br is Base&
  Base &dr = d; // the type of dr is Base& as well
  br.func();    // prints "base"
  dr.func();    // prints "derived"

  // virtual function call through pointer
  Base *bp = &b; // the type of bp is Base*
  Base *dp = &d; // the type of dp is Base* as well
  bp->func();    // prints "base"
  dp->func();    // prints "derived"

  // non-virtual function call
  br.Base::func(); // prints "base"
  dr.Base::func(); // prints "base"
}