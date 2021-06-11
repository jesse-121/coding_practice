#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;

int powr(int x,int n){
    if(n == 0) return 1;

    long long temp = powr(x,n/2) ;

    temp = (temp*temp)%mod;

    if(n%2 == 0) return temp ;
    else return (temp*x)%mod ;
    
}

int main(){
    int n;
    cin>>n;

    cout<<powr(2,n) ;

    return 0 ;
}