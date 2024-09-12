// COMBINATIONS for VIRTUAL functions

//========================================

// virtual with constructors

// no i cannot use virtual with constructors

//

// #include<iostream>
// using namespace std;
// class base_class{
//     public:
//  int B_value;
//  base_class(int a):B_value(a){}
//  virtual void display()
//  {
//     cout<<"calling from base class "<<endl;
//  }
// };
// class Derived : public base_class{
//     public:
//  int D_value;
//  void display(){
//     cout<<"calling from derived class : "<<endl;
//  }
// };
// int main()
// {
//     base_class* Pointer_base;
//     Derived D1;
//     Pointer_base = & D1;

//     Pointer_base->display();
//     return 0;
// }

//=========================================

// friend functions

//=========================================

// virtual functions cannot be friends

// #include<iostream>
// using namespace std;
// class base_class{
//     public:
//  int B_value;
//  virtual friend void disp();
//  virtual void display()
//  {
//     cout<<"calling from base class "<<endl;
//  }
// };
// void disp(){
//     cout<<"void disp called virtal friend "<<endl;
// }
// class Derived : public base_class{
//     public:
//  int D_value;
//  virtual friend void disp();
//  void display(){
//     cout<<"calling from derived class : "<<endl;
//  }
// };
// int main()
// {
//     base_class* Pointer_base;
//     Derived D1;
//     Pointer_base = & D1;
//     disp();

//     Pointer_base->display();
//     return 0;
// }

//========================================

// static with virtual

//=========================================
// static member cannot be virtual

// #include<iostream>
// using namespace std;
// class base_class{
//     public:
//  int B_value;
//  virtual static void display()
//  {
//     cout<<"calling from base class "<<endl;
//  }

// };

// class Derived : public base_class{
//     public:
//  int D_value;
//  void display(){
//     cout<<"calling from derived class : "<<endl;
//  }
// };
// int main()
// {
//     base_class* Pointer_base;
//     Derived D1;
//     Pointer_base = & D1;
//     Pointer_base->display();
//     return 0;
// }

//==============================================

// const

//==============================================

// yes we can use virtual and const now if const is only written with disp in base or in derived  then in pointer call disp of base will be called
// if const is written in derived  mean both at same time then derived dis will be called

// #include<iostream>
// using namespace std;
// class base_class{
//     public:
//  int B_value;
//  virtual void display()const
//  {
//     cout<<"calling from base class "<<endl;
//  }

// };

// class Derived : public base_class{
//     public:
//  int D_value;
//  void display()const{
//     cout<<"calling from derived class : "<<endl;
//  }
// };
// int main()
// {
//     base_class* Pointer_base;
//     Derived D1;
//     Pointer_base = & D1;
//     Pointer_base->display();
//     return 0;
// }

//=========================================

// operator overloading

//=========================================

//////     yes we cann override operator overloading such that all the thing in base operator should be same in derived onle virtual is written in base but not in in derived as we can see 



// #include <iostream>

// class Base {
// public:
//     int value;

//     Base(int val = 0) : value(val) {}

//     // Virtual overload of the + operator
//     virtual Base operator+(const Base& other) const {
//         return Base(this->value + other.value);
//     }

//     virtual void display() const {
//         std::cout << "Base: " << value << std::endl;
//     }

//     virtual ~Base() = default;
// };

// class Derived : public Base {
// public:
//     Derived(int val = 0) : Base(val) {}

//     // Override the virtual + operator
//     Base operator+(const Base& other) const override {
//         return Base(this->value + other.value);
//     }

//     void display() const override {
//         std::cout << "Derived: " << value << std::endl;
//     }
// };

// int main() {
//     Base b1(10), b2(20);
//     Derived d1(30), d2(40);

//     Base* pb1 = &b1;
//     Base* pd1 = &d1;

//     Base b3 = *pb1 + b2;  // Uses Base::operator+
//     Base d3 = *pd1 + d2;  // Uses Derived::operator+ due to virtual dispatch

//     b3.display();  // Outputs: Base: 30
//     d3.display();  // Outputs: Derived: 70

//     return 0;
// }
