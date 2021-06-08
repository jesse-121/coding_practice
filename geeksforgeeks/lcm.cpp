#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(b == 0) return a;
    return gcd(b,a%b) ;
}

int lcd(int a,int b){
    return (a*b)/gcd(a,b) ; 
}

int main(){
    int a,b;
    cin>>a>>b;

    cout<<lcd(a,b); 
    return 0 ;
}