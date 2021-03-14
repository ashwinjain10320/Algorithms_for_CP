#include <bits/stdc++.h>
using namespace std;

bool issafe(int **arr,int x,int y,int n)
{
    if(x<n && y<n && arr[x][y]==1)
    {
        return true;
    }
    return false;
}

bool ratinmaze(int **arr,int **sol,int x,int y,int n)
{
    if(x==n-1 && y==n-1)
    {
        sol[x][y]=1;
        return true;
    }
    if(issafe(arr,x,y,n))
    {
        sol[x][y]=1;
        if(ratinmaze(arr,sol,x+1,y,n))
        {
            return true;
        }
        if(ratinmaze(arr,sol,x,y+1,n))
        {
            return true;
        }
        sol[x][y]=0;
        return false;
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    int **arr = new int*[n];
    for(int i=0;i<n;i++)
    {
        arr[i] = new int[n];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int **sol = new int*[n];
    for(int i=0;i<n;i++)
    {
        sol[i] = new int[n];
        for(int j=0;j<n;j++)
        {
            sol[i][j]=0;
        }
    }
    if(ratinmaze(arr,sol,0,0,n))
    {
        for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<sol[i][j]<<" ";
        }
        cout<<endl;
    }
    }
    return 0;
}
