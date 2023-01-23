#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int row=1;
    while(row <= n){
        int col = 1;
        int val = row;
        while(col <= row){
            cout<< val << " ";
            val = val+1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
    return 0;
}

/*

1       
2 3     
3 4 5   
4 5 6 7 



ANOTHER APPROACH


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int row=1;
    while(row <= n){
        int col = 1;
    
        while(col <= row){
            cout<< row + col - 1  << " ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
    return 0;
}




*/