// #include<iostream>
// using namespace std;
// class Student {
//     public:

// };

// int main()
// {
//     int marks;
//     cin>>marks;
//     try
//     {

//         if(marks>33)
//         {
//             cout<<"passed"<<endl;

//         }
//         else{
//             throw(marks);
//         }
//     }
//     catch(int a)
//     {
//         cout<<"you failed "<<endl;
//     }
//     catch(int b)
//     {
//         cout<<"you failed sorry "<<endl;
//     }
//     catch(...)                 // this three dot catch file can catch all files
//                                // if no matching catch is given
//     {
//         cout<<"you failed sorry "<<endl;
//     }

//  return 0;
// }

// EXCEPTION HANDELING IN CLASSES

// #include <iostream>
// using namespace std;
// class Student
// {
// public:
//     void func(int a)
//     {
        
//             if (a < 20)
//             {
//                 cout << "good";
//                 /* code */
//             }
//             else
//             {
//                 throw a;
//             }
        
//     }
// };

// int main()
// {
//     Student S1;
//     try
//     {
//         S1.func(33);
//     }
//     catch (int c)
//     {
//         cout << "sorry" << endl;
//     }
//     catch (...)
//     {
//         cout << "exception ";
//     }
// }