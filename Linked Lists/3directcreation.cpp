#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;
    public:
        Node(int data1,Node* next1, Node* prev1){
            data = data1;
            next = next1;
            prev = prev1;
        }
        Node(int data1){
            data = data1;
            next = nullptr;
            prev = nullptr;
        }
};
Node* creation(int n){
    Node* head = nullptr;
    Node* mover = nullptr;
    cout<<"Enter elements of linked list separated by a space:\n";
    for(int i=0;i<n;i++){
        int value; cin>>value;
        Node* temp = new Node(value);
        if(head == nullptr){
            head = temp;
        } else {
            mover->next = temp;
        } mover = temp;
    } return head;
}
int traversal(Node* head){
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    } return 1;
}

int main(){
    cout<<"Size of linked list: ";
    int n; cin>>n;
    Node* head = creation(n);
    traversal(head);
}