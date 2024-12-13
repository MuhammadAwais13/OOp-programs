#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next = NULL;
};
class Linked_list
{
    Node *head;
    Node *tail;

public:
    Linked_list()
    {
        head = NULL;
        tail = NULL;
    }
    void add_at_tail(int val)
    {
        if (head == NULL)
        {
            Node *newNode = new Node;
            newNode->data = val;
            newNode->next = newNode;
            head = newNode;
            tail=newNode;
            return;
        }
        Node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        Node *newNode = new Node;
        newNode->data = val;
        newNode->next = head;
        temp->next = newNode;
        tail=newNode;
    }
    void print()
    {
        Node *temp = head;
        do
        {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }
    int count_node()
    {
        Node *temp = head;
        int cnt = 0;
        do
        {
            cnt++;
            temp = temp->next;
        } while (temp != head);

        return cnt;
    }
    void add_at_pos(int pos, int val)
    {
        if (head == NULL)
        {
            return;
        }
        Node *temp = head;
        int nodes = count_node();
        Node *newNode = new Node;
        newNode->data = val;
        int cnt = 0;
        if (pos == 0)
        {
            while (temp->next != head)
            {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head;
            head = newNode;
            return;
        }
        while (cnt != pos - 1)
        {
            temp = temp->next;
            cnt++;
        }
        if (pos == nodes - 1)
        {
            newNode->next = head;
            temp->next = newNode;
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }
    void delete_node(int pos)
    {
        if (head == NULL)
        {
            return;
        }
        int nodes = count_node();
        Node *temp = head;
        int cnt = 0;
        Node *store;
        if (pos == 0)
        {
            while (temp->next != head)
            {
                temp = temp->next;
            }
            store = temp->next;
            temp->next = temp->next->next;
            head = temp->next;
            delete store;
            return;
        }
        while (cnt != pos - 1)
        {
            temp = temp->next;
            cnt++;
        }
        if (pos == nodes - 1)
        {
            store = temp->next;
            temp->next = temp->next->next;
            delete store;
            return;
        }
        store = temp->next;
        temp->next = temp->next->next;
        delete store;
    }
    void duplicate(){
        Node*temp =head;
        Node*temp2;
        Node*store;
        while(temp->next!=head){
            temp2=temp;
            while(temp2->next!=head){
                if(temp->data==temp2->next->data){
                    store=temp2->next;
                    temp2->next=temp2->next->next;
                    delete store;
                }
                else{
                temp2=temp2->next;
            }
            }
            temp=temp->next;
        }
    }
    void reverse_linked_list(){
        Node*prev=head;
        Node*current=head;
        Node*following=head;
        while(prev->next!=head){
            prev=prev->next;
        }
        do{
            following=following->next;
            current->next=prev;
            prev=current;
            current=following;
            
        }while(current!=head);
        head=prev;

    }
    void value_shift() {
    // Check if list is empty or has only one node
    if (!head || head == tail) return;

    Node *temp = head;

    // Traverse to find the node just before the tail (second-last node)
    while (temp->next != tail) {
        temp = temp->next;
    }

    tail=temp;
    head=temp->next;
    
   }

};

int main()
{
    Linked_list list;
    list.add_at_tail(1);
    list.add_at_tail(1);
    list.add_at_tail(3);
    list.add_at_tail(4);
    list.add_at_tail(5);
    list.print();
    // list.add_at_pos(0, 9);
    // list.print();
    // list.delete_node(0);
    // list.print();
    // cout << "\n"
    //      << list.count_node()<<endl;
    // list.duplicate();
    // list.print();
    // list.reverse_linked_list();
    // list.print();
    list.value_shift();
    list.print();
    return 0;
}