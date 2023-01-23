#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maxInArray(int arr[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int minInArray(int arr[],int n){
    int min = INT_MAX;

    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

int main()
{
    int n;
    cin >> n;

    int arr[100];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Max in Array is :" << maxInArray(arr, n) << endl;
    
     cout << "Min in Array is : "<<  minInArray(arr, n) <<endl;
   

    return 0;
}