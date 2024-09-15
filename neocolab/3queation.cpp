#include <iostream>
using namespace std;

class Node{
    public: 
    int data;
    Node* next;
    public:
    Node(int val, Node* next1){
        data = val;
        next = next1;
    } Node(int val){
        data = val;
        next = nullptr;
    }
};
Node* creation(Node* head, int n){
    return new Node(n,head);
}
Node* print(Node* head){
    Node* temp = head;
    while(temp){
        cout<<temp->data;
        if(temp->next){
            cout<<" ";
        }
        temp = temp->next;
    }
    return head;
}

int main(){
    int n, choice;
    Node* head = nullptr;
    do{
        cin>>n;
        head = creation(head,n);
        cout<<"Node inserted"<<endl;
        cin>>choice;
    } while(choice==0);
    
    cout<<"Linked List: ";
    print(head);
    cout<<"\nNode ended";
}