#include <iostream>
using namespace std;
#define size 5
char arr[5];
int top = -1;

bool is_empty1()
{
    if (top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void push(char val)
{
    if (top == size - 1)
    {
        cout << "\narray is full";
    }
    else
    {
        top++;
        arr[top] = val;
    }
}
void pop()
{
    if (is_empty1())
    {
        cout << "\narray is empry";
    }
    else
    {
        top--;
    }
}
void show_top()
{
    if (is_empty1())
    {
        cout << "array is empty" << endl;
    }
    else
    {
        cout << "top value is " << arr[top] << "\n";
    }
}
void display()
{
    if (is_empty1())
    {
        cout << "array is empty" << endl;
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            /* code */
            cout << arr[i] << " ";
        }
    }
}
int main()
{
    string a = "HELLOHELLO";
    char array[10];
    for (int i = 0; i < 5; i++)
    {
        /* code */
        array[i] = a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        /* code */
        push(array[i]);
    }
    display();
    show_top();
    pop();
    display();

    return 0;
}