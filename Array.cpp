#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the values";
    cin>>n;
     int arr[20];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
