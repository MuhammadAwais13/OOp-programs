#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data1) : data(data1), next(NULL) {}
};

void push(Node *&head, int d)
{
    Node *temp = new Node(d);

    temp->next = head;
    head = temp;
}
bool is_empty_1(Node *&head)
{
    if (head->next == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void pop(Node *&head)
{
    if (is_empty_1(head))
    {
        cout << "\nLinked list is empty";
    }
    else
    {
        head = head->next;
    }
}
void top(Node *&head)
{
    if (is_empty_1(head))
    {
        cout << "\nLinked list is empty";
    }
    else
    {
        cout << "\n"
             << head->data;
    }
}
void display(Node *&head)
{
    Node *temp;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}

int main()
{
    Node *N1 = new Node(5);
    Node *head = N1;
    is_empty_1(head);
    push(head, 10);
    push(head, 11);
    push(head, 12);
    push(head, 13);
    push(head, 14);
    display(head);
    // pop(head);
    // pop(head);
    // display(head);
    top(head);

    return 0;
}
