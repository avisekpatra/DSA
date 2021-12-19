#include<bits/stdc++.h>
using namespace std;

int A[8][8];

void bfs(int n,int vertex)
{
    int flag[n];
    for(int i=0;i<n;i++)
    {
    flag[i]=0;
    }

    queue<int> q;

    int v=vertex;
    flag[v]++;

    q.push(vertex);

    cout<<vertex<<" ";

    while (!q.empty())
    {
        v=q.front();
        q.pop();

        for(int i=1;i<n;i++)
        {
            if(A[v][i]==1 && flag[i]==0)
            {
                cout<<i<<" ";
                q.push(i);
                flag[i]++;
            }
        }
       
    }
     cout<<endl;
        
}




//recursive functio for dfs in graph

int verified[8]={0};

void dfs(int vertex)
{

    verified[vertex]=1;
    cout<<vertex<<" ";

for(int i=1;i<8;i++)
{
    if(A[vertex][i]==1 && verified[i]==0)
    {
       dfs(i);
    }
}
}

int main()
{
    int n=8;
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
           A[i][j]=0;
        }
    
    }
    A[1][2]=1;
    A[1][3]=1;
    A[1][4]=1;
    A[2][1]=1;
    A[2][3]=1;
    A[3][1]=1;
    A[3][2]=1;
    A[3][4]=1;
    A[3][5]=1;
    A[4][1]=1;
    A[4][3]=1;
    A[4][5]=1;
    A[5][3]=1;
    A[5][4]=1;
    A[5][6]=1;
    A[5][7]=1;
    A[6][5]=1;
    A[7][5]=1;


    dfs(7);
    return 0;
}