

// combinations of inheritance

//===================================

//constructor inheritance

#include<iostream>
using namespace std;
class student {
    private:
    int marks;
    public:
    student(int a):marks(a){cout<<"student called"<<endl;}
    student(){cout<<"student called C2"<<endl;}

};
class child: public student{
    public:
    using student::student; //
    };

int main()
{// now we can inherit constructor of base class in derived class using the word 'using' like in 23 line now we have also inheritted constructor in child class now by that single line we are inheriting both constructors of base class
//
    child C1; //now base class constructor will be called as child has inherrited base class constructor construcm with no perimeters will be called
    child C2(34); // constructor with one perimeter will be called
    // if i create constructor of class child then it will never call constructors of base it will look for child class constructors

 return 0;
}

//==============================================

// friends function with inheritance

//==============================================

// #include<iostream>
// using namespace std;
// class student {
//     private:
//     int marks;
//     public:
//     student(int a):marks(a){cout<<"student called"<<endl;}
//     student(){cout<<"student called C2"<<endl;}
//     friend void Display();

// };
// class child: public student{
//     public:
//     //Display ()            // i cannot directly call display func which is frind of base os its not part of base just its fried to use it i have to make it friend here in derived also

//     };

//     void Display(){
//             cout<<"marks are :"<<endl;
//     }

// int main()
// {
//     child C1;
//     child C2(34);

//  return 0;
// }

//===============================================

// static with inheritance

//===============================================


// i can inherit static members in derived and use them
// #include <iostream>
// using namespace std;
// class student
// {
// private:
//     int marks;

// public:
//     static int reg;
//     student(int a) : marks(a) { cout << "student called" << endl; }
//     student() { cout << "student called C2" << endl; }
//     static void disp2(){
//         cout<<"hahaha"<<endl;
//     }
// };
// int student ::reg = 2023388;
// class child : public student
// {
// public:
//     void display(){
//         cout<<"reg is "<<reg<<endl;
//     }
    
// };

// int main()
// {
//     child C1;
//     C1.display();
//     C1.disp2();

//     return 0;
// }



//==============================================

//const with inheritance

//=============================================

// #include <iostream>
// using namespace std;
// class student
// {
// private:
//     int marks;

// public:
//     const int reg=10;
//     student(){}
// };

// class child : public student
// {
// public:
//     void disp(){
//         cout<<reg;
//     }
   
    
// };

// int main()
// {
//     child C1;
//     C1.disp();
    
//     return 0;
// }