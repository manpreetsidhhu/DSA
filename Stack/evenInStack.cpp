#include <iostream>
#include <stack>
using namespace std;
void print(stack<int> s1){
    while (!s1.empty()){
        cout << s1.top() << "->" << s1.size() << "\n";
        s1.pop();
    }
    cout << endl;
}
int main(){
    stack<int> s1;
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array separated by 1space: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < 8; i++){
        if (arr[i] % 2 == 0){
            s1.push(arr[i]);
        }
    }
    print(s1);
    return 0;
}