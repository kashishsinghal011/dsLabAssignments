// Find size of a Circular Linked List
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
        while (temp->next != head)
            temp = temp->next;

        temp->next = newNode;
        newNode->next = head;
    }

    int getSize() {
        if (head == NULL) return 0;

        int count = 0;
        Node* temp = head;

        do {
            count++;
            temp = temp->next;
        } while (temp != head);

        return count;
    }
};

int main() {
    CircularLinkedList cl;

    cl.insertLast(20);
    cl.insertLast(40);
    cl.insertLast(60);

    cout << "Size of Circular Linked List = " << cl.getSize();

    return 0;
}
