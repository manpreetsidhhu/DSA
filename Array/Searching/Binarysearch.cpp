#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int element){
    int high = size-1,low = 0,mid;
    while(low<=high){
        mid = (low + high)/2;
        if(arr[mid] == element){
            return mid;
        } else if(arr[mid]<element){
            low = mid + 1;
        } else {
            high = mid - 1;
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
    int result = binarySearch(arr,n,element);
    if(result>=0){
        cout<<"The element is found in Array at index "<<result<<endl;
    } else {
        cout<<"The element is not found in Array"<<endl;
    }
}