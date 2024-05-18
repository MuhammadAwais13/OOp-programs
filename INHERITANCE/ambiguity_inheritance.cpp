#include<iostream>
using namespace std;
class base{
public:
  void Same_name(){
    cout<<"from base class "<<endl;
  }
};
class base2{
    public:
    void Same_name(){                //base 1 and base hase same function name 
        cout<<"from base 2 : "<<endl;
    }
};
class derived : public base, public base2{  // thiis derive is inheriting both classes
                                            //base 1 and base 2 
    public :
    int a;
};
// class derived : public base, public base2{  
                                            
//     public :
//     int a;
//     void Same_name(){                  now this function is solving ambiguity ....> as this same name is called in main and inside this base:: same_name tells that when same name is called using 
//         base::Same_name();             derived it will call same name of base using this syntax to solve ambiguity
//     }
// };
int main()
{
    derived D1;
    D1.Same_name();     // now this will give error as D1 hase two parent classe with same
                        // func name so it now has ambiguity about which function we are trying to call
                        // to solve this we do proidure given on line 20
 return 0;
}