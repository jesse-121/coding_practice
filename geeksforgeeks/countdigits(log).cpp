#include<bits/stdc++.h>
using namespace std;

int countdigits(int n){
    return floor(log10(n) + 1) ;
}

int main(){
    int n;
    cin>>n;

    cout<<countdigits(n)<<endl ;

    return 0 ;
}