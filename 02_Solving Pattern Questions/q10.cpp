#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
      char start = 'A';
    int i = 1;
    while (i <= n)
    {
        int j = 1;
      
        while (j <= n)
        {

            cout << start << " ";
            start = start + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}

/*

A B C D E 
F G H I J
K L M N O
P Q R S T
U V W X Y
*/