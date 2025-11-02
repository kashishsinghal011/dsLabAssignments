#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int val){
    this->data=val;
    this->next=NULL;
    }
};

void print(Node *head){
    Node *temp=head;
    while(temp!=NULL){
    cout<<temp->data<<"->";
    temp=temp->next;
    }
}

int main (){
//1->2->1->2->1->3->1
Node *head=new Node(1);
Node *temp=head;
temp->next=new Node(2);
temp->next->next=new Node(3);
temp->next->next->next=new Node(4);
temp->next->next->next->next=new Node(5);
temp->next->next->next->next->next=new Node(6);
temp->next->next->next->next->next->next=new Node(7);

//1->2->3->4->5->6->7->8

int count=0;
Node*curr=head;

Node *slow=head;
Node *fast=head;
while(curr!=NULL){
count++;
curr=curr->next;
}
while(fast!=NULL&& fast->next!=NULL){
    slow=slow->next;
    fast=fast->next->next;
}
if(count%2==0){
    cout<<"There are two middle values";
    cout<<slow->data;
    cout<<slow->next->data;
}
if(count%2!=0){
    cout<<"There is only one middle value";
    cout<<slow->data;
}



return 0;
}