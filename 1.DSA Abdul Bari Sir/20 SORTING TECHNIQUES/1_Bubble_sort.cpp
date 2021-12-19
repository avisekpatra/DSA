#include<iostream>
using namespace std;

void SwapElement(int *a,int *b);
void bubbleSort(int A[],int n)
{
    int flag; //for checking if the list is sorted that is for adaptivity
    //first loop for each pass for n-1 times
    for(int i=0;i<n-1;i++)
    {
        flag=0; //initialise flag with 0 if it change after enteringthe 2nd for loop the it is not sorted yet

        //2nd for loop for comparing and swaping with the next elemnt and after each pass the checking of the condtion will decrease as after each pass a elemnt get to the right position that is from thr bottom to up direction
        for(int j=0;j<(n-1-i);j++)
        {
            if(A[j]>A[j+1])
            {
                SwapElement(&A[j],&A[j+1]);
                flag=1; //if any swap happend then flag will updated
            }
            
        }
        if(flag==0)
        {
                cout<<"Already Sorted\n";
                break;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
}

void Swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int a[]={5,3,6,1,8,3};
    int n=sizeof(a)/sizeof(a[0]);
    bubbleSort(a,n);
    return 0;
 
}