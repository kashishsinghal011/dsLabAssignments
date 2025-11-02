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
 void insert(Node *&head,int num){
    if(head==NULL){
        Node* temp=new Node(num);
        head=temp;
    }
    else{
        Node *curr=head;
        while(curr->next!=NULL){
            curr=curr->next;
        }
        Node *temp=new Node(num);
        curr->next=temp;
        curr=temp;
    }
}
 // displaying the linked list 
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
    insert(mylist.gethead(),7);
    display(mylist.gethead());




    return 0;
}