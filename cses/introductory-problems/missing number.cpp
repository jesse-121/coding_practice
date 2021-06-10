#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long sum = 0 ;
    for(int i=0;i<n-1;i++){
        int a;
        cin>>a;
        sum += a; 
    }
    cout<< (n)*(n+1)/2 - sum <<endl ;

    return 0 ;
}