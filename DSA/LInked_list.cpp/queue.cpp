#include <iostream>
using namespace std;
#define size 6
int Q_array[size];
int front = -1;
int rear = -1;

bool is_empty_1()
{
    if(front ==-1&&rear==-1){
        return true;
    }
    else{
        return false;
    }
}
bool is_full(){
    if((rear+1)%size==front){
        return true;
    }
    else{
        return false;
    }
}

void enqueue(int val)
{
    if (is_full())
    {
        return;
    }
    else
    {
        if (front == -1&&rear==-1)
            front = rear=0;

        else{
            rear=(rear+1)%size;
        }
        Q_array[rear]=val;

     }
}
void dequeue()
{
    if (is_empty_1())
    {
        cout << "empty";
    }
    else
    {   
        if(rear==front)front =rear=-1;
        else{
            cout<<" "<<Q_array[front];
            front=(front+1)%size;
        }
    }
}

int main()
{
    enqueue(10);
    enqueue(11);
    enqueue(12);
    enqueue(13);
    enqueue(14);
    enqueue(15);
    enqueue(16);
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    for (int i = 0; i < 6; i++)
    {
        /* code */
        cout<<Q_array[6];
    }
    
    return 0;
}