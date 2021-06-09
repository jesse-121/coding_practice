#include<bits/stdc++.h>
using namespace std;

bool isprime(int n){
    if(n == 1) return false ;
    else if(n == 2 || n == 3) return true ;
    else if(n%2 == 0 || n%3 == 0) return false ;
    else{
        for(int i=5;i<=sqrt(n);i+=6){
            if(n%i == 0 || n%(i+2) == 0) return false; 
        }
    }
    return true ;
}

void eratosthenes(bool arr[],int n){
    fill(arr,arr+n+1,true) ;

    for(int j=4;j<=n;j+=2){
        arr[j] = false; 
    }

    for(int j=6;j<=n;j+=3){
        arr[j] = false; 
    }

    for(int i=5;i<=sqrt(n);i+=6){
        if(isprime(i)){
            for(int j=2*i;j<=n;j+=i){
                arr[j] = false; 
            }
        }
        if(isprime(i+2)){
            for(int j=2*(i+2);j<=n;j+=(i+2)){
                arr[j] = false; 
            }
        }
    }
}

int main(){
    int n;
    cin>>n;

    bool arr[n+1] ;

    eratosthenes(arr,n) ;
    cout<<endl ;
    for(int i=2;i<=n;i++){
        if(arr[i]) cout<<i<<" " ;
    }cout<<endl ;

    return 0 ;
}