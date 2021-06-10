#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s; 

    int ans = 1 ;

    for(int i=0;i<s.size()-1;i++){
        int z = 1 ;
        while(s[i] == s[i+1] && i<(s.size()-1)) z++ , i++ ;

        ans = max(ans,z) ;
    }

    cout<<ans<<endl ;
}