#include<bits/stdc++.h>
using namespace std;

int graph[5][5];
int v=5;
int visited[5]={0}; //fill with 0 as no vertext is initially visited
int weight[5]={INT_MAX}; //initlaily marked with Int max //climit is the INT_MAX header file
int parent[5]; //the weight from which vertex to adjucent vertext the parent[i] is vertex and i is the adjucent vertex

int minVertex()
{
    int min_vertex=-1;
    for(int i=0;i<n;i++)
    {
        //if the minvertex is -1 that id the 1st iteration then we will skip the comparision as -1 index dont really exist so we used an or statement it 
        if(visited[i]==0    &&   ( min_vertex==-1 || weight[i]<weight[min_vertex]) )
        {
            min_vertex=i;
        }

    }
    return min_vertex;
}

void prims(int start)
{
    weight[start]=0;
    parent[start]=-1;

    //as it is a spanning tree so we will be including all the vertex
    for(int j=0;j<5;j++)
    {
    //find min weight vertex which is not been explored    
    int vertex= minVertex();
    visited[vertex]=1;
    //exploring its adjucdent vertex and update there weight
    for(int i=0;i<5;i++)
    {
        if(graph[vertex][i]>0 && visited[i]==0)
        {
            if(graph[vertex][i]<weight[i])
            {
                weight[i]=graph[vertex][i];
                parent[i]=vertex;
            }
        }
    }
    }

}