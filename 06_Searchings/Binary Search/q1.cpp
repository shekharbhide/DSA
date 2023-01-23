// first & last element in a sorted array
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int firstOcc(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }

        else if (key > arr[mid])
        {
            s = mid + 1;
        }

        else if (key < arr[mid])
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }

        else if (key > arr[mid])
        {
            s = mid + 1;
        }

        else if (key < arr[mid])
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
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

    cout << "Enter a key : ";
    cin >> key;
    int f = firstOcc(arr, n, key);
    int l = lastOcc(arr, n, key);
    cout << "Left Occ is : " << f << endl;
    cout << "Right Occ is : " << l << endl;

    int t = (l - f) + 1;
    cout<<"Total no. of Occurences : " << t << endl;

    return 0;
}