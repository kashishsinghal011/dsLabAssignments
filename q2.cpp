// 1. Develop a menu driven program for the following operations of on a Circular as well
// as a Doubly Linked List.
// (a) Insertion anywhere in the linked list (As a first node, as a last node, and
// after/before a specific node).
// (b) Deletion of a specific node, say 'Delete Node 60'. That mean the node to be
// deleted may appear as a head node, last node or a node in between.
// (c) Search for a node.
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

//circular linked list
Node* head=new Node(3);
head->next=new Node(4);
head->next->next=new Node(5);
head->next->next->next=new Node(7);
Node*tail=head->next->next->next;
//pointing the tail to the head
tail->next=head;


return 0;
}











