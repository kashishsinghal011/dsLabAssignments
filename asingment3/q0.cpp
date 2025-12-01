// Develop a menu driven program demonstrating the following
// operations on a Stack using array:
// (i)push(), (ii) pop(), (iii) isEmpty(), (iv) isFull(), (v) display(), and
// (vi) peek().
#include <iostream>
using namespace std;

#define MAX 100 // maximum size of stack

class Stack {
    int top;
    int arr[MAX];

public:
    Stack() {
        top = -1; // initialize top
    }

    // Check if stack is empty
    bool isEmpty() {
        return (top == -1);
    }

    // Check if stack is full
    bool isFull() {
        return (top == MAX - 1);
    }

    // Push element onto stack
    void push(int value) {
        if (isFull()) {
            cout << "Stack Overflow! Cannot push " << value << endl;
        } else {
            arr[++top] = value;
            cout << value << " pushed onto stack.\n";
        }
    }

    // Pop element from stack
    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow! Nothing to pop.\n";
        } else {
            cout << arr[top--] << " popped from stack.\n";
        }
    }

    // Peek at top element
    void peek() {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
        } else {
            cout << "Top element: " << arr[top] << endl;
        }
    }

    // Display all elements in stack
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
        } else {
            cout << "Stack elements (top to bottom): ";
            for (int i = top; i >= 0; i--)
                cout << arr[i] << " ";
            cout << endl;
        }
    }
};

int main() {
    Stack s;
    int choice, value;

    do {
        cout << "\n--- STACK MENU ---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. isEmpty\n";
        cout << "5. isFull\n";
        cout << "6. Display\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to push: ";
            cin >> value;
            s.push(value);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.peek();
            break;
        case 4:
            if (s.isEmpty())
                cout << "Stack is empty.\n";
            else
                cout << "Stack is not empty.\n";
            break;
        case 5:
            if (s.isFull())
                cout << "Stack is full.\n";
            else
                cout << "Stack is not full.\n";
            break;
        case 6:
            s.display();
            break;
        case 7:
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 7);

    return 0;
}



















