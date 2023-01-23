#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reachHome(int src,int dest) {

    cout << "Source: " << src << "  Destination: " << dest << endl;

    //base condition
    if(src == dest){
        cout << " Reached" << endl;
        return;
    }

    src++;
    reachHome(src,dest);
}
int main()
{
    int src = 1;
    int dest = 10;

    reachHome(1,10);
    return 0;
}