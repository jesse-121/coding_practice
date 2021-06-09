#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9+7 ;

int power(int x,int n){
    long long int res = 1;

    while(n > 0){
        if(n%2 != 0) res = ((long long int)res*x)%mod;

        x = ((long long int)x*x)%mod ;
        n = n/2 ; 
    }

    return res ;
}

int main(){
    int x,n;
    cin>>x>>n;

    cout<<power(x,n)<<endl ;

    return 0 ;
}