#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char c = 'A' + j - 1;
            cout << c << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}

/*

A B C D E
A B C D E
A B C D E
A B C D E
A B C D E

*/