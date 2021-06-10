#include<bits/stdc++.h>
using namespace std;

int main(){
    int i;
    cin>>i;

    for(int n=1;n<=i;n++){
        cout<<((long long)(n*n)*((n*n)-1))/2 - (n-2)*(n-1)*4<<endl ;
    }

    return 0 ;

}