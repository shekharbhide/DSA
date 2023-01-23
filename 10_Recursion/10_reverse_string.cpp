#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverseString(int start, int end, string &s)
{
    cout << "Call recieved for : " << s << endl;
    // Base Case
    if (start > end)
    {
        return;
    }

    swap(s[start], s[end]);
    start++;
    end--;
    // recursive call
    reverseString(start, end, s);
}

int main()
{
    string s;
    cin >> s;

    int start = 0;
    int end = s.length() - 1;

    reverseString(start, end, s);
    cout << endl;
    cout << "Reversed String: " << s << endl;
    return 0;
}
