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


int searchingElement(Node* head, int element){
    int counter = 0;
    Node* temp = head;
    while(temp){
        if(temp->data==element){return counter;}
        temp = temp->next;
        counter++;
    }
    return 0;
}

int main(){
    int arr[] = {10,20,30,40,50};
    int size = sizeof(arr)/sizeof(arr[0]);
    Node* head = convertToLinkedList(arr,size);
    int element;
    cout<<"Element to be searched in LinkedList : "; cin>>element;
    int result = searchingElement(head,element);
    cout<<"Element "<< element <<" is present in LinkedList at index "<<result<<endl;

}