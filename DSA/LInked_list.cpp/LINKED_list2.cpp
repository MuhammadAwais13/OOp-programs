// This is a program explaining singly Linked lsit

//--> Inthis we are trying to insert at different locations at middle at start and at end

//--> For input at start we are making a node and then making it head of our L.L
//-->Then we send this to our func as adress and then add noe there

#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int dat) : data(dat), next(NULL) {}
};
void Insert_at_tail(Node *&Tail, int value)
{ // now to add value at end we make a tail which will always point to end value
    Node *temp = new Node(value);
    Tail->next = temp; // it is opposite of head as we are saying tail next is temp not temp nex is tail this will add values at end is
    Tail = temp;
}
void insert(Node *&head, int value)
{                                 // this insert vaalue at head
    Node *temp = new Node(value); // we create a temp node assigning it the new value then we link it to the first node by pointing its next to new node
    temp->next = head;            // now temp is pointing to node created in int main and it is before the N1 of main so we have to change head to temp means making it new head
    head = temp;                  // now head is temp ---> the head of main is also changed here as head came here as an adress
}
void priint(Node *Head)
{
    Node *temp = Head;
    while (temp != NULL)
    {
        /* code */
        cout << " " << temp->data;
        temp = temp->next;
    }
    cout << endl;
}

int Node_amount(Node *Head)
{
    Node *temp = Head;
    int cnt = 0;
    while (temp != NULL)
    {
        /* code */
        // cout << " " << temp->data;
        cnt++;
        temp = temp->next;
    }
    return cnt;
}
void insert_at_position(Node *&Head, Node *&TAil, int pos, int value)
{
    Node *temp = Head;
    int count = 1;
    if (pos == 1)
    { // if we want to add value in head we directly add by calling it
        insert(Head, value);
    }
    while (count <= pos - 1) ////first we traverse whole l.l if we want to add it in middle
    {
        temp = temp->next;
        count++;
    }
    if (TAil == NULL)
    { // if we to add at tail we simply call it as using bealow method wecannot update tail and head
        Insert_at_tail(TAil, value);
    }
    Node *middleNode = new Node(value); // we create a middle node
    middleNode->next = temp->next;      // middle node will point to the adress which is being pointed by temp next(temp next is node just before given position means if we want to add at position 3 temp is 2nd pos node)
    temp->next = middleNode;            // as now middle node is pointing to the thing which was being pointed by temp so now temp will point to middle node
}
void del_node(Node *&head, Node *&Tail, int pos)
{
    Node *temp = head;
    int cnt = 1;
    if (pos == 1)
    {
        temp = temp->next;
        head = temp;
        // head=head->next;           we can use thisd line also instead of first two line s
        return;
    }
    while (cnt != pos - 1)
    {
        temp = temp->next;
        cnt++;
    }
    int num = Node_amount(head);
    if (cnt == num - 1)
    {
        cout << "total number of nodes are" << num << endl;
        temp->next = temp->next->next;
        Tail = temp;
        return;
    }
    temp->next = temp->next->next;
}
void duplicate(Node* &head){
    Node* temp=head;
    Node* check;
    while(temp!=NULL){
        check=temp;
        while(check->next!=NULL){
           if (temp->data==check->next->data)
           {
            /* code */
            cout<<"duplicate data found "<<check->next->data<<endl;
            Node*DUplicate_node=check->next;
            check->next=check->next->next;
            delete DUplicate_node;
           }
           else{
            check=check->next;
           }
        }
        temp=temp->next;
    }
}
// void duplicate(Node* &head) {
//     Node* temp = head;      // Outer loop to go through each node
//     Node* check;            // Inner loop to check for duplicates

//     while (temp != NULL) {
//         check = temp;       // Start checking from the current 'temp'

//         // Inner loop checks nodes after 'temp' to find duplicates
//         while (check->next != NULL) {
//             if (temp->data == check->next->data) {
//                 // Duplicate found, delete the duplicate node
//                 cout << "Duplicate data found: " << check->next->data << endl;
//                 Node* duplicateNode = check->next;   // Store duplicate node
//                 check->next = check->next->next;     // Skip the duplicate node
//                 delete duplicateNode;                // Free memory
//             } else {
//                 check = check->next;  // Move to the next node if no duplicate
//             }
//         }

//         temp = temp->next;  // Move to the next node in the outer loop
//     }
// }
void del_after_pos(Node*&head,int pos){
    Node*temp=head;
    int cnt =1;
    while((temp->next!=NULL)){
        if (cnt==pos){
            Node*del_node=temp->next;
            temp->next=temp->next->next;
            delete del_node;
            cnt=0;
        }
        cnt++;
        temp=temp->next;
    }
}
// void del_after_pos(Node*& head, int pos) {
//     if (head == nullptr) {
//         return; // If the list is empty
//     }

//     Node* temp = head;
//     int cnt = 1;

//     while (temp != nullptr && temp->next != nullptr) {
//         if (cnt == pos) {
//             Node* del_node = temp->next;    // Node to be deleted
//             temp->next = temp->next->next;  // Bypass the node
//             delete del_node;                // Free the memory
//             cnt = 0;                        // Reset cnt to 0 for repeated deletion
//         }
//         cnt++;
//         temp = temp->next;
//     }
// }

int main()

{
    Node *N1 = new Node(10);
    Node *Head = N1;
    Node *Tail = N1;
    Insert_at_tail(Tail, 11);
    Insert_at_tail(Tail, 12);
    Insert_at_tail(Tail, 11);
    Insert_at_tail(Tail, 11);
    Insert_at_tail(Tail, 11);
    Insert_at_tail(Tail, 11);
    Insert_at_tail(Tail, 14);
    
    priint(Head);
    // duplicate(Head);
    // insert(Head,12);
    // insert(Head,13);
    // insert(Head,14);
    //priint(Head);
    // insert_at_position(Head,Tail,4,123);

    // del_node(Head, Tail, 1);
    // priint(Head);
    del_after_pos(Head,2);
    priint(Head);

    return 0;
}