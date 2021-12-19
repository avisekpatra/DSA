#include<bits/stdc++.h>
using namespace std;

int graph[5][5]={0};
int distance[5]={INT_MAX};
bool visited[5]={false};

void addEdgeWeight(int graph[][Av],int v,int Av,int w)
{
    graph[v][Av]=w;
}

int minDistanceVertex()
{
    int minVertex=-1;
    for(i=0;i<5;i++)
    {
        if(visited[i]==false && (minVertex==-1 || distance[i] < distance[minVertex]))
        {
            minVertex=i;
        }
    }
    return minVertex;
}

void dijstra(int start)
{
    distance[start]=0;
  
  //we will find the sortest distance to all vertex
  for(int j=0;j<5;j++)
  {
    
    int v=minDistanceVertex();
    
    
    visited[v]=true;

    for(int i=0;i<5;i++)
    {
        if(graph[v][i]>0 && visited[i]==false)
        {
            int newDistance =  distance[v]+graph[v][i];
            if(newDistance < distance[i])
            {
                distance[i]=newDistance;
            }
        }
    }
  }

}


int main()
{
    
    
    return 0;
}