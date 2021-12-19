#include<stdio.h>
#include<stdlib.h>

//1st let create a structure for represntation of non zero elemnt which will have the cordinates like 
//index of rows
//index of column
//elemnt at this row and column
//now remember to create 3 coloum representaion we will craete anrry of the instance of elemnt to store it 
struct element 
{
int i; //row index
int j; //column index
int x; //elemnt in those co-ordinates 
};

//now lets created anaother sructure whic will provide us the no of rows ,no of colume and total no of non zero elemnts
struct sparse
{
int n; //total no of rows
int m; //total no of columns
int num; //total no of non zero elemnts

//then we create a instance of struct elemnt a
//and we will take  a pointer 
//as we are creating a dynamic memmory
struct element *ele; //we will use to create an array
};

//now function to create a 2 column represntation or co-ordinate system
void create(struct sparse *s) //call by adress as we are modifying the array 
{
    printf("enter  the dimension that is m and n\n");
    scanf("%d%d"s->m,s->n);
    printf("enter the total no of non zero elemnt\n");
    scanf("%d",s->num);

    //now craeting an arry of the struct elemnt e of size num
    s->ele= (struct element*)malloc(s->num*sizeof(sruct element));
    
        for(int i=0;j<s->num;i++)
        {
            printf("enter the non zero elemnts in the format rows,colummns and total no of elemnt\n");
            scanf("%d%d%d", &s->ele[i].i ,&s->ele[i].i, &s->ele[i].x); //now taking elemnt in he 3 column representation we have created 
        }
    }

  void display(struct sparse s)
    {
        int k=0;
        for(int row=0;i<s.m;i++)
        {
            for(int col=0;j<s.n;j++)
            {
                if(row==s.ele[k].i && col==s.ele[k].j)
                {
                    printf("%d",s.ele[k].x);
                    k++;
                }    
                else
                printf("0");
            }
            printf("\n");
        }
    }

    sparse * add(struct sparse s1,struct sparese s2)
    {
        if(s1.i== s2.i && s1.j== s2.j)
        {
        struct sparse res = {s1.m, s1.n, s1.num+s2.num};
        res.ele = (element*)malloc(res.num*sizeof(struct element));

       int i=0;
       int j=0;
       int k=0;
        while(i<s1.num && j<s2.num)
        {
            if(s1.ele[i].i<s2.ele[j].i)
            {
                res.ele[k++]=s1.ele[i++];
            }
            else if(s1.ele[i].i>s2.ele[j].j)
            {
                res.ele[k++]=s2.ele[j++];
            }
            else if (s1.ele[i].i==s2.ele[j].j)
            {
                if(s1.ele[i].j<s2.ele[j].j)
                {
                    res.ele[k++]=s1.ele[i++];
                }
                else if(s1.ele[i].j>s2.ele[j].j)
                {
                    res.ele[k++]=s2.ele[j++];
                }
                else if(s1.ele[i].j==s2.ele[j].j)
                {
                    res.ele[k]=s1.ele[i];
                    res.ele[k].x= s1.ele[i].x + s2.ele[j].x;
                    k++;
                    i++;
                    j++;

                }
            }
        }
        //if after that some elemnt of a particular sparse is left then we will add it manually usung for loop
        for( ;i<s1.num;i++)
        {
            res.ele[k++]=s1.ele[i];
        }
        for( ;j<s2.num;j++)
        {
            res.ele[k++]=s2.ele[j];
        }

        return res;
        }
        
    } 
  
  int main()
  {
    struct sparse s1={5,6,8};
    struct sparse s2={5,6,9};
    struct sparse s3 = add(s1,s2);

      return 0;
  }
  