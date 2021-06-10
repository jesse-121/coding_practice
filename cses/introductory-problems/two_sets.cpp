#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    long long sum = 0 ;
    for(int i=0;i<=n;i++){
        sum += i ;
    }
    if(sum%2 == 1) {cout<<"NO";return 0  ;}
    else{
        cout<<"YES"<<endl ;
        sum /= 2;
        vector<int> v;
        int z = n;
        while(sum>n){
            v.push_back(n) ;
            sum -= n;
            n -= 1;
        }
        v.push_back(sum) ;

        cout<<v.size()<<endl ;
        for(int i : v) cout<<i<<" " ;
        cout<<endl ;

        cout<<z - v.size()<<endl ;
        for(int i=1;i<=n;i++){
            if(i != sum){
                cout<<i<<" " ;
            } 
        }
        cout<<endl ;
    }
}