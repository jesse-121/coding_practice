#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int ans ;
    int curr ;

    for(int i=0;i<n;i++){
        int a;
        cin>>a ;

        if(i == 0){
            curr = a;
            ans = a;
        }
        else{
            curr = max(curr + a ,a) ;
            ans = max(curr,ans); 
            cout<<ans<<" " ;
        }
    }
    cout<<endl ;

    cout<<ans<<endl ;

    return 0 ;
}
