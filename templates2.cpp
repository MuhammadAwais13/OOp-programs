

#include <iostream>
using namespace std;


template <class T=int, class T2=float> // now we can make more than one variables for more than one data type from main 
                                       // and default paremeters are given --> if no perimeters from main these will be used  
class Addition
{
    T var1; 
    T2 var2;

public:
    Addition(T a, T2 b) : var1(a), var2(b){};
    void add()
    { 
        cout<<"value is"<< var1 <<endl;
        cout<<"value is : "<< var2 <<endl;
    }
};
int main()
{
    Addition<int,float> A1(3, 4.2);// two different data types
     A1.add();
   

    return 0;
}