#include<iostream>
using namespace std;
class parent{
    public:
    int a;
    parent(int x):a(x){};
    void display(){
        cout<<a<<endl;
    }
};
class student: public parent{
    public:
    student(int x):parent(x){};

    // void input(int x){
    //     a=x;
    // }
};
int main()
{
    student S1(4);
    // S1.input(3);
    S1.display();
 return 0;
}