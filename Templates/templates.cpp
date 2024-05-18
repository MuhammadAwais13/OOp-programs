// why use templates
// to use dry principle
// dont repeat yourself in programming principal is not violated
// we can do generic programming -->now class is not specified for single data type IT CAN BE USED with
// multiple data types.
// eg i want a vector class but it must contain different variables all with different datatypes
// so for each data types i have to make dofferent vector classess
// but using template i can make one class and use it for different data types

template <class T> // now this clSS IS  made template now we can use its members with any
                   // datatype
class Addition
{
    T var1; // now if T vale is int it will become int if its float it will become float from main
    T var2;

public:
    Addition(T a, T b) : var1(a), var2(b){};
    T add()
    { // now this function will return with return type given from main
        T z = var1 + var2;
        return z;
    }
};
#include <iostream>
using namespace std;
int main()
{
    Addition<int> A1(3, 4); // this int will give value to class T as int
    int z = A1.add();
    cout << "value is : " << z;
    Addition<float> A2(4.4, 4.1); // this float will give value to class T as float
    float z2 = A2.add();
    cout << "value is : " << z2;

    return 0;
}