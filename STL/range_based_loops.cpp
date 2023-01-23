 #include<iostream>
 #include<bits/stdc++.h>
 using namespace std;
 
 int main()
 {
    vector<int>v = {1,2,3,4};
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
    vector<int> :: iterator it;
    for( it = v.begin();it!=v.end();it++){
        cout << (*it) << " ";
    }
    cout << endl;

    for(auto &value:v){
        value++;
       // cout << value << " ";
    }
     for(int value:v){
        
         cout << value << " ";
    }
    return 0;
 }