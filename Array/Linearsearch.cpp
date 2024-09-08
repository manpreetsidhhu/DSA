#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int element){
    for(int i=0;i<size;i++){
        if(arr[i] == element){
            return i;
        }
    }
    return -1;
}

int main(){
    int n; 
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array separated by 1space: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element whose position to be searched in array: ";
    int element; //element to be searched
    cin>>element;
    int result = linearSearch(arr,n,element);
    if(result>=0){
        cout<<"The element is found in Array at index "<<result<<endl;
    } else {
        cout<<"The element is not found in Array"<<endl;
    }
}