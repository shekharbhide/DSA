#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solve
{
    public:
        bool uniqueOccurances(vector<int>&arr){
            vector<int>ans;
            int i=0;
            while(i<arr.size()){
                int count =1;
                for(int j=i+1;j<arr.size();j++){
                    if(arr[i]==arr[j]){
                        count++;
                    }
                    else{
                        break;
                    }
                }
                ans.push_back(count);
                i = i + count;
            }
            sort(ans.begin(),ans.end());
            for(int i=0;i<ans.size()-1;i++){
                if(ans[i]==ans[i+1]){
                    return false;
                  //  cout<< "false";
                }
            }
            return true;
            // cout <<

        }
};
int main()
{
  int n;
  cin>>n;
  vector <int> arr(0,n);
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        arr.push_back(temp);
    }

    solve s;
    s.uniqueOccurances(arr);
      bool found =  s.uniqueOccurances(arr);
    if(found){
        cout<<"Tue";
    }
    else{
        cout<<"False";
    }
    return 0;
}