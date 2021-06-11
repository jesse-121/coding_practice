#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    int ans = 0 ;
    int arr[27]={0};
    for(unsigned int i=0;i<s.size();i++){

        if(arr[s[i]-'A']%2) {ans-- ;}

        arr[s[i]-'A']++ ;

        if(arr[s[i]-'A']%2) {ans++ ;}
    }

    if(ans>1) cout<<"NO SOLUTION"<<endl ;
    else{
        vector<char> v;
        int x=-1;
        for(int i=0;i<26;i++){
            if(arr[i]%2) x = i ;
            else{
                int z = arr[i]/2 ;
                while(z--) v.push_back(i+'A') ;
            }
        }
        
        while(arr[x]-- && x>=0){
            v.push_back(x+'A') ;
        }

        for(int i=25;i>=0;i--){
            if(arr[i]%2) continue ;
            else{
                int z = arr[i]/2 ;
                while(z--) v.push_back(i+'A') ;
            }
        }


        for(char c: v) cout<<c ;
    }

    return 0 ;
}