// You are using GCC
#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s;
    int t = 1;
    while(t == 1){
        cout<<"ENter a digit :\n1 to add an element to stack\n2 for to delete the last/upper element"
        int n; cin>>n;
        switch (n) {
            case 1:
            {
                int a;
                cin>>a;
                s.push(a);
                break;
            }
            case 2:
            s.pop();
            break;
            case 3:{
                if(s.size()==10){
                    cout<<"Stack is full!"<<endl;
                } else { cout<<"Stack is not full"<<endl;}
                break;
            }
            case 4:{
                if(s.empty()){
                    cout<<"Stack is empty!"<<endl;
                } else { cout<<"Stack is not empty"<<endl;}
                break;
            }
            case 5:{
                t = 0;
                break;
            }
            default:
            cout<<"Invalid choice";
        }
    }
}