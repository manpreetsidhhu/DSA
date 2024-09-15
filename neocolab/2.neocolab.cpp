#include <iostream>
#include <string>
using namespace std;

struct Node {
    string data;
    Node* next;
    
    Node(string val) {
        data = val;
        next = nullptr;
    }
};
class LinkedList {
    Node* head;
public:
    LinkedList() {
        head = nullptr;
    }
    void insertAtBeginning(string data) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
    void appendAtEnd(string data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    void displayDocument() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data;
            if (temp->next != nullptr) {
                cout << " ";
            }
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    int n;
    cin >> n;
    cin.ignore();

    LinkedList doc;
    for (int i = 0; i < n; i++) {
        string line;
        getline(cin, line);
        doc.insertAtBeginning(line);
    }
    cout << "Document: ";
    doc.displayDocument();
    string s;
    getline(cin, s);
    doc.appendAtEnd(s);
    cout << "Updated Document: ";
    doc.displayDocument();
    
    return 0;
}
