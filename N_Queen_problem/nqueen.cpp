#include <bits/stdc++.h>
using namespace std;

bool isSafe(int **arr,int n, int x,int y)
{
    int row=0,col=y;
    for(;row<x;row++)
    {
        if(arr[row][col]==1)
        {
            return false;
        }
    }
    row=x,col=y;
    while(row>=0 && col>=0)
    {
        if(arr[row][col]==1)
        {
            return false;
        }
        row--;
        col--;
    }
    row=x,col=y;
    while(row>=0 && col<n)
    {
        if(arr[row][col]==1)
        {
            return false;
        }
        row--;
        col++;
    }
    return true;
}
bool Nqueen(int **arr,int n,int x)
{
    if(x>=n)
    {
        return true;
    }
    for(int col=0;col<n;col++)
    {
        if(isSafe(arr,n,x,col))
        {
            arr[x][col]=1;
        if(Nqueen(arr,n,x+1))
        {
            return true;
        }
        arr[x][col]=0;
        }
    }
    return false;
}
int main()
{
    int n;
    cout<<"Enter number of queens to be added: "<<endl;
    cin>>n;
    int **arr = new int*[n];
    for(int i=0;i<n;i++)
    {
        arr[i] = new int[n];
        for(int j=0;j<n;j++)
        {
            arr[i][j] = 0;
        }
    }
    if(Nqueen(arr,n,0))
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
