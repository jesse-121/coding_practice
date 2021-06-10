#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n,k;
        cin>>n>>k;

        if(k > n){
            cout<<min(k-n,n)<<endl ;
        }else if(k == n){
            cout<<"0"<<endl ;
        }else{
            n = n%k ;
            cout<<min(k-n,n)<<endl ;
        }
    }

    return 0 ;
}