




#include <iostream>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }

    // Function to insert a node at the tail of the list
    void insertAtTail(Node*& head, int value) {
        Node* newNode = new Node(value);

        if (head == NULL) {        //if head is empty it will initialize new value to head
            head = newNode;
            return;
        }

        Node* temp = head;            //if head is not empty it will check whole list
        while (temp->next != NULL) {
            temp = temp->next;           //we will give temp next adrees of new node
        }

        temp->next = newNode;
    }

    // Function to delete a node with a given value
    void deleteNode(Node*& head, int value) {
        if (head == NULL){ return;}        

        // If the head node is the one to be deleted
        if (head->data == value) {     //if head is the thing we want to delete it will simply delete it and create second adress as the new head 
            Node* temp = head;
            head = head->next;
            delete temp;   //deleting head 
            return;
        }

        Node* current = head;    //if the value is in btween nodes we will 
        while (current->next != NULL && current->next->data != value) {   //these both will become true if value is found 
            current = current->next;
        }

        if (current->next != NULL) {  
            Node* temp = current->next;
            current->next = current->next->next;
            delete temp;
        }
    }

    // Function to display the list
    void displayList(Node* head) {
        Node* temp = head;//first initialize temp with head      
        while (temp != NULL) {//check if temp is empty or head is the only data
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

    cout << "Before deletion: ";
    node.displayList(head);

    // Deleting a node
    node.deleteNode(head, 20);

    cout << "After deletion: ";
    node.displayList(head);

    return 0;
}