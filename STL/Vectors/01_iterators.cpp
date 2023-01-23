#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    vector <int> v = {2,3,5,6,7};
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;

    vector <int> :: iterator it;
    it = v.begin();
    cout << *(it+1) << endl; 

    // printing 
    cout << "vector printing " << endl;
    for(it = v.begin(); it!=v.end();++it){
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}