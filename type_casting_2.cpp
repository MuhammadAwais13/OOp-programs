/*now second type of eplicit TYpe casting is dynamic type cast
this type cast check weather casting is done right or wrong 
syntax dybamic_cast <type >(expression)

// this is only used when we deal with polymorphic inheritance means base class must contain virtual function
in this we MAKE base class a pinter and check weather it points to derived class or not if it points to derived class
then its done right 
as we know a base class cant point to derived class but if we make virtual function base then it can point to derived class

*/ 

#include<iostream>
class Base{
    public :
    virtual void show(){};
    void showw(){};
};
class derived : public Base{

};
using namespace std;
int main()
{
    Base* ptr = new derived;           // now we have dynamically initiallize adress of derived class to base class as base contain virtual so it should 
                                       // accept adrees of derived an should point to derived 
                                       // 
    
    derived* ppptr = dynamic_cast<derived*>(ptr); 
                                                 // this cast tells us that after casting ptr is a pointer to derived class 
                                                 // and now its successfully converted to derived object and 
                                                 // the adrees to which ptr points is stored in ppptr
                                                 // if its not true ppptr will store null if its true then casting is sucess

    //it is used for correct down casting or upcasting 
    // by this we check if inheritance is right  by not returning null pointer 
    if(ppptr!=nullptr){          //this checks if pptr contains null pointer
        cout<<"sucessfull"<<endl;

    }
    else{
        cout<<"unsuccessfull"<<endl;
    }
    ppptr->show();
 return 0;
}