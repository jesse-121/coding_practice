#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a;int b;
        cin>>a>>b;

        if(b > a){
            int temp = a;
            a = b;
            b = temp ;
        }

        if(2*b>=a){
            if((a+b)%3 == 0) cout<<"YES"<<endl ;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl; 
    }

    return 0 ;
}