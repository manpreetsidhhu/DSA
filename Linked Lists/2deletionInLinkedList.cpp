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

int traversal(Node* head){
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}
Node* deletingHead(Node* head){
    if(head == NULL) return head;
    Node* temp = head;
    head = head->next;
    free(temp);
    cout<<"\nHead of LinkedList is deleted."<<endl;
    return head;
}
Node* deletingTail(Node* head){
    if(head == NULL || head->next == NULL) return NULL;
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    free(temp->next);
    temp->next = nullptr;
    cout<<"\nTail of LinkedList is deleted."<<endl;
    return head;
}

int main(){
    int arr[] = {10,20,30,40,50,60,70,80,90};
    int size = sizeof(arr)/sizeof(arr[0]);
    Node* head = convertToLinkedList(arr,size);
    cout<<"LinkedList original: "<<endl;
    traversal(head);
    head = deletingHead(head);
    traversal(head);
    head = deletingTail(head);
    traversal(head);
}