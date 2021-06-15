#include<bits/stdc++.h>
using namespace std;

void flip(int arr[],int n){
    int a = 0 ;

    for(int i=0;i<n;i++){
        if(i == 0){
            a = arr[0] ;
        }else{
            int s;
            if(arr[i] != a) {s = i;
            while(arr[i] != a && i<n){
                i++ ;
            }
            cout<<s<< " "<<i-1<<endl ;}
        }
    }
}

int main(){
    int n;
    cin>>n;

    int arr[n] ;
    for(int i=0;i<n;i++){
        cin>>arr[i] ;
    }

    flip(arr,n) ;

    return 0 ;
}