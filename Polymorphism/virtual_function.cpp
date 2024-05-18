  // previously we have seen in polymorphism 2 that pointer of base still calls 
  // display of base after initializing with adress of derive so if we want to 
  // call display of derived we make display of base virtual which means whenever 
  // base pointer initialized with adress of derived tries to call display --> virtual display 
  // inside base will say please go to derived hence derved display will be called 
#include<iostream>
using namespace std;
class base_class{
    public:
 int B_value;
 virtual void display() //this virtual will say call display of derived not me  
 {
    cout<<"calling from base class "<<endl;
 }
};
class Derived : public base_class{
    public:
 int D_value;
 void display(){          // same display function in base and derived class 
    cout<<"calling from derived class : "<<endl;
 }
};
int main()
{
    base_class* Pointer_base;       
    Derived D1;
    Pointer_base = & D1;           
                                     
    Pointer_base->display();        
    return 0;
}