// constructors
#include <iostream>
using namespace std;
class Student
{
public:
    int Reg;
    int marks;
    Student(int a, int b) : Reg(a), marks(b) {}
    Student() {}
    Student(const Student &S1)
    {
        this->marks = S1.marks;
        this->Reg = S1.Reg;
    }
    void Show()
    {
        cout << "reg of student is " << Reg << "\n marks of stdent is " << marks << endl;
    }
};
int main()
{
    Student S1(2023388, 1223), S3;
    S3 = S1; // this calls assignment operator as assignme nt aoperator is not created in this so it will make a default operator of assignment and copies content of all
    S3.Show();
    Student S2 = S1;  // here assignment operator is not called bit copy constructor is called 
    S2.Show();
    return 0;
}