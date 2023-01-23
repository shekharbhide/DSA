#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print(set<string> &s){
    for(string value:s){
         cout << value << endl;
    }
    for(auto i=s.begin();i!=s.end();i++){
        cout << (*i) << endl;
    }
}
int main()
{
    set<string> s;
    s.insert("asd"); //TC - Log(n)
    s.insert("xys");
    s.insert("pqr");
    auto it = s.find("abc");
    
    print(s);
    return 0;
}