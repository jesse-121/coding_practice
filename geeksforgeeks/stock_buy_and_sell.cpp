// #include<bits/stdc++.h>
// using namespace std;

// int proft(int arr[],int n){
//     int profit = 0 ;

//     for(int i=0;i<n;i++){      
//         int j ;
//         int flag = 0 ;
//         for(j=i+1;j<n-1;j++){
//             if(arr[j+1]<arr[j] && arr[j] > arr[i]) {flag = 1;break;}
//         }

//         if(flag == 1 || arr[n-1] > arr[i]){
//             profit += (arr[j]-arr[i]) ;
//             i = j+1;
//         }
//     }

//     return profit ;
// }

// int main(){
//     int n;
//     cin>>n;

//     int arr[n] ;
//     for(int i=0;i<n;i++) cin>>arr[i] ;

//     int profit = proft(arr,n) ;
//     cout<<profit<<endl ;

//     return 0 ;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int proft(int arr[],int s,int e){
//     if(e<=s) return 0 ;

//     int profit = 0 ;
//     for(int i=s;i<e;i++){ ;
//         for(int j=i+1;j<=e;j++){
//             int curr = arr[j] - arr[i] + proft(arr,s,i-1) + proft(arr,j+1,e) ;
//             profit = max(profit , curr) ;
//         }
//     }

//     return profit ;
// }

// int main(){
//     int n;
//     cin>>n;

//     int arr[n] ;
//     for(int i=0;i<n;i++) cin>>arr[i] ;

//     int profit = proft(arr,0,n-1) ;
//     cout<<profit<<endl ;

//     return 0 ;
// }


#include<bits/stdc++.h>
using namespace std; 

void prft(int arr[],int n){
    int profit=0;

    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]) profit += arr[i] - arr[i-1] ;
    }

    cout<<profit<<endl ;

}

int main(){
    int n;
    cin>>n;

    int arr[n] ;
    for(int i=0;i<n;i++) cin>>arr[i] ;

    prft(arr,n);

    return 0 ;
}