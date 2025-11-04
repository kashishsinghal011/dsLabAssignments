#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

int main() {
    // Create the circular linked list: 20 → 100 → 40 → 80 → 60 → (back to head)
    Node* head = new Node(20);
    head->next = new Node(100);
    head->next->next = new Node(40);
    head->next->next->next = new Node(80);
    head->next->next->next->next = new Node(60);
    head->next->next->next->next->next = head;  // make it circular

    Node* temp = head;

    cout << "Circular Linked List: ";

    // Print all nodes once
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);

    // Repeat head node at the end
    cout << head->data << endl;

    return 0;
}



