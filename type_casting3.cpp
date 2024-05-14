//Const casting
//syntax const_cast<type>(expression) 
// to change a const or volatile nature of variable either from non const to const or viceversa
// type must be pointer or reference
#include<iostream>
using namespace std;
int main()
{/*now in first we are trying to deconst a2 which is const and contain another adress of a1 so
after a2 is de const and its adress is given to a3 --> now a3 contain adress of a2 so now when we try to change adress
of a1 using a3 its invalid as a1 is still constant */
    const int a1 =10 ;
    const int* a2=&a1;
    int* a3=const_cast<int*>(a2);
    *a3=30; //invalid 
/* to end above problem a1 is made non const*/
    const int a1 =10 ;
    const int* a2=&a1;
    int* a3=const_cast<int*>(a2);
    *a3=30;




 return 0;
}