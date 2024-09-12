#include<iostream>
using namespace std;
#include<vector>
#include <stack>
class Product{
    public:
    string name;
    float price;
    int quantity;
    Product(string a,float b , int c):name(a),price(b),quantity(c){}
    virtual float T_price()=0;
    void get_data(string a,float b , int c){
        name=a;
        price=b;
        quantity=c;
    }
    // {
    //     cout<<" Name "<<name<<" price is : "<<price<<" Quantity is : "<<quantity<<endl;
    // }
};
class Electronics: public Product{
    public:
    Electronics(string a,float b , int c):Product(a,b,c){}
    float total_price;
    float T_price(){
        total_price=quantity*price;
        cout<<"total price is :"<<total_price<<endl;
        return total_price;

    }

} ;
class Cloathing: public Product{
    public:
    Cloathing(string a,float b , int c):Product(a,b,c){}
    float total_price2;
    float T_price(){
        float dis=quantity*price*0.1;
        total_price2=quantity*price-dis;
        return total_price2;
        

    }

} ;
class Customer{
    public:
    string name;
    string contact_num;
    string Loyality_level;
    Customer(string a,string b,string c):name(a),contact_num(b),Loyality_level(c){}
    void get_name(string a){
        name=a;    
    }
    void get_contact(string a){
        contact_num=a;
    }
    void get_loyality(string a){
        Loyality_level=a;
    }
    

};
class Billing{
    public:
    vector<Product*> cart;
    void add_product(Product* product){
        cart.push_back(product);
    }
    float cal_total_bill(){
        float T[2];
        float tot=0.0;
        vector<Product*>::iterator itr=cart.begin();
        for (itr=cart.begin(); itr!=cart.end(); itr++)
        {
            /* code */
            tot+=(*itr)->T_price();
        }
        
        return tot;
        
    }
    

};
int main()
{   
    // stack<Product*>cart;
    Cloathing C1("shiry",12,2);
    Electronics E1("car",122,3);
    Product* p1[2];
    Customer Cu("joe","20909888","Gold");
    Billing B1;
    p1[0]=&C1;
    p1[1]=&E1;

    for (int i = 0; i < 2; i++)
    {
        /* code */
        
        B1.add_product(p1[i]);
        
        

    }
    cout<<B1.cal_total_bill();
    
 return 0;
}