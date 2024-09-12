//================================================

//COMBINATIONS TEMPLATES 

//================================================


//inside constructors

//_____________________________________

//yes we can use

// #include <iostream>
// using namespace std;
// template <class T, class J>
// class Student
// {
// private:
    

// public:
//     T age;
//     static J price;
//     Student(T a, J b) : age(a), price(b) {}
//     // friend T display()
//     // {
//     //     cout << age;
//     //     return age;
//     // }
// };
// template<class B,class A>  //if we want to inherit a template class we have to make derived class template also
// class stu : public Student<B,A>{ //then give those data types to base class templates
//     public: 
//     stu(B a,A b):Student< B, A>(a,b){}   //if we are calling template base class we also have to give its data types  
//     void Disp(){
//         cout<<"display"<<this->age;      //to use variables from template base class we have to use this pointer
//     }

// };
// int main()
// {
//     Student<int,float> S1(23,1300);
//     stu<int , float> A1(1212,12.2);
//     A1.Disp();
//     //display();
//     return 0;
// }


//concept of overriding and abstract classes are same just we have to know how to do inheritance in templates 


//============================================

//static variables

//============================================

//yes we can use templates with static variable


// #include <iostream>
// using namespace std;
// template <class T, class J>
// class Student
// {
// private:
    

// public:
//     T age;
//     static J price;  // we can make static template variables 
//     //Student(T a, J b) : age(a), price(b) {}
    
// };
// template<class C, class S>  //to use any thing oytside a template class meaning defining outside class we have to again make template no matter what Words we use but syntax should be according to its class
//                             //we have to again and again tell it that it come from a template class
// S Student<C,S>::price=10.2;         //where ever we will type student we have to define its temlate variable
// template<class B,class A>  
// class stu : public Student<B,A>{ 
//        public: 
//     //stu(B a,A b):Student< B, A>(a,b){} 
//     stu(){}  
//        void Disp(){
//         cout<<"display"<<this->price;     
//          }

// };
// int main()
// {
//     //Student<int,float> S1(23,1300);
//     stu<int , float> A1;
//     A1.Disp();
//     //display();
//     return 0;
// }


//========================================

//const with templates

//==========================================

//yes we can use 

// #include <iostream>
// using namespace std;
// template <class T, class J>
// class Student
// {
// private:
    

// public:
//     T age;
//     const J price=10.2312123;   
// };
     
// template<class B,class A>  
// class stu : public Student<B,A>{ 
//        public: 
//        stu(){}  
//        void Disp(){
//         cout<<"display"<<this->price;     
//          }

// };
// int main()
// {
//     stu<int , float> A1;
//     A1.Disp();
//     return 0;
// }
