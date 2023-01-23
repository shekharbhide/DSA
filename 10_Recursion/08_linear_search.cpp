#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[],int n,int k){
    if(n==0){
        return false;
    }

    if(arr[0] == k){
        return true;
    }
    else{
        bool remainingPart= linearSearch(arr+1,n-1,k);
        return remainingPart;
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[10];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int k;
    cout << "Enter key element to search: ";
    cin >> k;
    
    int found = linearSearch(arr,n,k);
    if(found){
        cout << "Element is found in Array" << endl;
    }
    else{
        cout << "NOT found" << endl;
    }
    return 0;
}