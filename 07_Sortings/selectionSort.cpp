#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[],int n){
    for(int i=0;i<n;i++){

        int min = i;

        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[min]){
                min =j;
            }
        }
        swap(arr[min], arr[i]);
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[20];
    int n;
    cout << "Enter a size :";
    cin>>n;

    for(int i=0;i<n;i++){
        cin>> arr[i];
    }

    selectionSort(arr,n);
    return 0;
}