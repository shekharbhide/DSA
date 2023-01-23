#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void mergeArrays(int arr1[], int n, int arr2[], int m,int arr3[])
{
    int  i = 0;
    int  j = 0;
    int  k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
            
        }
        else
        {
            arr3[k++]=arr2[j++];
            
        }
    }

    while (i<n)
    {
        arr3[k++]=arr1[i++];
    
    }

    while(j<n){
        arr3[k++]=arr2[j++];

    }
    
}

void printArray(int ans[],int n){
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    int n, m;
    cout << "enter a siz of two array: ";
    cin >> n >> m;
   
    int arr1[20], arr2[20];
    int arr3[50];
 int p=n+m;
    cout << "Enter elements of arr1: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter elements of arr2: " << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    mergeArrays(arr1, n, arr2, m,arr3);
    printArray(arr3, p);
    return 0;
}