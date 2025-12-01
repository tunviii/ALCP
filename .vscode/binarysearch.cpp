#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int low=0;
    int high=n-1;
    int target;
    cout<<"Enter target element: ";
    cin>>target;
    int flag=0;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            flag=1;
            return mid;
        }
        if(arr[mid]<target){
            flag=1;
            low=mid+1;
        }
        if(arr[mid]>target){
            flag=1;
            high=mid-1;
        }
        else{
            flag=-1;
        }
    }
    if(flag==1){
        cout<<target<<"Element found at "<<flag<<endl;
    }
    if(flag==-1){
        cout<<"Element not found.";
    }
    return 0;
}