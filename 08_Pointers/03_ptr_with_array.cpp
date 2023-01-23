#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*  int arr[10] ;
     cout << "address of 1st memory block: " << arr << endl;
     cout << "address of 1st memory block: " << &arr[0] <<endl;
     cout << arr[0] <<endl; */

    /* int arr2[10] = {10, 20, 30, 40};
    cout << "Printing value at index 0 : " << *arr2 << endl;
    cout << "addition of value of index 0 & 1 : " << *arr2 + 1 << endl;

    cout << "Printing value at index 1 : " << *(arr2 + 1) << endl;
    cout << "Printing value at index 0 : " << *(arr2) + 1 << endl;
    cout << "Printing value at index 0 : " << *arr2 << endl;

    int i = 2;
    cout << i[arr2] << endl;
    cout << arr2[i] << endl; */
    /*
        int arr3[50] = {20, 30, 40, 50};
        cout << sizeof(arr3) << endl;
        int *ptr = &arr3[2];

        cout << *ptr << endl;
        cout << sizeof(*ptr) <<endl;
        cout << sizeof(&ptr) <<endl; */

    /* int a[] = {1, 2, 3, 4};
cout << *(a) << " " << *(a+3); */

    /* int a[] ={1,2,3,4};
    int *p = a++; //will throw eror
    cout<<*p; */

    // showsing addresss in different ways
    int arr4[10] = {10, 20, 30, 40};
    int *p = &arr4[0];
    cout << &arr4[0] << endl;
    cout << &arr4 << endl;
    cout << p << endl;

    cout << &p << endl;
    return 0;
}