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
//         return temp; // we have created temp so that it can return both variables
//     }
//     // student &operator++()
//     // {
//     //     student temp;
//     //     temp.cou

//     //     // return temp;
//     // }
// };
// int main()
// {
//     student S1, s2(2, 3);
//     S1 = ++s2;
//     cout << S1.count << "     " << S1.count2 << endl;
//     return 0;
// }

// ------------------------------------------------------------------------//

// //                        -- operator overload

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
//     student operator --(){
//         student temp;
//         temp.count=--this->count;
//         return temp;
//     }
// };
// int main()
// {
//     student S1, s2(2, 3);
//     S1 = --s2;
//     cout << S1.count << "     " << S1.count2 << endl;
//     return 0;
// }

//---------------------------------------------------------------------//

//                        < operator overloading                      //

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
//     bool operator<(const student &temp)
//     {
//         if (count < temp.count)
//         {
//             return true;
//         }
//         else if ((count == temp.count) && (count2 < temp.count2))
//         {
//             return true;
//         }
//         return false;
//     }
// };
// int main()
// {
//     student S1(4, 7), S2(4, 3);
//     if (S2 < S1)
//     {
//         cout << "wow";
//     }
//     else
//     {
//         cout << "not wow";
//     }
// }

//-------------------------------------------------------------------------//

//                     input/output operators                              //

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
//     friend ostream &operator<<(ostream &display, const student &a1)
//     {
//         display << a1.count2 << a1.count;
//         return display;
//     }
//     friend istream &operator>>(istream &input, student &a2)
//     {
//         input >> a2.count2 >> a2.count;
//         return input;
//     }
// };
// int main()
// {
//     student S1, S2;
//     cin >> S1;
//     cout << "answer is " << S1;
// }
