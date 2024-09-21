#include<iostream>
using namespace std;
//declaration of structure 
struct Student
{
    /* data */
    string name;
    int age;
    int roll_num;
};

//function to print names with even roll num 
void print_even(Student *S,int b){
    for(int i=0;i<b;i++){
        if (S[i].roll_num%2==0){
            cout<<S[i].name<<endl;
        }

    }

}
//function to print names with age 14
void print_14(Student *S,int b){
    cout<<"\nname of students with 14 age ";
    for(int i=0;i<b;i++){
        if (S[i].age==14){
            cout<<S[i].name<<endl;
        }

    }

}
//name of all students 
void print_all(Student *S,int b){
    cout<<"\nname of students "<<endl;
    for(int i=0;i<b;i++){
        cout<<"name of student"<<i+1<<" is : "<<S[i].name<<endl;
        cout<<"Age of student"<<i+1<<" is : "<<S[i].age<<endl;
        cout<<"Roll No of student"<<i+1<<" is : "<<S[i].roll_num<<endl;

    }

}
//main functions 
int main()
{
//  Student s1,s2,s3,s4,s5,s6,s7,s8,s9,s10;
 
 Student s[2];
 //for loop to initialize all variables
    for(int i = 0;i<2;i++){
        cout<<"enter age btween 11 and 14"; 
        cin>>s[i].age;
        if((s[i].age>=11)&&(s[i].age<=14))
        {cout<<"Age correctly enterd"<<endl;}
        cout<<"\nenter name:";
        cin>>s[i].name;
        cout<<"\nenter roll No :";
        cin>>s[i].roll_num;
    
    }
    //calling all functions 
    print_even(s,2);
    print_14(s,2);
    print_all(s,2);
    
 return 0;
}



















//  cin>>s2.age;
//  cin>>s2.name;
//  cin>>s2.roll_num;
//  cout<<"enter age btween 11 and 14";
 
//  cin>>s3.age;
//  cin>>s3.name;
//  cin>>s3.roll_num;
//  cout<<"enter age btween 11 and 14";
 
//  cin>>s4.age;
//  cin>>s4.name;
//  cin>>s4.roll_num;
//  cout<<"enter age btween 11 and 14";
 
//  cin>>s5.age;
//  cin>>s5.name;
//  cin>>s5.roll_num;
 
 
 
