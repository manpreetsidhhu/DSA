#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* next;
    
    Node(int value) : val(value), next(nullptr) {}
};

void appendLeft(Node** head, int val) {
    Node* newNode = new Node(val);
    newNode->next = *head;
    *head = newNode;
}

void appendRight(Node** head, int val) {
    Node* newNode = new Node(val);
    if (*head == nullptr) {
        *head = newNode;
    } else {
        Node* temp = *head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void print(Node* head) {
    if (head == nullptr) {
        cout << endl;
        return;
    }
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->val;
        if (temp->next != nullptr) {
            cout << " ";
        }
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* myList = nullptr;
    int choice;
    int val;

    do {
        cin >> choice;

        switch (choice) {
            case 1:
                cin >> val;
                appendLeft(&myList, val);
                break;
            case 2:
                cin >> val;
                appendRight(&myList, val);
                break;
            case 3:
                cout << "Linked List: ";
                print(myList);
                break;
            case 4:
                break;
            default:
                cout << "Invalid choice" << endl;
        }

    } while (choice != 4);

    return 0;
}
