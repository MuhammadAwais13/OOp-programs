//COMBINATIONS for VIRTUAL functions

//========================================




//virtual with constructors 

// no i cannot use virtual with constructors 

//



// #include<iostream>
// using namespace std;
// class base_class{
//     public:
//  int B_value;
//  base_class(int a):B_value(a){}
//  virtual void display()  
//  {
//     cout<<"calling from base class "<<endl;
//  }
// };
// class Derived : public base_class{
//     public:
//  int D_value;
//  void display(){          
//     cout<<"calling from derived class : "<<endl;
//  }
// };
// int main()
// {
//     base_class* Pointer_base;       
//     Derived D1;
//     Pointer_base = & D1;           
                                     
//     Pointer_base->display();        
//     return 0;
// }




//=========================================

//friend functions

//=========================================

//virtual functions cannot be friends 

// #include<iostream>
// using namespace std;
// class base_class{
//     public:
//  int B_value;
//  virtual friend void disp();
//  virtual void display()  
//  {
//     cout<<"calling from base class "<<endl;
//  }
// };
// void disp(){
//     cout<<"void disp called virtal friend "<<endl;
// }
// class Derived : public base_class{
//     public:
//  int D_value;
//  virtual friend void disp();
//  void display(){          
//     cout<<"calling from derived class : "<<endl;
//  }
// };
// int main()
// {
//     base_class* Pointer_base;       
//     Derived D1;
//     Pointer_base = & D1;  
//     disp();         
                                     
//     Pointer_base->display();        
//     return 0;
// }