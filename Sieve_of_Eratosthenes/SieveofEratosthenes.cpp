#include<bits/stdc++.h>
using namespace std;
void SieveofEratosthenes(int n)
{
    int s[100] = {0};
    for(int i=2;i<n;i++)
    {
        if(s[i]==0)
        {
            for(int j=i*i;j<n;j+=i)
            {
                s[j] = 1;
            }
        }
    }
    for(int i=2;i<n;i++)
    {
        if(s[i]==0)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
int main()
{
    int a;
    cout<<"Enter a number for finding all prime numbers smaller than it: ";
    cin>>a;
    SieveofEratosthenes(a);
    return 0;
}