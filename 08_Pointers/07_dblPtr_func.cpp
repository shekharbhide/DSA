#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void update(int **p2){
    //p2 = p2 + 1; //will not change in main fucntion
  //  *p2 = *p2 + 1;//p pr jo value he(P2 ka value i.e address of p) ,usko +1 krdo

        **p2 = **p2 + 1; 
}

int main()
{
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout << "Before  " << i << endl;
    cout << "Before " << p << endl;
    cout << "Before " << p2 << endl;
    update(p2);
    cout<<endl <<endl;
    cout << "After  " << i << endl;
    cout << "After " << p << endl;
    cout << "After " << p2 << endl;

    return 0;
}