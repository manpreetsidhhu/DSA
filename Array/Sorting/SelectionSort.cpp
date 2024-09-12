#include <iostream>
using namespace std;

int selectionSort(int arr[], int size){
    for (int i = 0; i < size; i++){
        for (int j = i+1; j < size; j++){
            if (arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }cout<<"\nSorted Array: [";
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
    int result = selectionSort(arr,n);
}