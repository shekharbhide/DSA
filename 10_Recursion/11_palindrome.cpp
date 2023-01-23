#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str, int i, int j)
{
    // Base Case
    if (i > j)
        return true;

    // check one charactr ,starting with end
    if (str[i] != str[j])
        return false;
    else
        // recursive call
        return checkPalindrome(str, i + 1, j - 1);
}
int main()
{
    string str;
    cin >> str;

    int isPalindrome = checkPalindrome(str, 0, str.length() - 1);

    if (isPalindrome)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    return 0;
}