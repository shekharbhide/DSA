#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
     /* 1.inbuilt implementation
     2.Time Complexity
     3.Valid keys datatype */

    unordered_map<int,string>m;
    m[1]="a"; //insertion tc-O(1)
    m[5]="d";
    m[3]= "op";
    m[4]="cde";

    for(auto &i:m){
        cout << i.first << " "<< i.second<<endl;
    }

    return 0;
}