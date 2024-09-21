#include<iostream>
using namespace std;
//structure of person 
struct Person
{
    /* data */
    string name;
    int age;
    int salary;
};

int main()
{
    //initializing variables of person 
 Person p1;
 p1.age=23;
 p1.name="Awais Ashraf";
 p1.salary=100000;

 //printing values 
 cout<<"name  ="<<p1.name<<endl;
 
 cout<<"Age ="<<p1.age<<endl;
 cout<<"salary ="<<p1.salary<<endl;
 
 return 0;
}