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
    Node* prev = head;
    cout<<"Enter elements of doubly linked list separated by a space:\n";
    for(int i=0;i<n;i++){
        int value; cin>>value;
        Node* temp = new Node(value,nullptr,prev);
        if(head == nullptr){
            head = temp;
        } else {
            prev->next = temp;
        } prev = temp;
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
    cout<<"Size of doubly linked list: ";
    int n; cin>>n;
    Node* head = creation(n);
    cout<<"Original List"<<endl;
    traversal(head);
}