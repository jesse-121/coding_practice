#include<bits/stdc++.h>
using namespace std;

void revrs(int *arr,int low,int high){
    while(low < high){
        swap(arr[low],arr[high]) ;
        low++ ;
        high-- ;
    }
}

void print(int arr[],int n){
    for(int i=0;i<n;i++) cout<<arr[i]<<" " ;

    cout<<endl ;
}

void left_rotate(int arr[],int n,int d){
     revrs(arr,0,d-1);
     revrs(arr,d,n-1);
     revrs(arr,0,n-1) ;
}

int main(){
    int n;
    cin>>n;

    int arr[n] ;
    for(int i=0;i<n;i++) cin>>arr[i] ;

    int d;
    cin>>d;

    d%=n ;
    left_rotate(arr,n,d);

    for(int i=0;i<n;i++) cout<<arr[i]<<" " ;

    return 0; 
}