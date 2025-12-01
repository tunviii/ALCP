#include <iostream>
#include <algorithm>
using namespace std;
 void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int minIndex=i;
    for(int j=i+1; j<n; j++){
        if(arr[minIndex]>arr[j]){
            minIndex=j;
        }
    }
    swap(arr[i], arr[minIndex]);
    }
}
int main(){
   int arr[10];
   int n;
   cout<<"Enter size of array: ";
   cin>>n;
   cout<<"Enter array elements: ";
   for(int i=0; i<n; i++){
    cin>>arr[i];
   }
   selectionSort(arr, n);
   cout<<"Sorted array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}