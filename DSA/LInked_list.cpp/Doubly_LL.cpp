#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
    
    // Constructor to initialize node
    Node(int data1) : data(data1), next(NULL), prev(NULL) {}
};

class LinkedList {
    private:
        Node* head;
        Node* tail;

    public:
        // Constructor to initialize an empty list
        LinkedList() {
            head = NULL;
            tail = NULL;
        }

        // Insert a node at the tail of the list
        void insert_at_tail(int d) {
            Node* temp = new Node(d);

            if (tail == NULL) {
                // Empty list, set both head and tail
                head = tail = temp;
            } else {
                tail->next = temp;
                temp->prev = tail;
                tail = temp;
            }
        }

        // Print the list and count nodes
        void print() {
            Node* temp = head;
            int count = 0;
            
            while (temp != NULL) {
                cout << temp->data << " ";
                temp = temp->next;
                count++;
            }
            cout << endl;
            cout << "Node count: " << count << endl;
        }

        // Get the number of nodes in the list
        int node_count() {
            Node* temp = head;
            int count = 0;
            
            while (temp != NULL) {
                count++;
                temp = temp->next;
            }
            return count;
        }
        void duplicate(){
            Node *temp=head;
            while(temp!=NULL){
                Node*cnt=temp;
                while(cnt->next!=NULL){
                    if (temp->data == cnt->next->data)
                    {
                        Node *store = cnt->next;
                        cnt->next = cnt->next->next;
                        if (cnt->next != NULL) {
                        cnt->next->prev=cnt;
                        }
                        delete store;
                    }
                    else
                    {
                        cnt = cnt->next;
                    }
                    }
                    temp=temp->next;
            }
            
        }
        void reverse_l_l(){
        Node*cnt=head;
        Node*fol=head;
        Node*prev=NULL;
        int check=0;
        tail=head;
        while(cnt!=NULL){
            if(check==0){
            fol=fol->next;
            cnt->next=prev;
            prev=cnt;
            cnt=fol;
            head=prev;
            check++;
            }
            else{
                fol=fol->next;
                cnt->next=prev;
                prev->prev=cnt;
                prev=cnt;
                cnt=fol;
                head=prev;
                check++;
                if(cnt==NULL){
                    prev->prev=NULL;
                }

            }
        }
    }
};

int main() {
    LinkedList list;

    // Inserting nodes at the tail
    list.insert_at_tail(12);
    list.insert_at_tail(12);
    list.insert_at_tail(14);
    list.insert_at_tail(14);
    list.insert_at_tail(16);
    list.insert_at_tail(16);
    list.insert_at_tail(18);

    // // Print the list
    list.print();
    // list.print_opp();
    // list.duplicate();
    // list.print();
    // list.print_opp();
    list.reverse_l_l();
    list.print();
    // Print the number of nodes
    cout << "Total nodes in the list: " << list.node_count() << endl;

    return 0;
}
