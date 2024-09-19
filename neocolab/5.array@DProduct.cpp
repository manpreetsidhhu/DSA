#include <iostream>
using namespace std;

void functions(){
    int a,b;
    cin>>a>>b;
    int arr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr[i][j];
        }
    }for(int i=0;i<a;i++){
        int product = 1;
        for(int j=0;j<b;j++){
            product *= arr[i][j];
        }for(int j=0;j<b;j++){
            cout<<product<<" ";
        }cout<<endl;
    }
}
int main(){
    int n; cin>>n;
    for(int i=0;i<n;i++){
        functions();
    }
}


