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
    Node *& gethead(){
        return head;
    }
};
void display(Node* &head){
    if(head==NULL){
        cout<<"no list is created";
    }
    else{
        Node * dummy=head;
        while(dummy!=NULL){
            cout<<dummy->data<<" ";
            dummy=dummy->next;
        }
    }
}
int main (){


Node* temp=new Node(5);
Node* temp1= new Node(4);
temp->next=temp1;
Linked_list mylist(temp);
display(mylist.gethead());

return 0;

}