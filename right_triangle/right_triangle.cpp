#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j;
    cout<<"enter n value : ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=0;j<i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
