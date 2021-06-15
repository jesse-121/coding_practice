#include<bits/stdc++.h>
using namespace std;

void sum_conse(int arr[],int n,int k){
    int sum = arr[0] ;
    int sidx = 0 ;
    int ans = -1e9 ;
    int num = 1;
    for(int i=1;i<n;i++){
        if(num == k){
            sum -= arr[sidx] ;
            sidx++ ;
            num--;
        }
        num++;
        sum += arr[i] ;
        if(num  == k) ans = max(sum,ans) ;
    }

    cout<<ans<<endl ;
}

int main(){
    int n;
    cin>>n;

    int arr[n] ;
    for(int i=0;i<n;i++){
        cin>>arr[i] ;
    }
    int k ;
    cin>>k;

    sum_conse(arr,n,k) ;

    return 0 ;
}