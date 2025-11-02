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

print(head);

Node*  prev=NULL;
Node* curr=head;
Node* fut=NULL;

while(curr!=NULL){
    fut=curr->next;
    curr->next=prev;
    prev=curr;
    curr=fut;
}
//upadting the last 
// head=prev;
//after reversing the string 
cout<<"After reversing the linked list ";
cout<<endl;

print(prev);



return 0;
}