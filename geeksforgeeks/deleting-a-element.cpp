#include<bits/stdc++.h>
using namespace std;

int delte(int arr[],int n,int x){
    int i=0;
    for(;i<n;i++){
        if(arr[i] == x) break ;
    }
    for(;i<n-1;i++){
        arr[i] = arr[i+1] ;
    }

    return n-1;
}

int main(){
    int n;
    cin>>n;

    int arr[n] ;
    for(int i=0;i<n;i++){
        cin>>arr[i] ;
    }
    int x ;
    cin>>x;

    n = delte(arr,n,x) ;

    for(int i=0;i<n;i++) cout<<arr[i]<<" " ;

    return 0  ;
}