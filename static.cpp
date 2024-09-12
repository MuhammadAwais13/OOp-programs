// #include <iostream>
// using namespace std;
// class Student
// {
//     int c;

// public:
//     int Reg;
//     static int marks;

//     Student(int a) : Reg(a) {}
//     Student() {}
//     static int setmarks(int a)
//     { // static member can be initialized using ststic function onle its onle purpose of static function
//         marks = a;
//     }
//     int setmarks2(int a)
//     {
//         marks = a;
//     }

//     friend void Show();
// };
// int Student ::marks = 20;
// void Show()
// {
//     Student S1;
//     S1.marks = 190;
//     cout << S1.marks;
// }

// int main()
// {
//     Student S1;
//     S1.setmarks(24);
//     S1.setmarks2(40);
//     Show();
//     Student S2;
//     Show();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Student
// {
//     int c;
// public:
//     int Reg;
//     static int marks;

//     Student(int a) : Reg(a) {}
//     Student() {}
//     static int setmarks(int a){   // static member can be initialized using ststic function onle its onle purpose of static function
//         marks=a;
//         reg=a;        // we cannot initialize a non static member in a static function
//     }
//     int setmarks2(int a){
//         marks=a;
//     }

//     friend void Show();

//     void show2(){
//         cout<<marks<<endl;
//     }

// };
// int Student ::marks=20;      /// marks will be initiallized this value only if no other initiallization of marks exist if initialization using any function exist then value will be printed according to sequence of calling
// void  Show(){
//     Student S1;
//     S1.marks=190;
//     cout<<S1.marks<<endl;

// }

// int main()
// {
//     Student S1;
//     S1.show2();// as when this show 2 is called at that time show was not called hence marks was not given value of 290

//     Show();
//     Student S2;
//     Show(); // as its static both objects will have same value of marks as marks value remain unchanged in all obects of tudents
//  return 0;
// }

//-------------------------------------------------------------
//-------------------------------------------------------------

// combination of static

//================================================================
// static with constructors
// no we cannot use static with constructors as static is same for all classes while constructor is for single class

// #include<iostream>
// using namespace std;
// class Student
// {
//     int c;
// public:
//     int Reg;
//     static int marks;

//     static Student(int a) : Reg(a) {}
//     Student() {}

// };

// int main()
// {
//     Student S1;
//     S1.setmarks(24);
//     S1.setmarks2(40);
//     Show();
//     Student S2;
//     Show();
//  return 0;
// }

//---------------------------------------------------------------
// static with this pointer
//==============================================================

//no we cannot use as static is for all class while this is only relatd to object 


// #include<iostream>
// using namespace std;
// class student{
//     public:
//     int marks;
//     student(int a):marks(a){}
//     void add(int marks){
//         static this->marks=marks;
//     }
// }
// int main()
// {   int a;
//     student s1(20);
//     s1.add(20);
//  return 0;
// }

//=========================================================

// friends function with static

// i cannot write static with friend it is not giving  arir here but when i try to run it it will give error
//==========================================


// friend function cannot be static as they are not members of class they only have access to private variables of class while static is used for a single type of 
//class so they cannot be written togather as member functions can only be created static

// #include <iostream>
// using namespace std;
// class Student2;
// class Student
// {
// private:
//     int Reg;
//     int marks;

// public:
//     Student(int a) : marks(a) {}
//     static friend void addvar(Student &s1, Student2 &s2);
//     void Show()
//     {
//         cout << "reg of student is " << Reg << "\n marks of stdent is " << marks << endl;
//     }
// };
// class Student2
// {
// private:
//     /* data */
//     int marks2;

// public:
//     Student2(int a) : marks2(a) {}
//     static friend void addvar(Student &s1, Student2 &s2);
// };
// static void addvar(Student &s1, Student2 &s2)
// { // to use private var we still need to create objects and then use thir private variables
//     int marks1 = s1.marks + s2.marks2;

//     cout << "total marks are " << marks1;
// }

// int main()
// {
//     Student s1(30);
//     Student2 s2(40);
//     addvar(s1, s2); // we can simply call friend function without object
//     return 0;
// }
