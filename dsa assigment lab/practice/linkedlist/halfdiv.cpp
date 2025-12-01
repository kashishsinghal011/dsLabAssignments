// Given a Circular linked list. The task is split into two Circular Linked lists.
//  If there are an odd number of nodes in the given circular linked list then out of the resulting two halved lists,
//   the first list should have one node more than the second list.  
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
Node* head=new Node(4);
head->next=new Node(3);
head->next->next=new Node(6);
head->next->next->next=new Node(9);
head->next->next->next=new Node (10);
head->next->next->next->next=head;
//4->3->6->9->10
Node *temp=head;
Node *slow=head;
Node* fast=head;
while(fast->next!=head){

    slow=slow->next;
    fast=fast->next->next;
}




    return 0;
}