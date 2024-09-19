// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    int vow = 0, cons = 0 ;
    cout<<"Enter string: ";
    getline(cin, s);
    for(auto i : s){
        i = tolower(i);
        if(i == 'a' || i == 'i' || i == 'e' || i == 'o' || i == 'u'){
            vow++;
        } else if(i == ' '){
            cons = cons;
        } else {
            cons++;
        }
    }cout<<"\nNumber of vowels in string are: "<<vow;
    cout<<"\nNumber of consonants in string are: "<<cons;
    return 0;
}