#include <iostream>
using namespace std;

int insertionSort(int arr[], int size){
    
    for(int i=0;i<size;i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    cout<<"\n(by Insertion sort)\nSorted Array: [";
    for(int i=0;i<size;i++){
        cout<<arr[i];
        if (i < size - 1) {
            cout << ", ";
        }
    }cout<<"]";
    return 1;
}

int main(){
    int n; 
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array separated by 1space:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result = insertionSort(arr,n);
}