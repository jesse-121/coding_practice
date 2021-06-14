#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int ans = 1 ;
    int curr = 1 ;
    int lst = 0 ;
    for(int i=0;i<n;i++){
        int a ;cin>>a; 

        if(i == 0){
            lst = a; 
        }else{
            if((lst + a)%2){
                curr++ ;
                ans = max(ans, curr) ;
            }
            else{
                curr = 1;
            }

            lst = a;
        }
    }

    cout<<ans<<endl;

    return 0 ;
}

