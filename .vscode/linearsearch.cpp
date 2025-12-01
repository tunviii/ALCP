#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    cout<<"Enter array elements: ";
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter target element: ";
    int target;
    cin>>target;
    for(int i=0; i<n; i++){
        if(arr[i]==target){
         cout<<arr[i]<<" found at "<<i<<" index.";
         return i;
        }
        else{
            cout<<"Element not found.";
            return -1;
        }
    }
    return 0;
}