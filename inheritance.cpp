#include <iostream>
using namespace std;
class Base
{
private:
    int a;
    int b;

public:
    int c=2;
    Base() : a(5), b(10),c(3){};
    void show()
    {
        cout << a << "     b" << endl;
    }

    // ~Base();
    protected:
    int e=29;
};
class Derived1 : private  Base // all types of members of base class are 
                               // private inside derived class 1 public
                               // of base can be used or called inside 
                               // this class but it cannot be used in 
                               // inheritid class of 1.... private of base 
                               //class are not allowed to be used in this 
                               //derived 1 they are only accessible in bese class
                               // so in short in this public of base are private in 
                               //Derived 1 and privte of Der1 are inaccessible 
                               //in der2  
{
public:
   
    int shuw2()// we can only initialize varible of parent class using function but we cannot do it using constructor as constructor only initialize member varibles of same class 
    {
        c=30; //to assign a value to a veriable of base class we cannot do without using function we need a function to do this job 
        cout << "from base :" << c<<c<<a; //privet a of base is inaccessible
    }
};
class Derived2 : Derived1{
    // c=10;   we cannot directly assign it we can do it inside a function
    public:              
    int show3(){
        //cout<<c;       //private of der1 are inaccessible in der 2
    }
};
class Derived3 : protected Base    //now this is multiple level inheritance as base has 
                                   //two sons now.... And this has made public of base 
                                   //protected in this derived class while protected are protected
                                   //while private of base are never accessible
{ 
    public:
    void show3(){
        cout<<"protectd member of base class"<<e<<c; // as e is protected so this class and 
                                                  //its sons can use e of base class also c
                                                  //as its also protected in this dev class
                                                  //while protected cannot be used inside main  
    }
};

int main()
{
    Derived1 D1;
    // D1.show();
    D1.shuw2();
    Derived3 D3;
    D3.show3(); // so we can call show 3 but we cannot call c or e as they are protected
    return 0;
}