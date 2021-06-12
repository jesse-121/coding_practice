#include<bits/stdc++.h>
using namespace std;

int largst(int arr[],int n){
    int flag=0 ;

    for(int i=0;i<n;i++){
        flag = 1;

        for(int j=0;j<n;j++){
            if(arr[j] > arr[i]){
                flag = 0 ;
                break; 
            }
        }
        if(flag == 1){
            return arr[i] ;
        }
    }
    return 0 ;
}

int main(){
    int n;
    cin>>n;

    int arr[n] ;
    for(int i=0;i<n;i++) cin>>arr[i] ;

    cout<<largst(arr,n) ;

    return 0 ;
}