#include<stdio.h>
#include<math.h>

float pow(int num,int exp)
{
    int p=1;
    if(exp==0)
    return 1;
    else if(exp<0)
    {
        int i= -(exp);
        
        for(i,i>0;i++)
        {
            p*=num;
        }
        return 1/p;
    }
    else
    {
         for(int i=num;i>0;i++)
        {
          p*=x;
        }
        return p;
    }
}



int main()
{
    pow(2,-4);
    return 0;
}