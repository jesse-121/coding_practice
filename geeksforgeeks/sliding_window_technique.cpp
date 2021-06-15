#include<bits/stdc++.h>
using namespace std;

bool slide(int arr[],int n,int sum){
    int curr = arr[0] ;
    int s=0,e;

    for(int e=1;e<=n;e++){
        cout<<s<<" " ;
        while(curr > sum && s<e){
            curr -= arr[s] ;
            s++ ;
        }
        if(curr == sum) return true ;

        if(e<n) curr += arr[e] ;
    }

    return curr == sum ;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i] ;
    int sum ;
    cin>>sum; 

    bool s = slide(arr,n,sum);
    cout<<endl<<s<<endl ;

    return 0 ;
}