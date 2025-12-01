#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = NULL;
    }
};

class CircularLinkedList {
public:
    Node* head;

    CircularLinkedList() {
        head = NULL;
    }

    void insertLast(int value) {
        Node* newNode = new Node(value);

        if (head == NULL) {
            head = newNode;
            newNode->next = head;
            return;
        }

        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->next = head;
    }

    void display() {
        if (head == NULL) return;

        Node* temp = head;

        // Print all nodes
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);

        // Print head again at the end
        cout << head->data;
    }
};

int main() {
    CircularLinkedList cl;

    cl.insertLast(20);
    cl.insertLast(100);
    cl.insertLast(40);
    cl.insertLast(80);
    cl.insertLast(60);

    cl.display();  // Output: 20 100 40 80 60 20

    return 0;
}









