#include<iostream>
#include<bits/stdc++.h>
using namespace std;

  void solve(string &str,int i,string &ans){
        if(str.length()==i){
            cout<<ans<<endl;
            ans += str[i];
        }
        if(str[i]==str[i+1]){
            i+2;
        }
        else{
            i+1;
        }
        solve(str,i,ans);
    }
    string rremove(string s){
        string ans="";
        solve(s,0,ans);
        return ans;
    }
int main()
{
    rremove("greeksforgreek");
    return 0;
}