// #include <iostream>
// using namespace std;

// class student
// {public:
//     const int marks = 1;
//     int reg;

// public:
//     student(int a) : reg(a) {}
//     void display(){
//         cout<<reg<<"    "<<marks;
//     }


// };

// int main()
// {
//     student S1(2332);
//     S1.display();
//     //S1.marks=23;   // cant initialize as they are non static
//     const student s2(2323);
//     //s2.display();   // as s2 is const so it can only access static members not non ststic
//     return 0;
// }



//===========================================
//combinations 
//===========================================

//==========================================

// functions 

//==========================================

// #include <iostream>
// using namespace std;

// class student
// {public:
//     const int marks = 1;
//     int reg;

// public:
//     student(int a) : reg(a) {} // const with constructor giving error
//     void display()const{            //to make a function const we write const here 
//         cout<<reg<<"    "<<marks;
//     }


// };

// int main()
// {
//     student S1(2332);
//     S1.display();
//     const student s2(2323);
//     s2.display();
//     return 0;
// }




//=======================================


//friends functions 

//===================================


// #include <iostream>
// using namespace std;

// class student
// {public:
//     const int marks = 1;
//     int reg;

// public:
//     student(int a) : reg(a) {} // const with constructor giving error
//     friend void display()const;   // const qualifier after the function signature indicates that the function does not modify the object it is called on
//                                   // so we cannot make friend function a const  

// };

// int main()
// {
//     student S1(2332);
//     S1.display();
//     const student s2(2323);
//     s2.display();
//     return 0;
// }

//===============================================

//