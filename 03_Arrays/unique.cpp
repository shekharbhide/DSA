#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void uniqueInArray(int arr[],int n){
    int ans = 0;
    for(int i=0;i<n;i++){
        ans = ans ^ arr[i];
    }
    cout << "Unique element in Array: " <<  ans;
}
int main()
{
    int n;  
    cin>>n;
    int arr[20];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    uniqueInArray(arr,n);
    return 0;
}