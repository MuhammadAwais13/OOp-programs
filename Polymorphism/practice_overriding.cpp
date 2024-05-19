//=============================================

// COMBINATIONS OF OVERRIDING

//============================================

//===========================================

// constructtor ovverriding

// #include<iostream>
// using namespace std;
// class teacher{
//     public:
//     int stud_marks;
//     teacher(int a):stud_marks(a){}
//     void disp(){
//         cout<<"MArks of student are : "<<endl;
//     }
// };
// class student: public teacher{
//     public:
//     student(int a):teacher(a){}
//     void disp(){
//         cout<<"MArks of student are : "<<stud_marks<<endl;
//     }

// };

// int main()
// {
//     student S1(48);
//     S1.disp();
//  return 0;
// }

//============================================================

// static func with overriding

//===========================================================

// yes we can overridde static function but we can only use static varibles in static functions as shown here

// #include<iostream>
// using namespace std;
// class teacher{
//     public:
//     static int stud_marks;
//     teacher(int a){}
//     static void disp(){
//         cout<<"MArks of student are base: "<<endl;
//     }
// };
// int teacher::stud_marks=44;
// class student: public teacher{
//     public:
//     student(int a):teacher(a){}
//     static void disp(){
//         cout<<"MArks of student are : "<<stud_marks<<endl;
//     }

// };

// int main()
// {
//     student S1(48);
//     S1.disp();
//  return 0;
// }

//========================================================

// const with overriding

////========================================================
//yes we can inherit const veriables and functions 

// #include <iostream>
// using namespace std;
// class teacher
// {
// public:
//     const int stud_marks = 30;
//     teacher(int a) {}
//     void disp()const
//     {
//         cout << "MArks of student are base: " << endl;
//     }
//     void disp2()const
//     {
//         cout << "MArks of student are base: const  " << endl;
//     }
// };

// class student : public teacher
// {
// public:
//     student(int a) : teacher(a) {}
//     void disp()const
//     {
//         cout << "MArks of student are : " << stud_marks << endl;
//     }
// };
// int main()
// {
//     student S1(48);
//     S1.disp();
//     S1.disp2();
//     return 0;
// }


//============================================

//operator overriding 

//============================================

// #include <iostream>
// using namespace std;
// class student
// {
// private:
// public:
//     int count;
//     int count2;
//     student(int a, int b) : count(a), count2(b) {}
//     student() {}
//     student operator ++()
//     {
//         student temp;
//         temp.count = ++count;
//         temp.count2 = ++count2;
//         return temp; }
// };
// class derived :public student {
//     public:
//     derived operator ++()
//     { int countd;
//         int countd2;
//         derived  temp;
//         temp.countd = ++countd;
//         temp.countd2 = ++countd2;
//         return temp; }

// };
// int main()
// {
//     student S1, s2(2, 3);
//     S1 = ++s2;
//     cout << S1.count << "     " << S1.count2 << endl;

//     derived  d1,d2;
//     d1 = ++d2;
//     cout << d1.count << "     " << d1.count2 << endl;
//     return 0;
// }