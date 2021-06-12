#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int mx = -1e9;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        mx = max(mx,a)  ; 
    }

    cout<<mx<<endl ;

    return 0 ;
}