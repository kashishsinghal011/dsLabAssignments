#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

// Function to check if a linked list is circular
bool isCircular(Node* head) {
    if (!head) 
        return false;

    Node* temp = head->next;

    while (temp && temp != head)
        temp = temp->next;

    return (temp == head);
}

int main() {
    // Creating a normal linear linked list
    Node* head1 = new Node(10);
    head1->next = new Node(20);
    head1->next->next = new Node(30);
    head1->next->next->next = NULL;

    // Creating a circular linked list
    Node* head2 = new Node(1);
    head2->next = new Node(2);
    head2->next->next = new Node(3);
    head2->next->next->next = head2;  // Making it circular

    cout << "List 1 Circular? " << (isCircular(head1) ? "True" : "False") << endl;
    cout << "List 2 Circular? " << (isCircular(head2) ? "True" : "False") << endl;

    return 0;
}














