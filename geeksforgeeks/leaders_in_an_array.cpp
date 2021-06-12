#include<bits/stdc++.h>
using namespace std;

vector<int> leader(int arr[],int n){
    vector<int> v; 

    v.push_back(arr[n-1]) ;
    int mx = arr[n-1] ;
    for(int i=n-2;i>=0;i--){
        if(arr[i] > mx){
            v.push_back(arr[i]) ;
            mx = arr[i] ;
        }
    }

    return v;
}

int main(){
    int n;
    cin>>n;

    int arr[n] ;
    for(int i=0;i<n;i++){
        cin>>arr[i] ;
    }

    vector<int> v = leader(arr,n) ;
    reverse(v.begin(),v.end()) ;
    for(int i:v) cout<<i<<" " ;

    return 0 ;
}