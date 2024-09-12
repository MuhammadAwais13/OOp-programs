#include<iostream>
using namespace std;
class Student2;
class Student
{
    private:
    int Reg;
    int marks;
    public:
    Student(int a):marks(a){}
    friend void addvar(Student & , Student2 & );
    void Show()
    {
        cout << "reg of student is " << Reg << "\n marks of stdent is " << marks << endl;
    }
};
class Student2
{
private:
    /* data */
    int marks2;
public:
 Student2(int a):marks2(a){}
 friend void addvar(Student & , Student2 & );
     
};
void addvar(Student &s1, Student2 &s2){     // to use private var we still need to create objects and then use thir private variables 
    int marks = s1.marks+s2.marks2;
    cout<<"total marks are "<<marks;
}

int main()
{
    Student s1(30);
    Student2 s2(40);
    addvar(s1,s2);     // we can simply call friend function without object 
 return 0;
}





// FRIEND CLASSES



// #include<iostream>
// using namespace std;
// class Student2;
// class Student
// {
//     private:
//     int Reg;
//     int marks;
//     public:
//     Student(int a):marks(a){}
    
//     void Show()
//     {
//         cout << "reg of student is " << Reg << "\n marks of stdent is " << marks << endl;
//     }
//     int ADD(Student2& );

// };
// class Student2
// {
// private:
//     /* data */
//     int marks2;
// public:
//  Student2(int a):marks2(a){}
 
//      friend class Student ;   // student is now made friend by student 2 now student can acces values of student 3 but not viceversa

// };
// int  Student:: ADD(Student2& S2){
//         int tot= this->marks+S2.marks2;
//         return tot;
//     }

// int main()
// {
//     Student s1(30);
//     Student2 s2(40);
//     cout<<"total marks are "<<s1.ADD(s2);
//     return 0;
// }

//---------------------------------------------
//---------------------------------------------

// COmbinations friend functions 

//-----------------------------------------------------
// friends with costructors


// constructors
// #include <iostream>
// using namespace std;
// class Student
// {
// public:
//     int Reg;
//     int marks;
//     Student(int a, int b) : Reg(a), marks(b) {}
//     Student() {}
//     friend Student(const Student &S1)
//     {
//         this->marks = S1.marks;
//         this->Reg = S1.Reg;
//     }
//     void Show()
//     {
//         cout << "reg of student is " << Reg << "\n marks of stdent is " << marks << endl;
//     }
// };
// int main()
// {
//     Student S1(2023388, 1223), S3;
//     S3 = S1; 
//     S3.Show();
//     Student S2 = S1; 
//     S2.Show();
//     return 0;
// }
