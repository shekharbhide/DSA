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

        while (j <= i)
        {
            char c = 'A' + i - 1;
            cout << c << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}

/*
A
B B
C C C
D D D D
E E E E E
*/
