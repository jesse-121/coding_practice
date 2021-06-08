#include<bits/stdc++.h>
using namespace std;

bool palindrome(int n){
    int ans = 0 ;

    int z =  n;
    while(n){
        ans  = ans*10 + n%10 ;
        n /= 10 ;
    }
    cout<<ans<<endl ;

    if(ans == z) return true;
    else return false ;
}

int main(){
    int n;
    cin>>n;

    if(palindrome(n)){
        cout<<"YES"<<endl ;
    }else{
        cout<<"NO"<<endl;
    }

    return 0 ;
}