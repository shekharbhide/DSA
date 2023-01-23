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
        char ch = 'A';
        while (j <= i)
        {
            cout << ch << " ";
            ch = ch + 1;
            j=j+1;
            
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}