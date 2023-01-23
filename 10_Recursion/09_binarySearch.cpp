#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print(int arr[],int start,int end){
    for(int i=start;i<=end;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
bool binarySearch(int arr[], int start, int end, int k)
{
    cout << endl;
    print(arr,start,end);

    int mid = start + (end - start) / 2;
    // BASE CASE
    // if element is not present
    if (start > end)
        return false;
    // if eleemnt is found
    if (arr[mid] == k)
    {
        return true;
    }

    if (k > arr[mid])
    {
        return binarySearch(arr, mid + 1, end, k);
    }
    else
    {
        return binarySearch(arr, start, mid - 1, k);
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[20];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int start = 0;
    int end = n - 1;
    int k;
    cout << "Enter key element to search: ";
    
    cin >> k;

    int found = binarySearch(arr, start, end, k);

    if (found)
    {
        cout << "\nElement is Found" << endl;
    }
    else
    {
        cout << "Element is NOT found" << endl;
    }
    return 0;
}