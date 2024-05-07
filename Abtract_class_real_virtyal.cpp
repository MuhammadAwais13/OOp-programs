// abstract base class is a class whose sole purpose is to make new class.
// it contain real virtual function
// we cannot creat object of abstract class as it is only created to make new classes 
#include<iostream>
using namespace std;
class base_class{
    public:
 int B_value;
 virtual void display()=0;     //  now this is a do nothing virtual function whose sole purpose is to 
                               // make display or call diplay in derived class with same name when its pointer
                               // containing adress of derived calls display 
                               // this do nothing function is called pure virtual function as its sole purpose 
                               // is to make new classes 
                               // derived class must contain display if base class pointer is initialized
                               // with derived and display is called now as display in base is real virual
                               // it will give error and say plaease make display in derived 
                               // now this class is abstract class as it contain real virtual function 
 
};
class Derived : public base_class{
    public:
 int D_value;
 void display(){           
    cout<<"calling from derived class : "<<endl;
 }
};
class Derived2 : public base_class{
    public:
 int D_value;
 void display(){           
    cout<<"calling from derived 2 class : "<<endl;
 }
};
int main()
{
    base_class* Pointer_base;  
    base_class* Pointer_base2;       
    Derived D1;
    Pointer_base = & D1; 
    Pointer_base->display(); 
    Derived2 D2;
    Pointer_base2 = & D2; 
    Pointer_base2->display();            
                                     
    // base_class B1;      // we cannot creat object of abstract class as it is only created to make new classes 
    return 0;
}