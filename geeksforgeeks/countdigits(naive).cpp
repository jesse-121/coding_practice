#include<bits/stdc++.h>
using namespace std;

int digits(int n){
    int ans = 0 ;
    while(n){
        ans++ ;
        n /= 10 ;
    }
    return ans  ;
}

int main(){
    int n;
    cin>>n;

    cout<<digits(n)<<endl ;

    return 0 ;
}