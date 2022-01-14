#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter value of n=";
    cin>>n;
    for(i=0;i<n;i++)
    {
       for(j=0;j<=i;j++)
        {
            cout<<n;
            n--;
        }
        n=5;
        cout<<endl;

    }
     for(i=0;i<=n;i++)
    {
       for(j=n;j>=i;j--)
        {
            cout<<n;
             n--;
        }
         n=5;
        cout<<endl;

    }
}
