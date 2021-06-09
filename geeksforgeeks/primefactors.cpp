#include<bits/stdc++.h>
using namespace std;

vector<int> primefactors(int n){
    vector<int> v; 

    if(n <= 1) return v;

    while(n%2 == 0){
        v.push_back(2) ;
        n /= 2;
    }
    while(n%3 == 0){
        v.push_back(3) ;
        n /= 3;
    }

    for(int i=5;i<=sqrt(n);i+=6){
        while(n%i == 0){
            v.push_back(i) ;
            n /= i;
        }
        while(n%(i+2) == 0){
            v.push_back((i+2)) ;
            n /= (i+2);
        }
    }

    if(n > 3) v.push_back(n) ;

    return v; 
}

int main(){
    int n;
    cin>>n;

    vector<int> v = primefactors(n) ;

    for(int i : v) cout<<i<<" " ;
    cout<<endl ;

    return 0 ;
}