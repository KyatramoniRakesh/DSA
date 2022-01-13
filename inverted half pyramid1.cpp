#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter the value n=";
    cin>>n;
    for(i=n;i>=0;i--)
    {
            for(j=0;j<=n;j++)
            {
                if(j>=n-i)
                cout<<"*";

                else{
                    cout<<" ";
                }
            }
            cout<<endl;
    }

}
