//T(n) = O(n)
//space  - O(1) 

#include<bits/stdc++.h>
using namespace std;

int insert(int arr[],int n,int i,int cap,int x){
    if(n == cap){
        return n ;
    }
    i = i-1;
    for(int k=n;k>i;k--){
        arr[k] = arr[k-1] ;
    }
    arr[i] = x;

    return n+1;
}

int main(){
    int n;
    cin>>n;
    int cap = n+5;
    int arr[n+5] ;
    for(int i=0;i<n;i++) cin>>arr[i] ;

    int i,x;
    cin>>i>>x;

    n = insert(arr,n,i,cap,x);

    for(int i=0;i<n;i++) cout<<arr[i]<<" " ;

    return 0 ;
}