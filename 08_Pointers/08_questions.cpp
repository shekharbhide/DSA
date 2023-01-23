
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*  int first = 8;
     int second = 18;
     int *ptr = &second;
     *ptr = 9;

     cout << first << " " <<second <<endl; */

    /* int first = 6;
    int *p = &first;
    int *q = p;
    (*q)++;
    cout << first << endl; */

    /*  int first = 8;
     int *p = &first;
     cout << (*p)++ << " " ;
     cout << first << endl; */

    /* int *p = 0;
    int first = 110;
    *p = first; //Error , Correct is *p = &first
    cout << *p << endl; */

   /*  int first = 8;
    int second = 11;
    int *third = &second;
    first = *third;

    *third = *third + 2;

    cout << first << " " <<second <<endl; */


    //Double pointers
    int first = 110;
    int *p = &first;
    int **q = &p;
    int second = (**q)++ + 9;
    cout << first << " " << second <<endl;
    return 0;
}