#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s, result = "";
    cin>>s;
    unordered_set<char> str;
    int n = s.size();
    for(char i : s){
        if(str.find(i) == str.end()){
            result += i;
            str.insert(i);
        }
    } cout<<result;
}