#include<stdio.h>
#include<stdlib.h>

struct Array
{   
    int A[10];
    int size;
    int length;

};

//Display all element functio
void Display(struct Array arr)
{
    for(int i=0;i<arr.length;i++)
    {
        printf("%d ", arr.A[i]);
    }
    printf("\n");
}
 
//add function
void Add(struct Array *arr, int num)
{
   if(arr->length<arr->size)
   {   
       int i= arr->length;
       
       arr->A[i] = num;
   } 
}

//insert elemnt at an index function
void Insert(struct Array *arr, int index, int num)
{
    if(index>=0 && index<arr->length)
    {
        int i = arr->length;
        
        for(  ;i>index;i--)
        {
         arr->A[i] = arr->A[i-1];
        }
        
        arr->A[index]= num;
        arr->length++;
    }
}

//Delete an elemnt in a particular index and return the deleted elememt
int Delete(struct Array *arr,int index)
{
    if(index>=0 && index<arr->length)
    {   int x = arr->A[index];

        int i = index;
        
        for( ;i<arr->length-1;i++) 
        {
            arr->A[i]= arr->A[i+1];
        }
        
        arr->length--;
        
        return x;
    }
}

//searching methods
//1.linear search 
int LinearSearch(struct Array *arr,int key)
{
    for(int i=0;i<arr->length;i++)
    {
        if(a[i]==key)
        {   
           //trasposition  ---> swap to previou element then return the currernt index which was of previous elemnt
           //  nt a= arr->A[i];
           //  arr->A[i]= arr->A[i-1];
           //  arr->A[i-1]=a;
           //  return i-1;

            //move to head ---> swap with 1st element
            int a= arr->A[i];
            arr->A[i]= arr->A[0];
            arr->A[0]=a;

            return 0;
        }
    }
    return -1;
}

//2. Binary search can be done using while loop and also using recursion
//binary search uisng while loop
int BinarySearch(struct Array arr,int key)
{  
    int begin=0;
    int end= arr.length-1;
    while(begin<=end)
    {
        int mid=(begin+end)/2;

        if(key == arr.A[mid])
        return mid;

        else if(key > arr.A[mid])
        begin= mid+1;

        else if(key < arr.A[mid])
        end = mid-1;
    }

    return -1;
}

//get function to return the element at that index
int Get(struct Array arr,int index)
{
    return arr.A[index];
}

//set function to add new value to existing value in an index
void Set(struct Array *arr,int index, int num)
{
    if(index>=0 && index<arr->length)
    {
        arr->A[index]= num;
    }
}

//max function to find the maximum elemnt in the array
int Max(struct Array arr)
{
    int max= arr->A[0];
    for(int i=1;i<arr.length;i++)
    {
        if(arr.A[i]>max)
        max = arr.A[i];
    }

    return max;
}

//min function to find the min elemnt in the array
int Min(struct Array arr)
{
    int min=arr.A[0];
    for(int i=1;i<arr.length;i++)
    {
        if(arr.A[i]<min)
        min= arr.A[i];
    }
    return min;
}

//sum fuction to find the sum of all elemnt in the array
int Sum(struct Array arr)
{
    int sum=0;
    for(int i=0;i<arr.length;i++)
    {
        sum+=arr.A[i];
    }
    return sum;
}

//int Avg function to find average 
int Avg(struct Array arr)
{
    int avg= sum(arr)/arr.length;
    return avg;
}

//reverse an array using swap
void reverse(struct Array *arr)
{ 
    int i=0;
    int j=arr->length-1;
    while(i<j)
    {
     int temp=arr->A[i];
     arr->A[i]=arr->A[j];
     arr->A[j]=temp;
     i++;
     j--;
    }
}
//shift
//left shift
void leftshift(struct Array *arr)
{
    for(int i=0;i<arr->length-2;i++)
    {
        arr->A[i]=arr->A[i+1];
    }
    arr->A[arr->length-1]=0;

}
//right shift
void rightshift(struct Array *arr)
{
    int i=arr->length-1;
    for( ;i>=0;i--)
    {
     arr->A[i]=arr->A[i-1];
    }
    arr->A[0]=0;
}

//rotate
//rught rotate
void rightrotate(struct Array *arr)
{
    int i=arr->length-1;
    int x = arr->A[i];
    for( ;i>=0;i--)
    {
     arr->A[i]=arr->A[i-1];
    }
    arr->A[0]=x;
   

}

//leftrotate
void leftrotate(struct Array *arr)
{
    int x= arr->A[0];
    for(int i=0;i<arr->length-2;i++)
    {
        arr->A[i]=arr->A[i+1];
    }
    arr->A[arr->length-1]=x;
}

//insert elemnt in a sorted array
void insertSort(struct Array *arr,int num)
{
    if(arr->length<arr->size)
    {
  int i = arr->length-1;
  while(i>=0 && arr->A[i]>num)  //must include this two function
   {
      arr->A[i+1]=arr->A[i];
      i++;

   }
    arr->A[i+1]=num;
    }

}

//issort
int isSort(struct Array arr)
{
    for(int i=0;i<arr.length;i++)
    {
        if(arr.A[i]>arr.A[i+1])
        return 0;
    }
    return 1;
}

//partition the positive elemnt int the right side and negative no in leftside
void partition(struct Array *arr)
{
    int i=0;
    int j= arr->length-1;

while(i<j)
{   
    if(arr->A[i]<0)  //checks if found any positive no then hold that value of i to perform swap bellow
    i++;

    if(arr->A[j]>0)   //chcec if any negative value is found then hold thAT VALUE
    j--;


    swap(arr->A[i],arr->A[j]);  //we will perform a swap hence i havent written a swap fuction
}
}

//merging 2 sorted array to form a single array

int * merging(struct Array *arr1,struct Array *arr2)
{
    
    int *c = (Array*)malloc((arr1->length + arr2->length) * sizeof(Array));
    int i=0;
    int j=0;
    int k=0;

    while(i<arr1->length  &&  j<arr1->length)
    {
    if(arr1->A[i]<arr2->A[j])
    c[k++]=arr1->A[i++];

    if(arr2->A[j]<arr1->A[i])
    c[k++]=arr2->A[j++];

    if(arr1->A[i]==arr2->A[j])
    {
        c[k++]=arr1->A[i++];
        j++; 
    }
    } 

     for( ;i<arr1->length;i++) //if arr1 have remaining element
     c[k++]=arr1->A[i];

     for(; j<arr2->length;j++)  //if arr2 have remaining element
     c[k++]=arr2->A[j];


     return *c;
   

}









int main()
{
    //for demo i am using a assigned sturcture
    struct Array arr1 ={{1,2,3,4,5},10,5};
   
    Add(&arr1,45);
   
    Insert(&arr1,3,16);
   
    printf("%d is delted\n",Delete(&arr1,0));
   
    Display(arr1);
    return 0;
}