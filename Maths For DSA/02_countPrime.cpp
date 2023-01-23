#include<iostream>
#include<bits/stdc++.h> 
using namespace std;

//APPROACH USNG SIEVE OF ERATUSTHENCES

int countPrimes(int n){
    //intitally will make all elenets prime
    vector<bool>prime(n+1,true);
        //intitally 
        prime[0]=false;
        prime[1]=false;
        int count=0;
        for(int i=2; i<n; i++){
            if(prime[i]){
                count++;
                //if table of i found then make them 0 bcoz they r not prime number
                for(int j=2*i; j<n; j=j+i){
                    prime[j]=0;
                }
            }
        }
        return count;
    
}
int main()
{
    int n;
    cin>>n;

    cout<<"Count of prime numbers : "<< countPrimes( n);
    return 0;
}