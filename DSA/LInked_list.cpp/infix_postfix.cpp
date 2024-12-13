#include<iostream>
using namespace std;
#define size 5
int arr[size];
int top=-1;

bool isEmpty(){
    if(top==-1){
        return true ;

    }
    else {
        return false;
    }
}
bool isFuLL(){
    if(top==size-1){
        return true;
    }
    else {
        return false;
    }
}
char push(char val){
    if(isFuLL()){
        cout<<"cant push more"<<endl;
    }
    else{
        top++;
        arr[top]=val;
    }
}
void pop(){
    if (isEmpty())
    {
        /* code */
        cout<<"linked list is empty "<<endl;
    }
    else{
        top--;
    }
}
char top_find(){
    return arr[top];
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
    if (isEmpty())
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool is_var(char c){
    return (c>=0&&c<=9)||(c>='a'&&c<='z')||(c>='A'&&c<='Z');
}
int precendence(char c){
    if (c == '+'||c == '-')
    {
        /* code */return 1;
    }
    if (c == '*')
    {
        /* code */return 2;
    }
    
    if (c == '^')
    {
        /* code */return 3;
    }
    
}
bool operators(char c){
    return c=='+'||c=='-'||c=='*'||c=='^';
}
string post_fix(string a){
    string postfix="";
    int sizee=a.length();
    char ch;
    for (int i = 0; i < sizee; i++)
    {
        /* code */
        ch=a[i];
        if (is_var(ch))
        {
            /* code */
            postfix+=ch;
        }
        else if(ch=='(')
        {
            /* code */
            push(ch);
        }
        else if(ch==')'){
            while(!isEmpty()&&top_find()!='('){
                postfix+=top_find();
                pop();
            }
            pop();
        }
        else if (operators(ch)){
            while (!isEmpty()&&precendence(ch)>precendence(top_find()))
            {
                /* code */
                postfix+=top_find();
                pop();
            }
            push(ch);
            
        }
        
        
        
    }
    while (!isEmpty())
        {
            /* code */
            postfix+=top_find();
            pop();
        }
    return postfix;    
    
}


int main()
{string a = "{[()]}";
    if (is_balanced(a))
    {
        cout << "list is balanced" << endl;
    }
    else
    {
        cout << "not balanced" << endl;
    }
    string b="(a+b)^(a-b+c)*d^(e-f)";
    cout<<" --> "<<post_fix(b);
    return 0;
    }