#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        while(k--){
            int s = n%10 ;
            if(s == 0) n/=10 ;
            else n-=1 ;
        }
        cout<<n<<endl ;
    }
}