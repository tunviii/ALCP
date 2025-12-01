#include <iostream>
using namespace std;
int findUnique(int arr[], int n){
    int result=0;
    for(int i=0; i<n; i++){
        result^=arr[i];
    }
    return result;
}

int main()
{
    int arr[]={1,1,2,2,3,4,4,5,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Unique element in arr: "<<findUnique(arr,n)<<endl;
    return 0;
}