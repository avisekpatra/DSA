//here we have used the adjusency matrix as the data type for the graph representation

#include<iostream>
#include<queue>
using namespace std;

//let the graph array be gloabal
//i have taken an graph of 7 elemnts
int A[8][8];



//we will take parameter that is the 2d matrix containg the information about the graph as we have use a the aducentcy matrix representation
//int n= no of the vertexs
//int vertex is which vertext we will take first 
//this is similar as level by level traversal in tree
void BFS(int n,int vertex)
{
    //we will use a queue to push the node we just travel
    queue<int> q;
    
    //we will use an array of size n+1 to mark that we have already explored the elemnt
    //if we dont use this and check then we might end up in a infinity loop or cyclic loop
    int checked[n+1];
    //fill it with 0
    for(int i=0;i<=n;i++)
    {
        checked[i]=0;
    }

    //now we will frist explaore the first verstex so we will mark it explore and push it to the queue
    checked[vertex]=1;
    q.push(vertex);

    //we will print the 1st vertex here 
    cout<<vertex<<" ";

    //we will run a while loop till the empty of the queue
    while (!q.empty())
    {
        int v=q.front(); //so now actually we will explaore
        q.pop(); //then pop that vertex as we have already explored

        for(int i=1;i<=n;i++)
        {
            //check if the vertex v have and adjucent with i of not 
            //then check if you have already explored if alredy explored ignore it
            if(A[v][i]==1 && checked[i]==0)
            {
                cout<<i<<" ";
                q.push(i); //then push it to the queue
                checked[i]=1; //and mark it explored
            }
        }
    }
}

int main()
{
    //first filling the matrix with 0
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
           A[i][j]=0;
        }
    
    }
    //then marking the adujecnt aray
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


   //calling the bfs function
    BFS(7,1);
    return 0;
}