//searching the elment
/// remmenber to make the pointer according to node 
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
class Linked_list{
    private:
    Node *head;
    public:
    Linked_list(){
        head=NULL;
    }
    Linked_list(Node* act){
        head=act;
    }
    Node * gethead(){
        return head;
    }

};
bool search(Node * head ,int num){
        Node*temp=head;
        while(temp!=NULL){
            if(temp->data==num){
                return true;
            }
        temp=temp->next;
        }
    return false;
}

int main (){


Node* temp=new Node(4);
Node* temp1=new Node(5);
Node* temp2=new Node(3);
temp->next=temp1;
temp1->next=temp2;
Linked_list linkedlist(temp);
int key=55;

if(search(linkedlist.gethead(),key)){
    cout<<"found out";
}
else{
    cout<<"Not found";
}
return 0;
}