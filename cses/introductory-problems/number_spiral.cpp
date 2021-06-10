#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long a,b;
        cin>>a>>b;

        long long p = max(a,b) ;
        long long z = (p*p - p + 1) ;
        if(a>b){
            if(a%2 == 0){
                z += (a-b) ;
                cout<<z<<endl;
            }else{
                z -= (a-b) ;
                cout<<z<<endl ;
            }
        }else if(a == b){
            cout<<z<<endl ;
        }else{
            if(b%2 == 0){
                z -= (b-a) ;
                cout<<z<<endl;
            }else{
                z += (b-a) ;
                cout<<z<<endl ;
            }
        }
    }

    return 0 ;
}