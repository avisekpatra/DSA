#include<bits/stdc++.h>
using namespace std;

class Array 
{
    private:
    
    int *Arr; //pointer tu create an array in heap
    int size; //that is the capacity of the array
    int length; //no of elemnts in the array

    public:
    Array(int size=10);
    int length();
    int size();
    void setSize(int n);
    void add(int num);
    void insert(int index,int num);
    void Display();
    int LinearSearch(int key);
    int BinarrySearch(int begin,int end,int key);
    int BinarySearch(int key);
    int Get(int index);
    void Set(int index,int n);
    int Max();
    int Min();
    int Sum();
    int Avg();
    void Revese();
    void LeftShift();
    void RightShift();
    void RotateRight();
    void RotateLeft();
    void Insert(int n)
    void Partition();
    bool isSort();
    int* Merge(Array arr2);
    int* Union(Array arr2);
    int* intersection(Array arr2);
    int* Difference(Array arr2); 

    ~Array();

    }; //class ends here
   
   
    //constructor
    Array::Array(int size=10)
    {
      this->size=size;
      Arr = new int[size];
      length=0;
    }

    //Accsesor
    int Array::length() //return the current length
    {
        return length;
    }
    int Array::size()  //retuen the size of the array
    {
        return size;
    }



    //mutators
    //to increase the size of the Array
    void Array::setSize(int n)
    {
        size=n; //we have increase the size 
        //now we have to inxcrese the size of the Array by transfering all element in this array to a newly created array of the new size
        int *temp=new int[size];
        for(int i=0;i<length;i++)
        {
            temp[i]=Arr[i];
        }
        delete Arr; //delete the previous array stored in the Arr
        Arr=temp;//point the Arr to temp
        temp=Null;//now point temp to Null

    }

    //facilators
    //function to add element contigeous if we dont know the index to add it
    void Array::add(int num)
    {
        Arr[length]= num; //add the element in the index no length as length-1 index whould be the last element
        length++;
    }

    //function to insert elemnt at aparticulart index
    void Array::insert(int index,int num)
    { 
    try  //user may try to insert elemnt in the index beyond array size sp exception
      { 
          if(index>=0 && index>=size)
          throw 1;
        int i = length; //we will start the iteration from end elemnt which is stored in length-1 th index but we want to move that element to index length
       //for loop to create a vacancy
        for(  ; i<index ;i--)
            Arr[i]=Arr[i-1]; //elemnt which is stored in length-1 th index but we want to move that element to index length
        
        Arr[index]=num; //now we will insert the value to the index where we just create a vacancy
        length++; //as now the length is increased by 1
      }
    catch(int e)
    {
        cout<<"array index bound enter index less than of the size\n";
    }
    }

    //to display all element in the array
    void Array::Display()
    {
    for(int i=0;i<length;i++)
    cout<<Arr[i]<<" ";

    cout<<endl;
    }

    //delete function to delete a num in the particular index
    void Array::delete(int index)
    {
        if(index>=0 && index<size)
        {    
            int x= Arr[index];
            int i= index;
            for( ;i<length-1;i++)
            {
                Arr[i]=Arr[i+1];
            }
            length--;
            cout<<x<<" is deleted from index "<<index<<endl;

        }
    }

    //searching methods
    
    //1: linear search 
    int Array::LinearSearch(int key)
    {
        for(int i=0;i<length;i++)
        {
            if(Arr[i]==key)
            {
                //trasposition  ---> swap to previou element then return the currernt index which was of previous elemnt
                // int x = a[i];
                // a[i]= a[i-1];
                // a[i-1]= x;
                // return x-1;

                //move to head ---> swap with 1st element and return 0 as it is the 1st index
                int a = a[i];
                a[i]=a[0];
                a[0]=a;
                return 0;

            }
        }

    return -1; //if the search is unsucessfull then return -1 as index can not be less than 0 that is negative
    
    }

    //2 Binary search can be done using while loop and also using recursion
    //binarry sezrch using recursion
    int Array::BinarrySearch(int begin,int end,int key)
    { 
        //condition to check if elemnets are preent of not
        if(begin<=end)   //this means elemnts are prsent and in while loop this means that the elemnt is not presnt
       {
           int mid= (begin + end)/2;
           if(key==Arr[mid])
           return mid;

           else if (key > Arr[mid])
           return BinarrySearch(mid+1,end,key); // in teh place of begin parameter pass teh new begin value

           else if(key < Arr[mid])
           return BinarrySearch(begin,mid-1,key);

       }

       return -1;
    }

    //binary search uisng while loop which is better than recursive fuction
    int Array::BinarySearch(int key)
    {  
           int begin=0;
           int end= length-1;
           while(begin<=end)
           {
           int mid=(begin+end)/2;

           if(key == Arr[mid])
           return mid;

           else if(key > Arr[mid])
           begin= mid+1;

           else if(key < Arr[mid])
           end = mid-1;
           }

        return -1;
    }

    //get fuction to get the value at the particular index
    int Array::Get(int index)
    {
        if(index>=0 && index< length)
         return Arr[index];
    }

    //set(index, num) to replace a elemnt in a perticular index
    void Array::Set(int index,int n)
    {
      if(index>=0 && index<length) //when dealing with indx must check if the index is valid or not
      Arr[index] = n;
    }

    //max() to find the maximum no in the array
    int Array::Max()
    {
        int max=INT_MIN;
        for(int i=0;i<length;i++)
        {
            if(Arr[i]>max)
            max = Arr[i];
        }
        return max;
    }

    //min() to find the min valu in the array
    int Array::Min()
    {
        int min = INT_MAX;
        for(int i=0;i<length;i++)
        {
            if(Arr[i]<min)
            min= Arr[i];
        }

        return min;
    }

    //sum() total sum of all element 
    int Array::Sum()
    {
        int sum=0;
        for(int i=0;i<length;i++)
        sum+=Arr[i];

        return sum;
    }

    //avg() to find the average of the ellemnets
    int Array::Avg()
    {
        return Sum()/length ;
    }


    //reverse an array using swaping
    void Array::Reverse()
    {
       int i=0; //iterator to start ferom the begin 
       int j=length-1; //iterator to start from the end
       while(i<j) //as this is valid till this poiint
       {
         //swap the value with last elemnt onward with first elemnt onwarad  
         int temp=Arr[i];
         Arr[i]=Arr[j];
         Arr[j]=temp;

         i++;
         j--;
       }
    }

    //leftShift an array that is elemnts will be shifting by 1 from right to left and the left most elemnt will be gone 
    void Array::LeftShift()
    {
        for(int i=0;i<length-1;i++) 
        {
            Arr[i]=Arr[i+1]; //shift value from rigth to left
        }
        Arr[i]=NULL; //as the rigth most elemnt that is the index length-1 will be Null as it was shifted
    }

    //rightshift taht is moving from left to right and the leftmost elemnt will be assigned to 0 as it can not be assigned to null as it is an arry and it is suppose to contigeou
     void Array::RightShift()
     {   if(length<size)
         {
         for(int i=length-1;i>0;i--)
         {
          Arr[i]=Arr[i-1];
         }
         Arr[0]=0;
         }
     }

     //rotate (cycle)that is when rightshift or left shift happen the insted the valu is vanised it will be assigned to the left space like a cycle
    void Array::RotateRight()
    {   
        int i=length-1; //as we need it so we declared the iterator and initialie it 
        int x= a[i];    //must conserve the value which is goig to be shifted as we can add it to the alternative end
        for(  ;i>0;i--) //loop for shifting
         {
          Arr[i]=Arr[i-1];
         }
         Arr[0]=x; //now assigning the elment at the other end that is in rightrotaion it is 0
    }

    //leftRotate
    void Array::RotateLeft()
    {
        int i=0;
        int x= a[i];
        for( ;i<length-1;i++)
        {
            Arr[i]=Arr[i+1];
        }
        Arr[i]=x;
    }
    //insert(elemnt) - insert function but for sorted array no index is goiven
    //cheching must me done from the end and perform shifting from left to right till the num is smaller than the current elemnt
    void Array::Insert(int n)
    { 
        if(length<size)
        {
       int i=length-1;
          while(a[i]>a) //run the loop from the end till the condition
          { 
              Arr[i]=Arr[i-1]; //shiift the value from left to right 
              i--;
          } 
         Arr[i+1]=n; //when the condtion failed the i+1 is the position where the value will go try to draw it in the copy and understand
        }
    }   
    //function to put all the negative value in the left side and positive value in the right side
    //partition function
    void Array::Partition()
    {
        //we need 2 iterator 
        int i=0; //start from the beging and it will for finding the positive no ,conditon shouuld be like this that if negative no then increase by 1
        int j=length-1; //start from the end and it is to find and store the index of negative element in the right side of the array
     while(i<j)   
    {
        while(Arr[i]<0) //if the no is less than then +1 if it find positive no the the index will be unchanged and will be used for swaping
        i++;
        while (Arr[j]>=0) //if negative value found then the index is unchanged and will be used to swap value found by the abobe while codition
        j--;

        swap(Arr[i],Arr[j]);
    }
    
        
    }


    //isSort() function to return bool value if the array is sorted or not
    bool Array::isSort()
    {
        bool check=false;
        for(int i=0;i<length;i++)
        {
            if(Arr[i]<=Arr[i+1])
            check = true;
            else
            {
            check = false;
            return false;
            }
        }
        return true;
    }

    //merging 2 sorted array and converting into one sorted array
    int* Array::Merge(Array arr2)  //that is merging the current array with arr2
    { 
        int *c =new int[length + arr2.length]; 
        int i=0;// the array which is gping to mearge with arr2
        int j=0;//arr2
        int k=0;//array c

  while(i<length && j<arr2.length) //it will fo on till one array is completely filled
  {
        if(Arr[i]<arr2.Arr[j])  
        c[k++]=Arr[i++];

        if(arr2.Arr[j]<Arr[i]) 
       c[k++]=Arr[j++];

       if(Arr[i]==arr2.Arr[j])
       {
           c[k++]=Arr[i];
           j++;
       }
  }
    
    //when the above loop is over then there might be one array is left and didnt completely filles
    //so we will fill the rest of the array with a for loop 
    
    for(;i<length;i++)//if arr1 is not filled completely
    c[k++]=Arr[i];
 
    for(;j<arr2.length;j++) //if arr2 is not completely filled
    c[k++]=arr2.Arr[i];

    return *c;

    }

    //  SET operation in 2 sorted arrays
    //union is same as the merging of two array
     int* Array::Union(Array arr2) 
     {
        int *c =new int[length + arr2.length]; 
        int i=0;// the array which is gping to mearge with arr2
        int j=0;//arr2
        int k=0;//array c

  while(i<length && j<arr2.length) //it will fo on till one array is completely filled
  {
        if(Arr[i]<arr2.Arr[j]) 
        c[k++]=Arr[i++];

        if(arr2.Arr[j]<Arr[i]) 
       c[k++]=Arr[j++];

       if(Arr[i]==arr2.Arr[j])
       {
           c[k++]=Arr[i];
           j++;
       }
  }

    //when the above loop is over then there might be one array is left and didnt completely filles
    //so we will fill the rest of the array with a for loop 
    
    for(;i<length;i++)//if arr1 is not filled completely
    c[k++]=Arr[i];
 
    for(;j<arr2.length;j++) //if arr2 is not completely filled
    c[k++]=arr2.Arr[i];

    return *c;

    }


    //intersection 
    int* Array::intersection(Array arr2) 
     {
        int *c =new int[length + arr2.length]; 
        int i=0;// the array which is gping to mearge with arr2
        int j=0;//arr2
        int k=0;//array c

  while(i<length && j<arr2.length) //it will fo on till one array is completely filled
  {
        if(Arr[i]<arr2.Arr[j]) //instead copy the value we will just iterate forwar
        i++;

        if(arr2.Arr[j]<Arr[i])  //instead copy the value we will just iterate forwar  
        j++;

       if(Arr[i]==arr2.Arr[j])  //only when the elemnts are same then only copy the value
       {
           c[k++]=Arr[i];
           j++;
       }
   }

    return *c;

    }


    //difference
     int* Array::Difference(Array arr2) 
     {
        int *c =new int[length + arr2.length]; 
        int i=0;// the array which is gping to mearge with arr2
        int j=0;//arr2
        int k=0;//array c

  while(i<length && j<arr2.length) //it will fo on till one array is completely filled
  {
        if(Arr[i]<arr2.Arr[j]) //instead copy the value we will just iterate forwar
        c[k++]=Arr[i++];

        if(arr2.Arr[j]<Arr[i])  //instead copy the value we will just iterate forwar  
        j++;

       if(Arr[i]==arr2.Arr[j])  //only when the elemnts are same then only copy the value
       {
           i++;
           j++;
       }    
   }
       //if the arr1 is left then add the rest elemnt as we cannot add anything from the arr2
       //arr1 is thw array with whome difference is taken
       for(;i<length;i++)
       c[k++]=Arr[i];

    return *c;

    }


Array::~Array() //destrructor at the end
{
    delete []Arr; //as the array is created in heap
}



int main()
{
    //creating an object of array
    Array a;

    //now taking the size as input
    cout<<"enter the size of the array \n";
    cin>>a.size;
    
    //now creating an array of size n in the heap so new keyword is used
    a.Arr= new int[a.size];

    //asigning the length to 0 as it has no element
    a.length=0;

    //to fill the array with no of elemnts so ask the user a no which must be less than or equal to size
    int n;
    cout<<"enter the no of elemnts you wannt to add\n";
    cin>>n;

    //now lets fill the array
    cout<<"enter the elements no\n";
    for(int i=0;i<n;i++)
    {
        cin>>a.Arr[i];
    }
 
     //now the length that is no of elemnt in the array is n so assign it so that we can use it in the function coming
    a.length=n;

    //a function to display all elments
    a.Display();
    cout<<endl;

    //add a new elemnt
    a.add(19);
    cout<<"current array after adding new elemnt\n";
    a.Display();
    
    //insert an element
    a.insert(4,10); 
    cout<<"current array after the insert\n";
    a.Display();

    //to check if the array is sorted or not
    if(a.isSort())
    {cout<<"sorted array\n";}
    else
    {cout<<"not sorted array\n";}
    






    return 0;
}
