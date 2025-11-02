// Develop a menu driven program demonstrating the following operations
// on simple Queues: enqueue(), dequeue(), isEmpty(), isFull(), display(),
// and peek().
#include<iostream>
using namespace std;
class queue{
    public:
    int front;
    int rear;
    int size;
    int *arr;
    //initailing with 
    queue (int s){
        front=-1;
        rear=-1;
        size=s;
        arr[size];
    }
    bool isEmpty(){
        if(front==-1 && rear==-1){
            return true ;
        }
        return false;
    }
    bool isFull(){
        if(rear==size-1){
        return true;
        }
        return false;
    }
    void enqueue(int k){
        if(isFull()){
            cout<<"This is full completely";
        }
        if(isEmpty()){
            front=0;
            rear=0;
        }
        else{
            rear++;
        }
        arr[rear]=k;
    }
    void dequeue(){
    if(isEmpty()){
        cout<<"this is empty";
    }
    else{
        front++;
        int s=arr[front];
    }
    }
    void display(){
        if(isEmpty()){
            cout<<"this is empty";
        }
        else{
            for(int i=front;i<=rear;i++){
            cout<<arr[i];
            }
        }
    }
    void peek(){
        if(isEmpty()){
            cout<<"queue is empty";
            return ;
        }
        cout<<arr[front]<<endl;
    }

};

int main (){



    return 0;
}