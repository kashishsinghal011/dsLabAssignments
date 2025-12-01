// Given a Circular linked list. The task is split into two Circular Linked lists. If there are an odd number of
// nodes in the given circular linked list then out of the resulting two halved lists, the first 
// list should have one node more than the second list. 
// Input:  10->4->9 
// Output: 10->4 , 9 
#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int data){
    val=data;
    next=NULL;
    }
};
int main (){
//making a circular linked list
Node* head=new Node(4);
head->next=new Node(3);
head->next->next=new Node(6);
head->next->next->next=new Node(9);
head->next->next->next=head;
Node* temp=head->next;
Node* middle=head;
while(temp->next!=head){
    middle=middle->next;
    temp=temp->next;
}
//wrapping thetwo linked lists
middle->next=head;
temp->next=middle;

Node *temp1=head->next;
Node *temp2=middle;
while(temp1!=head){
    cout<<temp1->val<<" ";
}
while(temp2!=middle){
    cout<<temp2->val<<" ";
}


    return 0;
}












