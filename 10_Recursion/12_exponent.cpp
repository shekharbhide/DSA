#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int power(int a, int b)
{
    // BASE CASE
    if (b == 0)
        return 1;
    if (b == 1)
        return a;

    // REcursive call
    int ans = power(a, b / 2);

    // if b is even
    if (b % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        // if b is odd
        return a * ans * ans;
    }
}
int main()
{
    int a, b;
    cin >> a >> b;

    cout << power(a, b);
    return 0;
}