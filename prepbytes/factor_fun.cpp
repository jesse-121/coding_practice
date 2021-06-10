#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n] ;
    for(int i=0;i<n;i++){
        cin>>arr[i] ;
    }
    int freq[100001] = {0} ;

    vector<int> v ;

    for(int i=0;i<n;i++){
        int val = 0 ;

        for(int j=1;j<=sqrt(arr[i]);j++){
            if(arr[i]%j == 0 ){
                if(arr[i]/j == j){
                    val += freq[j] ;
                }
                else{
                    val += freq[j] ;
                    val += freq[arr[i]/j] ;
                }
            }
        }
        freq[arr[i]]++ ;
        v.push_back(val) ;
    }

    for(int i : v) cout<<i<< " " ;

    return 0 ;
}