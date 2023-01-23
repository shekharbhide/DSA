#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int sum(int *arr,int n){
    int s = 0;
    for(int i=0;i<n;i++){
        s += arr[i];
    }
    return s;
}
int main()
{
    int n;
    cin >> n;

    // variable size array
    int *arr = new int[n];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

   cout<<"SUM is  " << sum(arr,n);
    return 0;
}