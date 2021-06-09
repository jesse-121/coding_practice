#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9+7 ;

int power(int x,int n){

    if(n == 0) return 1;

    int temp = power(x,n/2) ;

    temp = ((long long int)temp*temp)%mod ;

    if(n%2 == 0) return temp ;
    else return ((long long int)temp*x)%mod ;

}

int main(){
    int x,n;
    cin>>x>>n;

    cout<<power(x,n)<<endl ;

    return 0 ;
}