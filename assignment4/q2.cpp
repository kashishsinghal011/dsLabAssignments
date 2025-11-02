// Develop a menu driven program demonstrating the following operations
// on Circular Queues: enqueue(), dequeue(), isEmpty(), isFull(), display(),
// and peek().

#include<iostream>
using namespace std;
class queue{
    public:
    int front;
    int rear;
    int size;
    int *arr;

    queue (int s){
        front=0;
        rear=0;
        size=s;
        arr[size];
    }

    bool IsEmpty(){
    if(front==rear){
        return true;
    }
    else{
        return false;
    }
    }

    bool IsFull(){
        if(front==(rear+1)%size){
            return true;
        }
    return false;
    }

    void enqueue(int k){
        if(IsFull()){
        cout<<"Queue is full";
        }
        else{
        arr[rear]=k;
        rear++;
        }
    }

    void dequeue(){
        if(IsEmpty()){
        cout<<"this is dequeue";
        }
        else{
            int k=arr[front];
        }
    }

    void display(){
    if(IsEmpty()){
        return;
    }
    for(int i=front;i<=rear;i++){
        cout<<arr[i]<<endl;
    }
    }
};

int main (){





    return 0;
}



























