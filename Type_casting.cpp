// Explicit type casting : done by user itself not by compiler 

//1) by using cast operator there are 4 types 
              //1) using static cast operator 
               // syntax static_cast <type> (expression)
               //it usually dose all the things done by implicit type casting but by user in compile time
#include<iostream>
using namespace std;
int main()
{
    int a =19.3*2;
    float result= static_cast <float> (a); // this is syntax
    cout<<result;
     return 0;
}
// static cast dosernt perform runtime inspection that if casting done is valid or not if its valid then program will 
//run but if its wrong program will still run but will not give desired values as return so you cannot know if casting is 
//right or not for this purpose dynamic_cast is used dynamic cast return a null pointer if casting is wrong so using
//that we can know that casting is wrong 
