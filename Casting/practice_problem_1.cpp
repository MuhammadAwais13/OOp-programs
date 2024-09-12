#include <iostream>
using namespace std;
class Media
{
public:
    string title;
    Media(string a) : title(a) {}
    virtual void display() = 0;
};
class Book : public Media
{
public:
    int pages;
    Book(string a, int b) : Media(a), pages(b) {}
    void display()
    {
        cout << "\n\nTitle is : " << title << " \nPage count is : " << pages << endl;
    }
};
class Ebook : public Book
{
public:
    int type;
    Ebook(string a, int b, int c) : Book(a, b), type(c) {}
    void display()
    {
        cout << "\n\nTitle is : " << title << " \nPage count is : " << pages << " \nType of book is : " << type << endl;
    }
};
class AudioBook : public Media
{
public:
    int duration;
    AudioBook(string a, int b) : Media(a), duration(b) {}
    void display()
    {
        cout << "\n\nTitle is : " << title << " \nDuration of video is hr" << duration << endl;
    }
};

int main()
{
   cout<<"\n\n\t\tFirst by using static cast\n\n";
   Media* M[3];
   M[0]=new Book("game of thrones",120);
   M[1]=new Ebook("lord of the rings",320,720);
   M[2]=new AudioBook("The kite runner ",3);

   Book* B=static_cast<Book*>(M[0]);
   Ebook* E=static_cast<Ebook*>(M[1]);
   AudioBook* A=static_cast<AudioBook*>(M[2]);
   cout<<"\n\n\t\tnow displaying after static cast\n\n";
    B->display();
    E->display();
    A->display();


    cout<<"\n\n\t\tsecond by using dynamic cast\n\n";
   //Media* M1[3];
   M[0]=new Book("game of thrones",120);
   M[1]=new Ebook("lord of the rings",320,720);
   M[2]=new AudioBook("The kite runner ",3);

   Book* B1=dynamic_cast<Book*>(M[0]);
   Ebook* E1=dynamic_cast<Ebook*>(M[1]);
   AudioBook* A1=dynamic_cast<AudioBook*>(M[2]);
   cout<<"\n\n\t\tnow displaying after dynamic cast\n\n";
   if (B1!=nullptr)
   {
    /* code */
    B1->display();
   }
   else {
    cout<<"\n\ncasting not right\n "; 
   }
    if (E1!=nullptr)
   {
    /* code */
    E1->display();
   }
   else {
    cout<<"\n\ncasting not right\n "; 
   }
   if (E1!=nullptr)
   {
    /* code */
    A1->display();
   }
   else {
    cout<<"\n\ncasting not right\n "; 
   }
   
    
    




    return 0;
}