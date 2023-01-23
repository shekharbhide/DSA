#include <iostream>
#include <bits/stdc++.h>
using namespace std;

char lowerToUpper(char ch)
{

        if (ch >= 'A' && ch <= 'Z')
        {
                return ch;
        }
        else
        {
                int temp = ch - 'a' + 'A';
                return temp;
        }
}

int main()
{
        char name[30];

        // cout<<"enter a char:";
        // cin>>name;

        cout << "Name is: " << name << endl;

        cout << "\nChar is: " << lowerToUpper('S');
        cout << "\nChar is: " << lowerToUpper('a');
        cout << "\nChar is: " << lowerToUpper('b');
        cout << "\nChar is: " << lowerToUpper('Y');
        cout << "\nChar is: " << lowerToUpper('Z');

        return 0;
}