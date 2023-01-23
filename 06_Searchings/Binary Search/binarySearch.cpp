#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int key)
{

    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            s = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{
    int n, key;
    cin >> n;
    int arr[20];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter a key " << endl;
    cin >> key;

    cout << "Found at index  " << binarySearch(arr, n, key);
    return 0;
}