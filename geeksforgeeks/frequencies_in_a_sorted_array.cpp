//T(N) = O(N)
//space = O(1) 

#include<bits/stdc++.h>
using namespace std;

void frequencies(int arr[],int n){
    int k=1;

    for(int i=1;i<=n;i++){
        if(i == n){ cout<<arr[i-1]<<" "<<k<<endl ;; break ;}

        if(arr[i] == arr[i-1]){
            k++ ;
        }
        else{
            cout<<arr[i-1]<<" "<<k<<endl ;
            k=1;
        }
    }

}

int main(){
    int n;
    cin>>n;

    int arr[n] ;
    for(int i=0;i<n;i++) cin>>arr[i] ;

    frequencies(arr,n) ;
    
    return 0 ;
}