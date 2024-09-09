#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    public:
    Node(int data1, Node* next1, Node* prev1){
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
    delete temp;
    cout<<"Head of LinkedList is deleted."<<endl;
    return head;
}
Node* deletingTail(Node* head){
    if(head == NULL || head->next == NULL) return NULL;
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    cout<<"\nTail of LinkedList is deleted."<<endl;
    return head;
}
Node* deletingAtK(Node* head, int K){
    if(head == NULL) return head;
    if(K == 1) return deletingHead(head);

    int counter = 0;
    Node* temp = head;
    Node* prev = NULL;

    while(temp != NULL){
        counter++;
        if(counter == K){
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        if(temp == nullptr || temp->next == nullptr){
            cout << "Invalid position!" << endl;
            return head;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}
Node* deletingElement(Node* head, int value){
    if(head == NULL) return head;
    if(head->data == value) return deletingHead(head);
    Node* temp = head;
    Node* prev = NULL;
    while(temp){
        if(temp->data == value){
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
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
    cout<<"\nEnter the position, where to delete a Node: ";
    int k; cin>>k;
    head = deletingAtK(head, k);
    traversal(head);
    cout<<"\nEnter the Node value you want to delete: ";
    int value; cin>>value;
    head = deletingElement(head, value);
    traversal(head);
    return 0;
}