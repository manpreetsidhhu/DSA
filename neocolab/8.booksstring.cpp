#include <iostream>
#include <string>
using namespace std;

int main(){
    int n; cin>>n;
    cout<<"Book Information:";
    for(int i=0;i<n;i++){
        string name, author;
        cin.ignore();
        getline(cin, name);
        getline(cin, author);
        cout<<"\nBook "<<i+1<<": "<<endl;
        cout<<"Title: "<<name<<endl;
        cout<<"Author: "<<author<<endl;
        int year; cin>>year;
        cout<<"Publication Year: "<<year;
    }
}