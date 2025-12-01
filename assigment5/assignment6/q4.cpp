#include <iostream>
using namespace std;

class Node {
public:
    char val;
    Node* next;
    Node* prev;
    Node(char data) {
        val = data;
        next = NULL;
        prev = NULL;
    }
};

// Function to check if a doubly linked list is palindrome
bool isPalindrome(Node* head) {
    if (head == NULL || head->next == NULL)
        return true;

    // Move to the tail of the linked list
    Node* tail = head;
    while (tail->next != NULL) {
        tail = tail->next;
    }

    // Compare characters from both ends
    while (head != tail && head->prev != tail) {
        if (head->val != tail->val)
            return false;
        head = head->next;
        tail = tail->prev;
    }

    return true;
}

int main() {
    // Creating a doubly linked list: L <-> E <-> V <-> E <-> L
    Node* head = new Node('L');
    head->next = new Node('E');
    head->next->prev = head;

    head->next->next = new Node('V');
    head->next->next->prev = head->next;

    head->next->next->next = new Node('E');
    head->next->next->next->prev = head->next->next;

    head->next->next->next->next = new Node('L');
    head->next->next->next->next->prev = head->next->next->next;

    // Check if palindrome
    if (isPalindrome(head))
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}







