#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n;
    cout<<"enter the value n=";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=n-1;j>i;j--)
        {
            cout<<" ";
        }
         for(k=1;k<=2*i-1;k++)
        {
            cout<<"*";
        }
          cout<<endl;
    }

    for(i=0;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(k=n;k>=2*i-1;k--)
        {
            cout<<"*";
        }
            cout<<endl;
   }
}
