#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    if((n&(n-1))==0){
        cout<<"Number is a power of 2.";
    }
    else{
        cout<<"Number is not a power of 2.";
    }
    return 0;
}