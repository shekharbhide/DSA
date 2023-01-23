#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print(int *ptr){
    *ptr += 10; 
    cout << *ptr << endl;
}
int main()
{
    int v =10;
    int *ptr = &v;

    print(ptr);
    return 0;
}