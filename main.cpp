/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n , m ;
    cin >> n >> m ; 
    long long a[n];
    long long b[m] ;
    for(long long i = 0 ; i<n;i++)
    {
        cin >> a[i];
    }
    for(long long i = 0 ; i<m;i++)
    {
        cin >> b[i];
    }
    long long c = 0 ;
    for(long long i = 0 ; i<n;i++)
    {
       if(a[i]==b[c])
       {
           c++ ;
       }
    }
    if(c==m)
    {
        cout << "YES" ;
    }
    else
    {
        cout << "NO" ;
    }
    return 0;
}