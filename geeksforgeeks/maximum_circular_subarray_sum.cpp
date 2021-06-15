#include<bits/stdc++.h>
using namespace std;

int sum(int arr[],int n){
    int ans = 0 ;
    int curr = 0 ;

    for(int i=0;i<n;i++){
        if(i == 0){
            ans = arr[i] ;
            curr = arr[i] ;
        }
        else{
            curr = max(curr + arr[i],arr[i]) ;
            ans = max(curr,ans) ;
        }
    }
    return ans ;
}

int sum2(int arr[],int n){
    int v[2*n-1] ;
    int total = 0 ;
    for(int i=0;i<n;i++) {total += arr[i] ;v[i] = arr[i] ;}
    for(int i=n;i<2*n-1;i++){ v[i] = arr[i-n] ;}

    int ans = 0 ;
    int curr = 0 ;

    for(int i=0;i<n;i++){
        if(i == 0){
            ans = v[i] ;
            curr = v[i] ;
        }else{
            curr = min(curr + v[i],v[i]) ;
            ans = min(curr,ans) ;
        }
    }
    return total - ans ;
}

int main(){
    int n;
    cin>>n;

    int arr[n] ;
    for(int i=0;i<n;i++) cin>>arr[i] ;

    int ans = function(arr,n) ;

    cout<<ans<<endl ;

    return 0 ;
}









// #include<bits/stdc++.h>
// using namespace std;

// int sum(int arr[],int n){
//     int v[2*n] ;

//     for(int i=0;i<n;i++){
//         v[i] = arr[i] ;
//     }
//     for(int i=0;i<n-1;i++){
//         v[i+n] = arr[i] ;
//     }

//     int ans = 0 ;
//     int curr = 0 ;

//     for(int i=0;i<=n;i++){
//         if(i == 0){
//             ans = v[i] ;
//             curr = v[i] ;
//         }
//         else{
//             int j = i;
//             while(curr + v[j] >= v[j] && j<i+n-1){
//                 curr += v[j] ;
//                 ans = max(curr,ans) ;
//                 j++ ;
//             }
//             curr = v[i] ;
//         }
//     }

//     return ans ;
// }

// int main(){
//     int n;
//     cin>>n;

//     int arr[n] ;
//     for(int i=0;i<n;i++) cin>>arr[i] ;

//     int ans = sum(arr,n) ;

//     cout<<ans<<endl ;

//     return 0 ;
// }