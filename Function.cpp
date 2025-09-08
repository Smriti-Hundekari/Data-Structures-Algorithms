//Perform the addition of two numbers in add function and display addition in main fuction

#include<iostream>
using namespace std;


int AddFunc(int x,int y){
    int sum = x+y;
    return sum;
}
int main(){
    int a = 2;
    int b = 3;
    int sum;

    cout<<AddFunc(a,b);   //Function calling
    
}

