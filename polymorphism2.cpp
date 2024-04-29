// pointer to derived class 
// important concept to understand virtual functions 
#include<iostream>
using namespace std;
class base_class{
 int B_value;
 void display(){
    cout<<"calling from base class "<<endl;
 }
};
class Derived : public base_class{
 int D_value;
 void display(){
    cout<<"calling from derived class : "<<endl;
 }
};
int main()
{
    base_class* Pointer_base;
    Derived D1;
    Pointer_base = & D1;
 return 0;
}