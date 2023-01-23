#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1; // for reow
    while (i <= n)
    {
        int j = 1; // for column
        while (j <= n)
        {
            cout << n - j + 1 <<" " ;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    return 0;
}

// to print like this simply print j
// 321
// 321
// 321


// to print in reverse print n-j+1
// 3 2 1 
// 3 2 1 
// 3 2 1 