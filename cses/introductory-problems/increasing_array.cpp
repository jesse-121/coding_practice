#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    long long sum = 0 ;
    int a,b ; cin>>b;
    for(int i=1;i<n;i++){
        cin>>a; 
        if(a < b){
            sum += (b - a); 
        }else{
            b = a;
        }
    }

    cout<<sum<<endl ;

    return 0 ;
}