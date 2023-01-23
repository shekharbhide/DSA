#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int r = 1;
    while (r <= n)
    {
       int c=1;
       char ch=n-r+1;
       ch='*';
       while (c<=r)
       {
            
            cout<<ch;
            c=c+1;
       }
       
        cout << endl;
        r = r + 1;
    }
    return 0;
}

/*

D 
C D
B C D
A B C D*/