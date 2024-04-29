// pointer to derived class 
// important concept to understand virtual functions 
#include<iostream>
using namespace std;
class base_class{
    public:
 int B_value;
 void display(){
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
    base_class* Pointer_base;         // now creating a pointer of base class
    Derived D1;
    Pointer_base = & D1;           // initializing pointer of base class with adress of derived class
                                   // which is possible  
    Pointer_base->display();       // now calling display --> as it contain adress of derived class 
                                   // but in cpp display will be called from class which is type of pointer
                                   // so this is concept of late or run time binding as during run timr compliler is 
                                   //deciding which function is to be connected with this pointer. 
                                   // if it was not pointer and simple display call using base obj then it would 
                                   // hav been decided during compile time
    Derived* D2;
    base_class B1;
    D2=&B1;                        // now we cannot use same procedure for base to derived 
                                   // as we cannot assign a parent to its son 
                                   // while in upper case we can assign a son to parrent                                         
 return 0;
}