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
        cout << "Title is : " << title << " Page count is : " << pages << endl;
    }
};
class Ebook : public Book
{
public:
    int type;
    Ebook(string a, int b, int c) : Book(a, b), type(c) {}
    void display()
    {
        cout << "Title is : " << title << " Page count is : " << pages << " Type of book is : " << type << endl;
    }
};
class AudioBook : public Media
{
public:
    int duration;
    AudioBook(string a, int b) : Media(a), duration(b) {}
    void display()
    {
        cout << "Title is : " << title << " Duration of video is hr" << duration << endl;
    }
};

int main()
{
    Media *M1[3];
    Book B1("got", 200);
    Ebook E1("rings of power", 150, 124);
    AudioBook A1("Soprano ", 3);

    M1[0] = &B1;
    M1[1] = &E1;
    M1[2] = &A1;
    for (int i = 0; i < 3; i++)
    {
        /* code */
        M1[i]->display();
    }
    Book* B2=dynamic_cast<Book*>(M1[0]);
    Ebook* E2=dynamic_cast<Ebook*>(M1[1]);
    AudioBook* A2=dynamic_cast<AudioBook*>(M1[2]);
    B2->display();
    E2->display();
    A2->display();

    return 0;
}