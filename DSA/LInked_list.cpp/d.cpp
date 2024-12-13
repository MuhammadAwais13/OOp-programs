#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;
    Node(int data1) : data(data1), next(NULL), prev(NULL) {}
};

void insert_at_head(Node* &head, int d) {
    Node* temp = new Node(d);

    if (head != NULL) {
        head->prev = temp;
    }
    temp->next = head;
    head = temp;
}

void insert_at_tail(Node* &head, Node* &tail, int d) {
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void add_at_any_position(Node* &head, Node* &tail, int d, int position) {
    if (position == 1) {
        insert_at_head(head, d);
        return;
    }

    Node* temp = head;
    int count = 1;
    while (count < position - 1 && temp != NULL) {
        temp = temp->next;
        count++;
    }

    if (temp == NULL || temp->next == NULL) {
        insert_at_tail(head, tail, d);
        return;
    }

    Node* temp2 = new Node(d);
    Node* third = temp->next;
    temp->next = temp2;
    temp2->prev = temp;
    temp2->next = third;
    if (third != NULL) {
        third->prev = temp2;
    }
}

// Function to remove duplicates from the doubly linked list
void deleting_rep_node_data(Node* &head) {
    if (head == NULL) return;
    //temp node to check duplicate data 
    Node* temp = head;
    while (temp != NULL && temp->next != NULL) {  // this statement will checkif i have reached end of my linked list 
        // this will check if current data and data after current is same if its same this block will be executed 
        if (temp->data == temp->next->data) {
            Node* duplicate = temp->next;
            temp->next = duplicate->next;

            if (duplicate->next != NULL) {
                duplicate->next->prev = temp;
            }
            delete duplicate;
        } 
        //if curr data is not equal to next data loop will go on
        else {
            temp = temp->next;
        }
    }
}

void print(Node* &head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* N1 = new Node(5);
    Node* head = N1;
    Node* tail = N1;

    insert_at_tail(head, tail, 10);
    insert_at_tail(head, tail, 10);
    insert_at_tail(head, tail, 15);
    insert_at_tail(head, tail, 20);
    
    cout << "Original list: ";
    print(head);

    // Removing  duplicates
    deleting_rep_node_data(head);

    cout << "List after removing duplicates: ";
    print(head);

    return 0;
}
