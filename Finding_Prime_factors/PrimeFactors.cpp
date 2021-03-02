#include<bits/stdc++.h>
using namespace std;
void PrimeFactors(int n)
{
    int spf[100] = {0};
    for(int i=2;i<=n;i++)
    {
        spf[i] = i;
    }
    for(int i=2;i<=n;i++)
    {
        if(spf[i]==i)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                if(spf[j]==j)
                {
                    spf[j]=i;
                }
            }
        }
    }
    int tmp=n;
    while(tmp!=1)
    {
        cout<<spf[tmp]<<" ";
        tmp /= spf[tmp]; 
    }
    cout<<endl;
}
int main()
{
    int a;
    cout<<"Enter a number for finding its prime factors: ";
    cin>>a;
    PrimeFactors(a);
    return 0;
}