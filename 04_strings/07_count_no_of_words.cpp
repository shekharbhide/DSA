#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int countOfWords(string s){
    int count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==' ')
            count++;
    }
    return count+1;
}
int main()
{
    string s;
    getline(cin,s);

    cout<<"string is :"<<s<<endl;

    cout<<"Count of Words is: "<<countOfWords(s);
    return 0;
}