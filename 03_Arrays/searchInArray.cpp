#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool searchInArray(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return 1;
        }
        
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    int key;
    int arr[20];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter a key"<<endl;
    cin>>key;

     bool found = searchInArray(arr,n,key);
    if(found){
        cout<<"Found";
    }
    else{
        cout<<"Not found";
    }
    return 0;
}