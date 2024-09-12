// Explicit type casting : done by user itself, not by compiler 

//1) by using cast operator there are 4 types 
              //1) using static cast operator 
               // syntax static_cast <type> (expression)
               //it usually dose all the things done by implicit type casting but by user in compile time



// #include<iostream>
// using namespace std;
// int main()
// {
//     int a =19.3*2;
//     float result= static_cast <float> (a); // this is syntax
//     cout<<result;
//      return 0;
// }



// static cast is like implicit casting but with static_cast keyword wo use this when there is big code, its difficult to find implicit casting but we can easily find stastic csating
// static cast dosernt perform runtime inspection that if casting done is valid or not if its valid then program will 
//run but if its wrong program will still run but will not give desired values as return so you cannot know if casting is 
//right or not for this purpose dynamic_cast is used dynamic cast return a null pointer if casting is wrong so using
//that we can know that casting is wrong 

//static type casting is more ristrictive type casting as it dose not allow
// to cast char* to int* as char pointer points to one byte and int points to 4 bytes


// static cast avoid casting derived to base private base pointer

// #include<iostream>
// using namespace std;
// class Base{};
// class Derived: public Base {       // as base is accessed private we cannot initalize Derived to Base

// };

// int main()
// {   Derived D1;
//     Base *Ptr = static_cast<Base*>(&D1); // thats why it gives error in this line 
// }
