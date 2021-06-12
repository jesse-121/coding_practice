//T(N) = O(n^2)
//space = O(1) 

#include<bits/stdc++.h>
using namespace std;

void delete_element(vector<int>& v,int k){
    for(int i=k;i<v.size();i++){
        v[i] = v[i+1] ;
    }
    v.resize(v.size()-1) ;
}

void remove_dup(vector<int>& v){

    for(int i=1;i<v.size();i++){
        while(v[i] == v[i-1]){
            delete_element(v,i) ;
        }
    }
}

int main(){
    int n;
    cin>>n;

    vector<int> v;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        v.push_back(a) ;
    }

    remove_dup(v) ;

    cout<<v.size()<<endl; 
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" " ;
    }

    return 0 ;
}