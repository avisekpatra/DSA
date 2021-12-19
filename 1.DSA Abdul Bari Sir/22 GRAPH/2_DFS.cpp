#include<iostream>
using namespace std;

//glaobally declaring the graph 
//n=7 ,no of the vertex
int A[8][8];

//globally declaring the visited array as we will be using a recursive function so if we declare it inside then it will reasig every time on each function call
int visited[8]={0}; //initially marked with 0 as no elemnts is explored yet
int n=7;
void DFS(int vertex)
{
    //base condition to check if any vertex is already visited or not
    
    if(visited[vertex]==1)
    return;

    //if not visited the we will print the veretex and marked as explored
    cout<<vertex<<" ";
    visited[vertex]=1;

    //then using for loop we will find the adjucent vertext from the matrix
    for(int i=1;i<=n;i++)
    {   
        //if a adjucdent is there and also not visited then 
        //by recursively explore that index adb perform DFs for that
        if(A[vertex][i]==1 && visited[i]==0)
        {
            DFS(i);
        }
    }
}

int main()
{


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


    DFS(7);

    
    return 0;
}

