//T(n) = O(N)
//space = O(1)

#include<bits/stdc++.h>
using namespace std;

void move_zero(int* arr,int n){
    int res = 0 ;

    for(int i=0;i<n;i++){
        if(arr[i]){
            swap(arr[i],arr[res]) ;
            res++ ;
        }
    }
}

int main(){
    int n;
    cin>>n;

    int arr[n] ;
    for(int i=0;i<n;i++) cin>>arr[i] ;

    move_zero(arr,n) ;

    for(int i=0;i<n;i++) cout<<arr[i]<<" " ;

    return 0 ;
}