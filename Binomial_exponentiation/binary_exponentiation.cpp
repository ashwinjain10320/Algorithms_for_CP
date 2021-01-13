#include<bits/stdc++.h>
using namespace std;
long long int bin_exp(long long int a,long long int n)
{
    long long int res=1,mult = a;
    while(n>0)
    {
        if(n & 1)
        {
            res*=mult;
        }
        mult *= mult;
        n>>=1;
    }
    return res;
} 
int main()
{
    int a,n;
    cin>>a>>n;
    cout<<bin_exp(a,n);
    return 0;
}