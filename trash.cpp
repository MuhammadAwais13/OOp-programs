#include<iostream>
using namespace std;
template<typename T,class K>
K add(T a,K b){
    K z;
    z=a;
    a=b;
    b=z;
}
int main()
{
    int a=10;
    float b=4.4;
    // cout<<add;
 return 0;
}