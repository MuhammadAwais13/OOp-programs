#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int a ):data(a),next(NULL){}
};
void Add_node(Node* & head, int value){
    Node* teamp= new Node(value);
    head->next=teamp;
}
int main()
{
    Node* n1= new Node(10);
    Node* head;
    head=n1;

 return 0;
}