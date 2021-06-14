#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int ans = 0 ;
    int curr=0; 

    for(int i=0;i<n;i++){
        int a ;
        cin>>a ;
        if(a == 1){
            curr++ ;
            ans = max(ans,curr) ;
        }else{
            curr = 0 ;
        }
    }

    cout<<ans<<endl ;

    return 0 ;
}