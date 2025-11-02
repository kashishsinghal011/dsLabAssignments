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
    void del(Node *&head){
        if(head==NULL){
            cout<<"no list is initialised";
        }
        else{
        Node * temp=head;
        head=head->next;
        delete temp;
        }
    }

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
    Node* temp1 =new Node(7);
    temp->next=temp1;

    del(temp);
    display(temp);


    return 0;
}