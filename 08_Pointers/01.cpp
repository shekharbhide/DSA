#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int *ptr = &n;
    
    cout<<"Address: "<< ptr <<endl;
    cout<<"Value : " << *ptr <<endl;

    cout<<"SIze of int is  "<< sizeof(n)<<endl;
    cout<<"SIze of pointer is  "<< sizeof(ptr)<<endl;

    double d = 2.5;
    double *ptr2 = &d;
    cout<<"\nAddress: "<<ptr2<<endl;
    cout<<"Value: "<<*ptr2<<endl;

     cout<<"SIze of double is  "<< sizeof(d)<<endl;
    cout<<"SIze of pointer is  "<< sizeof(*ptr2)<<endl;
    return 0;
}