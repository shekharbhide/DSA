#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void  print(int arr[],int n){
   
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int partition(int arr[], int s, int e)
{
    // pivot uthalo
    int pivot = arr[s];

    // count krlo kitne elements pivot se chote he
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        // check
        if (arr[i] <= pivot)
        {
            count++;
        }
    }

    // place a pivot element to Right Position
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    // Left & right wala part smbhal lete he
    int i = s;
    int j = e;

    // check krte he,kya left  wale eleemnts pivotIndex se chote he
    // Check krte he,kya right wale elemnts pivotIndex se bade he

    while (i < pivotIndex && j > pivotIndex)
    {
        // check whether eleemts are at right place ,if yes then move ahead by skipping them mtlb ++ && --
        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        // if eleemnts are not at right position then swap them
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivotIndex;
}
void quickSort(int arr[], int s, int e)
{
    // Base Case
    if (s >= e)
        return;

    // call to partition function for PArtion
    int p = partition(arr, s, e);

    // recursive call
    // for left part
    quickSort(arr, s, p);

    // for right part
    quickSort(arr, p + 1, e);
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

    quickSort(arr, 0, n - 1);
    print(arr, n);
    return 0;
}
