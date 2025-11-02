//insertion of a new node like 35 before and after 30 in between 


#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    
    Node(int val){
    data=val;
    next=NULL;
    }
};

int main (){
    Node* temp=new Node(5);
    Node* temp1 =new Node(7);
    temp->next=temp1;
return 0;
}