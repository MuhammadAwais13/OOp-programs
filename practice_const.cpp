// #include <iostream>
// using namespace std;

// class student
// {public:
//     const int marks = 1;
//     int reg;

// public:
//     student(int a) : reg(a) {}
//     void display()const{
//         cout<<reg<<"    "<<marks;
//     }


// };

// int main()
// {
//     student S1(2332);
//     S1.display();          //a non const object can call const and not const object both
//     //S1.marks=23;   // cant initialize as they are const
//     const student s2(2323);
//     s2.display();   // as s2 is const so it can only access const members if i remove const from disp() them it eill give error
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
//                                   // so we cannot make friend function a const  as const inside class are part of class while here friend function is not part of class

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

//static with const

//===============================================



// #include <iostream>
// using namespace std;

// class student
// {public:
//     const int marks = 1;
//     int reg;

// public:
//     student(int a) : reg(a) {} 
//     static void addvar()const;    //so we cannot make a static function constant as type qualifier is not allowod with static  
// };
// void student :: addvar()const{
//     cout<<"static func called :"<<endl;
// }

// int main()
// {
//     student S1(2332);
//     S1.addvar();
//     return 0;
// }