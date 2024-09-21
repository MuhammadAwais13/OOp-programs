#include <iostream>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* next;

    Node(int val) {      //initializing node data values
        data = val;
        next = NULL;    //initially next is null 
    }

    // Function to insert a node at the tail of the list
    void insertAtTail(Node*& head, int value) {
        Node* newNode = new Node(value);

        if (head == NULL) {       //if head is empty it will initialize new value to head
            head = newNode;
            return;
        }

        Node* temp = head;             //if head is not empty it will check whole list
        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode; //we will give temp next adrees of new node
    }

    // Function to display the list
    void displayList(Node* head) {        
        Node* temp = head;          //first initialize temp with head 
        while (temp != NULL) {        //check if temp is empty or head is the only data
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "null" << endl;
    }
};

int main() {
    Node* head = NULL;

    Node node(0);  // Temporary object to use member functions

    // Inserting nodes at the tail
    node.insertAtTail(head, 10);
    node.insertAtTail(head, 20);
    node.insertAtTail(head, 30);

    // Displaying the list
    node.displayList(head);

    return 0;
}