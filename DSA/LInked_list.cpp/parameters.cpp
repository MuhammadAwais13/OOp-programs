#include <iostream>
using namespace std;
#include <string>
#define size 50
char arr[size];
int top = -1;

bool is_empty_1()
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
void push(char a)
{
    if (top == size - 1)
    {
        cout << "stack is full" << endl;
    }
    else
    {
        top++;
        arr[top] = a;
    }
}
void pop()
{
    if (is_empty_1())
    {
        cout << "array is empty" << endl;
    }
    else
    {
        top--;
    }
}
char top_find()
{
    if (is_empty_1())
    {
        cout << "array is empty" << endl;
    }
    else
    {
        return arr[top];
    }
}
bool is_balanced(string a)
{
    int n = a.length();
    for (int i = 0; i < n; i++)
    {
        /* code */
        char ch = a[i];
        if (ch == '(' || ch == '{' || ch == '[')
        {
            /* code */
            push(ch);
        }
        else if (ch == '}')
        {
            if (top_find() == '{')
            {
                pop();
            }
            /* code */
        }

        else if (ch == ')')
        {
            if (top_find() == '(')
            {
                pop();
            }
            /* code */
        }

        else if (ch == ']')
        {
            if (top_find() == '[')
            {
                pop();
            }
            /* code */
        }
        
    }
    if (is_empty_1())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string a = "{[()]}";
    if (is_balanced(a))
    {
        cout << "list is balanced" << endl;
    }
    else
    {
        cout << "not balanced" << endl;
    }
    return 0;
}