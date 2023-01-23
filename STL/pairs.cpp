#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    pair<int,string>p;
    //p=make_pair(3,"abc");
    p={1,"abc"};
    cout<<p.first<<endl;
    cout<<p.second<<endl;
    pair<int ,int >p_array[3];
    p_array[0]={2,3};
    p_array[1]={5,6};
    p_array[2]={7,8};
    //swap pair
    swap(p_array[0],p_array[2]);
    for(int i=0;i<3;i++){
        cout<< p_array[i].first<<" " <<p_array[i].second<< endl;
    }
    

    return 0;
}