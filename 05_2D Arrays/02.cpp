#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  //  int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int arr[3][4]={{10,20,30,40},{40,50,60,70},{80,90,100,110}};
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j] <<" ";
        }
        cout<<endl;
    }
    return 0;
}