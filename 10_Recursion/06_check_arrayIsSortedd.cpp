#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[],int n){
    //base Case
    if(n==0 || n==1){
        return true;
    }

    if(arr[0] > arr[1])
        return false;
    else{
        bool remainingPart = isSorted(arr+1,n-1);  
        return remainingPart;  
    }    
        
}

int main()
{
    int n;
    cin >> n;
    int arr[20];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    bool ans = isSorted(arr,n);

    if(ans){
        cout << " Array is Sorted"<< endl;
    }
    else{
        cout << " Array is NOT Sorted"<< endl;

    }

    return 0;
}