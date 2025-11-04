//formation of doubly linked lists
#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node*prev;
    Node(int data){
        val=data;
        next=NULL;
        prev=NULL;
    }
};
int main (){

    Node* head1=new Node(2);
    head1->next= new Node(13);
    head1->next->prev=head1;
    head1->next->next=new Node(5);
    head1->next->next->prev= head1->next;


    return 0;
}






