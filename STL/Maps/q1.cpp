/*given n strings,print unique strings in
lexiographic order with their frequency
n <=10^5
|S| <= 100
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> m;
    int n;
    cin >> n;
    for(int i=0; i<n; ++i){
        string s;
        cin >> s;
        m[s] = m[s] + 1; //m[s] initiallly 0, then it will be increamnet
        //m[s]++; // same as abov
    }

    for(auto pr:m){
        cout << endl << endl;
        cout << pr.first << " " << pr.second << endl;
    }

    return 0;
}

/* 
8
abc
def
abc
ghj
jkl
ghj
ghj
abc


abc 3


def 1


ghj 3


jkl 1 */