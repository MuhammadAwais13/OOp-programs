






#include<iostream>
using namespace std;

class Book{
    public:
    string name;
    int page_count;
    Book(string a,int b):name(a),page_count(b){}
    void show(){
        cout<<"name is "<<name<<endl;
        cout<<"pages no = "<<page_count<<endl;
    }
    bool operator==(const Book &a){
        if((name==a.name)&&(page_count==a.page_count)){
            return true;
        }
        return false;
    }
};
class Ebook : public Book{
    public:
    int file_size;
    Ebook(string a,int b,int c):Book(a,b),file_size(c){}
    void show(){
        cout<<"name is "<<name<<endl;
        cout<<"pages no = "<<page_count<<endl;
        cout<<"file size is "<<file_size<<endl;
    }
};
int main()
{
    Book B1("new book",200),B2("new bookss",2150);
    Ebook E1("new ebook",300,124);
    E1.show();
    if(B1==B2){
        cout<<"SAme books"<<endl;
    }
    else 
    {
        cout<<"not equal books"<<endl;
    }
    B1.show();
    B2.show();

 return 0;
}