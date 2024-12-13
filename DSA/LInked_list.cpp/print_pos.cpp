//this code tells us how to print a linked lisrt and hown to add va;ue is ;inlke d ;ist in tail and in starting 
// after  thism we will se how to add a vale in ll in any posuition given 



#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int a ):data(a),next(NULL){}
};
// void Add_node(Node* & head, int value){
//     Node* teamp= new Node(value);
//     head->next=teamp;
//     head=teamp;
// }
void Add_node_tail(Node* & tail, int value){
    Node* teamp= new Node(value);
    tail->next=teamp;
    tail=teamp;
}
void print(Node* &head){
    Node*temp=head;
     cout<<" "<<temp->data;
    while(temp->next!=NULL){
        cout<<" "<<temp->data;
        temp=temp->next;
    }
    cout<<endl;
}
int length(Node* &head){
    Node*temp=head;
    int cnt=1;
    while(temp->next!=NULL){
        cnt++;
        // cout<<"hahahahah"<<endl;
        temp=temp->next;
    }
    return cnt;
}
void display_position(Node* &head,int pos){
    Node*temp=head;
    int size=length(temp);
    if(pos>size){
        cout<<"data is invalid"<<endl;
        return;
    }
    // if(pos==1){
    //     cout<<temp->data<<endl;
    // }
    int cnt=1;
    while(cnt!=pos){
        temp=temp->next;
        cnt++;
    }
    if(cnt==pos){
        cout<<temp->data;
    }

}
int main()
{
    Node* n1= new Node(10);
    Node* head;
    head=n1;
    Node* tail=n1;
    // // print(head);
    // Add_node(head,30);
    // // print(head);
    // Add_node(head,40);
    // // print(head);
    // Add_node(head,50);
    // // print(head);
    // Add_node(head,60);
    // // print(head);
    // Add_node(head,70);
    // print(head);
    //  // print(head);
    Add_node_tail(tail,30);
    // print(head);
    Add_node_tail(tail,40);
    // print(head);
    Add_node_tail(tail,50);
    // print(head);
    Add_node_tail(tail,60);
    // print(head);
    Add_node_tail(tail,70);
    print(head  );
    display_position(head,1);
    //trhis is how   
    

 return 0;
}