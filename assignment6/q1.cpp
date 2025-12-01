#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int d) { data = d; next = NULL; }
};

class CircularList {
public:
    Node* head;

    CircularList() { head = NULL; }

    void insertFirst(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            newNode->next = head;
            return;
        }
        Node* temp = head;
        while (temp->next != head) temp = temp->next;
        newNode->next = head;
        temp->next = newNode;
        head = newNode;
    }

    void insertLast(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            newNode->next = head;
            return;
        }
        Node* temp = head;
        while (temp->next != head) temp = temp->next;
        temp->next = newNode;
        newNode->next = head;
    }

    void insertAfter(int key, int val) {
        if (!head) return;
        Node* temp = head;
        do {
            if (temp->data == key) {
                Node* newNode = new Node(val);
                newNode->next = temp->next;
                temp->next = newNode;
                return;
            }
            temp = temp->next;
        } while (temp != head);
    }

    void deleteNode(int key) {
        if (!head) return;

        Node *curr = head, *prev = NULL;

        if (head->data == key) {
            while (curr->next != head) curr = curr->next;
            curr->next = head->next;
            delete head;
            head = curr->next;
            return;
        }

        curr = head;
        do {
            prev = curr;
            curr = curr->next;
            if (curr->data == key) {
                prev->next = curr->next;
                delete curr;
                return;
            }
        } while (curr != head);
    }

    bool search(int key) {
        if (!head) return false;
        Node* temp = head;
        do {
            if (temp->data == key) return true;
            temp = temp->next;
        } while (temp != head);
        return false;
    }

    void display() {
        if (!head) return;
        Node* temp = head;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << "\n";
    }
};

int main() {
    CircularList cl;
    int choice, val, key;

    while (1) {
        cout << "\n--- Circular Linked List Menu ---\n";
        cout << "1 Insert at First\n2 Insert at Last\n3 Insert After\n";
        cout << "4 Delete Node\n5 Search Node\n6 Display\n7 Exit\n";
        cin >> choice;

        switch (choice) {
        case 1: cout << "Enter value: "; cin >> val; cl.insertFirst(val); break;
        case 2: cout << "Enter value: "; cin >> val; cl.insertLast(val); break;
        case 3: cout << "Enter key and value: "; cin >> key >> val; cl.insertAfter(key, val); break;
        case 4: cout << "Enter value to delete: "; cin >> key; cl.deleteNode(key); break;
        case 5: cout << "Enter value to search: "; cin >> key; 
                cout << (cl.search(key) ? "Found\n" : "Not Found\n"); break;
        case 6: cl.display(); break;
        case 7: return 0;
        }
    }
}


