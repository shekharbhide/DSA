#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(map<int,string> &m){
    cout << m.size() << endl;
    for(auto &pr:m){
        cout << pr.first << " " << pr.second << endl;
    }
}
int main()
{
    map<int,string>m;
    m[1] = "abc"; // TC - O(log(n))
    m[5] = "cdc";
    m[3] = "acd";
    m.insert({2,"xyz"}); 
    //map<int,string> :: iterator it;
        /* for(it = m.begin(); it != m.end(); ++it){
              //cout << (*it).first << " " << (*it).second << endl;
                cout << it->first << " " << it->second << endl;

        }
     */
    //find number
    auto it = m.find(10);  //o(log(n))
    if(it == m.end()){
        cout << "No value" << endl;
    }
    else{
        cout << (*it).first << " " << (*it).second << endl;
    }


    //delete value
    m.erase(3); //log(n)
    print(m);
    return 0;
}