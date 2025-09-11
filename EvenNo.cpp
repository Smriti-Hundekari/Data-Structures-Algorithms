#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the values";
    cin>>n;
     int arr[5];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Even numbers are:\n";
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
        cout<<arr[i]<<" ";
        }
    }

    return 0;
}
