#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        if(name[s]!=name[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

int len(char name[]){
    int count=0;
    for(int i=0; name[i]!='\0';i++){
        count++;
    }

    return count;
}
int main()
{
    char name[20];

    cout << "enter name :";
    cin >> name;

    cout << "Name is: " << name << endl;

    int n=len(name);
    cout<<"Palindrome is or not : "<< isPalindrome(name,n);
    return 0;
}