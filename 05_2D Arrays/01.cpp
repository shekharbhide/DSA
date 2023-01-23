#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter row size:" << endl;
    cin >> m;
    cout << "Enter col size: " << endl;
    cin >> n;

    int arr[20][20];
   // row wise input
    for (int row = 0; row < m; row++)
    {
        for (int col = 0; col < n; col++)
        {
            cin >> arr[row][col];
        }
    }

    for (int row = 0; row < m; row++)
    {
        for (int col = 0; col < n; col++)
        {
            cout <<  arr[row][col]<<" ";
        }
        cout<<endl;
    }

    //column wise input

     for (int col = 0; col < m; col++)
    {
        for (int row = 0; row < n; row++)
        {
             cin >> arr[row][col];
        }
    }

     for (int col = 0; col < m; col++)
    {
        for (int row = 0; row < n; row++)
        {
            cout <<  arr[row][col]<<" ";
        }
        cout<<endl;
    }

    return 0;
}