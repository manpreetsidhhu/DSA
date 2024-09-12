#include <iostream>
using namespace std;

int bubbleSort(int arr[], int size){
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            if (arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }cout<<"\nby bubbleSort\nSorted Array: [";
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
    int result = bubbleSort(arr,n);
}