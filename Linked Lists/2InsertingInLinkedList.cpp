#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
// Creating a linked list by converting it from an array
Node* convertToLinkedList(int arr[], int size){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<size;i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
Node* insertAtHead(Node* head, int value){
    Node* temp = new Node(value,head);
    return temp;
}
Node* insertAtTail(Node* head, int value){
    if(head == NULL) return new Node(value);
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    } temp->next = new Node(value);
    return head;
}
Node* insertAtIndex(Node* head, int value, int index){
    if(head==NULL){
        if(index == 1){
            return new Node(value);
        } else return NULL;
    }
    Node* temp = head;
    Node* prev = NULL;
    int counter = 0;
    while(temp != NULL){
        counter++;
        if(index == 1) return insertAtHead(head, value);
        if(index-1 == counter){
            Node* newNode = new Node(value);
            newNode->next = temp->next;
            temp->next = newNode;
        }
        temp = temp->next;
    } return head;
}
int traversal(Node* head){
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}
int main(){
    int arr[] = {10,20,30,40,50};
    int size = sizeof(arr)/sizeof(arr[0]);
    Node* head = convertToLinkedList(arr,size);
    cout<<"Original LinkedList: "<<endl;
    traversal(head);
    cout<<"\nEnter Value to be inserted at Head: ";
    int value; cin>>value;
    head = insertAtHead(head, value);
    traversal(head);
    cout<<"\nEnter Value to be inserted at Tail: ";
    int value2; cin>>value2;
    head = insertAtTail(head, value2);
    traversal(head);
    cout<<"\nEnter position where value to be inserted: ";
    int index; cin>>index;
    cout<<"Enter Value to be inserted at position "<<index<<" : ";
    int value3; cin>>value3;
    head = insertAtIndex(head, value3, index);
    traversal(head);
}