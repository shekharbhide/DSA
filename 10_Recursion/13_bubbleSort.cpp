#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


void bubbleSort(int arr[], int n)
{
    print(arr, n);

    // base case
    // Array is Alreday sorted
    if (n == 0 || n == 1)
        return;

    // ek case solve krlo
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    // Recursion Call
    bubbleSort(arr, n - 1);
}

int main()
{
    int n;
    cin >> n;
    int arr[30];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bubbleSort(arr, n);

    cout << endl<< endl << "Sorted array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}