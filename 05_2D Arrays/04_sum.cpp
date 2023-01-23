#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sumColWise(int arr[][3],int row,int col){
    cout<< "Sum col wise:" <<endl;

    for(int col=0;col<3;col++){
        int sum =0;
        for(int row=0;row<3;row++){
            sum += arr[row][col];
        }
        cout<<sum << " ";
    }
    cout<<endl;
}
void sumRowWise(int arr[][3], int row, int col)
{
    cout << "Sum row wise:" << endl;
    
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}

int largestRowSum(int arr[][3],int row,int col){
    int maxi = INT_MIN;
    int rowIndex =-1;
    for(int row=0;row<3;row++){
        int sum =0;
        for(int col=0;col<3;col++){
            sum +=arr[row][col];
        }

        if(maxi < sum){
            maxi = sum;
            rowIndex=row;
        }
    }
    cout<<"MAx sum is "<<maxi<<endl;
    return rowIndex;
}

int main()
{
    int arr[3][3];

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
    }

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    sumRowWise(arr, 3, 3);
    sumColWise(arr,3,3);
    int ans = largestRowSum(arr,3,3);
    cout<<"max row is at index: "<< ans <<endl;
    return 0;
}