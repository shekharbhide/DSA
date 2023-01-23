#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i = 5;
    int *ptr = &i;
    int **ptr2 = &ptr;

    cout <<"Content  in PTR i.e address: "<< ptr <<endl;
    cout<<"address of ptr: "<< *ptr2 <<endl;

    cout << i <<endl;
    cout << *ptr <<endl;
    cout << **ptr2 <<endl;

    cout << &i <<endl;
    cout << ptr <<endl;
    cout << *ptr2 <<endl;

    cout << &ptr <<endl;
    cout << ptr2 <<endl;

    return 0;
}