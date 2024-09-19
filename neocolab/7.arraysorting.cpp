#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void ArraySorter(vector<int> v) {
    sort(v.begin(),v.end());
    if(v[1]==v[2] && v[1]==v[3]){
        cout<<"All numbers are the same";
        return;
    }cout<<"Arranged elements are: ";
    for(int i=0;i<10;i++){
        cout<<v[i]<<" ";
    }
}
int main() {
    vector<int> numbers;
    for (int i = 0; i < 10; i++) {
        int a;
        cin>>a;
        numbers.push_back(a);
    }
    ArraySorter(numbers);
    return 0;
}