#include <iostream>
#include <string>

using namespace std;

#define MAX 100

int top = -1;
char stack[MAX];

void push(char c) {
    if (top >= MAX - 1) {
        cout << "Stack Overflow" << endl;
    } else {
        stack[++top] = c;
    }
}

char pop() {
    if (top < 0) {
        cout << "Stack Underflow" << endl;
        return '\0';
    } else {
        return stack[top--];
    }
}

bool isEmpty() {
    return top == -1;
}

bool isBalanced(string statement) {
    for (int i = 0; i < statement.length(); i++) {
        char ch = statement[i];

        if (ch == '(' || ch == '{' || ch == '[') {
            push(ch);
        } else if (ch == ')' || ch == '}' || ch == ']') {
            char topChar = pop();

            if ((ch == ')' && topChar != '(') ||
                (ch == '}' && topChar != '{') ||
                (ch == ']' && topChar != '[')) {
                return false;
            }
        }
    }

    return isEmpty();
}

int main() {
    string statement = "(a + b * c) / [(a - b) ^ c]";

    if (isBalanced(statement)) {
        cout<<statement << " ---> The statement is balanced." << endl;
    } else {
        cout<<statement << " ---> The statement is NOT balanced." << endl;
    }

    return 0;
}
