#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int length(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }

    return count;
}

void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        swap(name[s++],name[e--]);
    }

}


int main()
{
    
    char name[20];
    
    cout << "Enter a string:";
    cin >> name;

    cout << "String is: " << name << endl;
    // reverse(name, n);
    int n= length(name);
    cout<< "lenght: " << n <<endl;
    
    cout<<"Reversed string is: ";
    reverse(name,n);
    cout<<name ;
    return 0;
}