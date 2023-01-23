#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int sumOfArray(int arr[],int n){

    //base case
    if(n==0){
        return 0;
    }

    if(n==1){
        return arr[0];
    }

     int rpart = sumOfArray(arr+1,n-1);
    int ans = arr[0] + rpart;
   
    return ans;
    
}
int main()
{
    int n;
    cin >> n;
    int arr[10];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }   

    cout << sumOfArray(arr,n);
    return 0;
}