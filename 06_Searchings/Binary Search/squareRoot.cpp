#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int squareRootBS(int n){
    int s =0;
    int e = n;
    int ans = -1;
    int mid = s + (e-s)/2;
    while (s<=e)
    {
        int sq = mid * mid;
         if(sq == n){
            return mid;
            break;
         }
        if(sq <= n){
            ans = mid;
            s = mid + 1;
        }

        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
   
    
}


int main()
{
    int n;
    cin>>n;

    cout<<"Square Root is : " << squareRootBS(n);
    
    return 0;
}