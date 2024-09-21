#include <iostream>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* next;

    Node(int val) {       //initializing node data values
        data = val;
        next = NULL;//initially next is null 
    }

    // Function to insert a node at the tail of the list
    void insertAtTail(Node*& head, int value) {
        Node* newNode = new Node(value);

        if (head == NULL) { //if head is empty it will initialize new value to head
            head = newNode;
            return;
        }

        Node* temp = head;               //if head is not empty it will check whole list
        while (temp->next != NULL) {
            temp = temp->next;                     //we will give temp next adrees of new node
        }

        temp->next = newNode;
    }

    // Function to count the number of nodes in the list
    int countNodes(Node* head) {
        int count = 0;
        Node* temp = head;
        while (temp != NULL) {           //moving through the nodes unless null ptr is encounter
            count++;
            temp = temp->next;
        }
        return count;
    }
};

int main() {
    Node* head = NULL;

    Node node(0);  // Temporary object to use member functions

    // Inserting nodes
    node.insertAtTail(head, 10);
    node.insertAtTail(head, 20);
    node.insertAtTail(head, 30);

    // Counting nodes
    cout << "Number of nodes: " << node.countNodes(head) << endl;

    return 0;
}