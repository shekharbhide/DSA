#include <iostream>
// #include<bits/stdc++.h>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = (s+e) / 2;
    // calculate size of the two arrays
    int len1 = mid - s + 1;
    int len2 = e - mid;

    // Create two Arrays for above lenght
    int *first = new int[len1];
    int *second = new int[len2];

    // Copy the values into arrays
    int mainArrayIndex = s; // for first array ,it starts from start
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
        /*
         mainArrayIndex++; */
    }
    mainArrayIndex = mid + 1; // for second array, it starts from mid+1
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
        /*
        mainArrayIndex++; */
    }

    // Merge two sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex=s;
    // traverse till both arrays not reach to their last index
    while (index1 < len1 && index2 < len2)
    {
        // check which arrays is small
        // check whteter first aray is small or not,if yes then add first element into Main Array
        if (first[index1] < second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
            /*  mainArrayIndex++;
             index1++; */
        }
        else
        {
            // else add second array eleemnts in main array
            arr[mainArrayIndex++] = second[index2++];
            /*  mainArrayIndex++;
             index2++; */
        }
    }

    while (index1 < len1)
    {
        arr[mainArrayIndex++] = first[index1++];
        /* mainArrayIndex++;
        index1++; */
    }
    while (index2 < len2)
    {
        arr[mainArrayIndex++] = second[index2++];
        /* mainArrayIndex++;
        index2++; */
    }
    delete[] first;
    delete[] second;
}

void mergeSort(int *arr, int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }
    int mid = (s + e) / 2;
    // left part sort karna h
    mergeSort(arr, s, mid);
    // right part sort karna h
    mergeSort(arr, mid + 1, e);
    // merge
    merge(arr, s, e);
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

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
