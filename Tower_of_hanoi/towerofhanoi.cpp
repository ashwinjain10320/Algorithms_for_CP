#include<bits/stdc++.h>
using namespace std;
void towerofhanoi(int n,char source,char dest,char helper)
{
    if(n==0)
    {
        return;
    }
    towerofhanoi(n-1,source,helper,dest);
    cout<<"Move from "<<source<<" to "<<dest<<endl;
    towerofhanoi(n-1,helper,dest,source);
}

int main()
{
    int r;
    cout<<"Enter number of rings"<<endl;
    cin>>r;
    towerofhanoi(r,'A','C','B');
    return 0;
}
