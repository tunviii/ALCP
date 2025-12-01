#include <iostream>
using namespace std;
void rotate(int arr[], int k, int n){
    k=k%n;
    int temp[n];
    for(int i=0; i<n; i++){
        temp[(i+k)%n]=arr[i];
    }
    for(int i=0; i<n; i++){
        arr[i]=temp[i];
    }
}
void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int k;
    cout<<"Enter k: ";
    cin>>k;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Original array: ";
    printArray(arr,n);
    cout<<endl;
    cout<<"Rotated array: ";
    rotate(arr,k,n);
    cout<<"Rotated array: ";
    printArray(arr,n);
    return 0;

}