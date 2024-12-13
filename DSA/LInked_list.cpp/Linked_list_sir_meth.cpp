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
    void add_tail(int val)
    {
        Node *temp = new Node;
        temp->data = val;
        if (head == NULL)
        {
            head = temp;
            tail = temp;
            return;
        }
        tail->next = temp;
        tail = temp;
    }
    void print()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    int node_amnt()
    {
        Node *temp = head;
        int cnt = 0;
        while (temp != NULL)
        {
            temp = temp->next;
            cnt++;
        }
        return cnt;
    }
    void insert_at_head(int val)
    {
        Node *temp = new Node;
        temp->data = val;
        temp->next = head;
        head = temp;
    }

    void insert_at_pos(int val, int pos)
    {
        int num = node_amnt();
        if (pos == 0)
        {
            insert_at_head(val);
            return;
        }
        if (pos == num - 1)
        {
            add_tail(val);
            return;
        }
        if (pos >= num - 1)
        {
            cout << "max num reached " << endl;
        }

        Node *newtemp = new Node;
        newtemp->data = val;
        Node *temp = head;
        int cnt = 0;
        while (cnt != pos - 1)
        {
            temp = temp->next;
            cnt++;
        }
        newtemp->next = temp->next;
        temp->next = newtemp;
    }
    void del(int pos)
    {
        Node *temp = head;
        Node *store;

        int cnt = 0;
        if (pos == 0)
        {
            store = temp;
            temp = temp->next;
            head = temp;
            delete store;
            return;
        }
        while (cnt != pos - 1)
        {
            temp = temp->next;
            cnt++;
        }

        if (pos == (node_amnt()) - 1)
        {
            store = temp->next;
            temp->next = temp->next->next;
            tail = temp;
            delete temp->next;
            return;
        }
        store = temp->next;
        temp->next = temp->next->next;
        // delete store;
    }
    void duplicate()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            Node *check = temp;
            while (check->next != NULL)
            {
                if (temp->data == check->next->data)
                {
                    Node *Duplicate;
                    Duplicate = check->next;
                    check->next = check->next->next;
                    delete Duplicate;
                }
                else
                {
                    check = check->next;
                }
            }
            temp = temp->next;
        }
    }
    void reverse_l_l()
    {
        Node *prev = NULL;
        Node *current = head;
        Node *following = head;
        while (current != NULL)
        {
            following = following->next;
            current->next = prev;
            prev = current;
            current = following;
        }
        head = prev;
    }
    void bubble_sort()
    {
        int num = node_amnt();
        for (int i = 0; i < num - 1; i++)
        {
            /* code */
            Node *prev = NULL;
            Node *crr = head;
            Node *foll;
            while (crr != NULL && crr->next != NULL)
            {
                /* code */
                if (crr->data > crr->next->data)
                {
                    /* code */
                    if (prev == NULL)
                    {
                        /* code */
                        foll = crr->next;
                        crr->next = foll->next;
                        foll->next = crr;
                        head = foll;
                        prev = foll;
                    }
                    else
                    {
                        foll = crr->next;
                        crr->next = foll->next;
                        foll->next = crr;
                        prev->next = foll;
                        prev = foll;
                    }
                }
                else
                {
                    prev = crr;
                    crr = crr->next;
                }
            }
        }
    }
};

int main()
{
    Linked_list List1;
    List1.add_tail(7);
    List1.add_tail(12);
    List1.add_tail(11);
    List1.add_tail(12);
    List1.add_tail(9);
    List1.add_tail(70);
    List1.add_tail(9);
    List1.add_tail(13);
    List1.print();
    // int amnt = List1.node_amnt();
    // cout << "NODE amount is " << amnt << endl;
    // // List1.insert_at_pos(13, 2);
    // // List1.print();
    // // List1.insert_at_head(7);
    // // List1.insert_at_head(9);
    // // List1.insert_at_head(9);
    // List1.insert_at_pos(13, 6);
    // List1.print();
    // List1.print();
    // List1.del(3);
    // List1.print();
    // List1.duplicate();
    // List1.print();
    List1.reverse_l_l();
    List1.print();
    List1.bubble_sort();
    List1.print();
    return 0;
}