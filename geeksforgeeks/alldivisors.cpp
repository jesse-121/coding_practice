#include<bits/stdc++.h>
using namespace std;

vector<int> alldivisors(int n){
    vector<int> v ;
    int i ;
    for(i=1;i<sqrt(n);i++){
        if(n%i == 0){
            v.push_back(i) ;
        }
    }
    for(;i>=1;i--){
        if(n%i == 0){
            v.push_back(n/(i)) ;
        }
    }

    return v; 
}

int main(){
    int n;
    cin>>n;

    vector<int> v = alldivisors(n) ;
    for(int i : v) cout<<i<< " " ;

    return 0 ; 
}