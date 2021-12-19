#include<bits/stdc++.h>
using namespace std;
//given an array of book where the total pages of each books are stored
//total no of strudents assigned that is k
//total no of books that is the size of the array that is n
//constrai are each student must have atleast one books
//student can take book pages in a contigineos way only



//to check if by this given no of pages will the minimummu no of student required are same as given
bool isFesable(int books[],int n,int k,int limit)
{
    int students=1; //for counting the total no student required
    int sum=0; 
    for(int i=0;i<n;i++)
    {
        sum+=books[i];  //finding the sum 
        if(sum>limit)    //if some point sum is greater than limit then 
        {
            students++; //assigning a new student
            sum=books[i];  //we will now assign a new student and find the sum for that student
              
        }
    }

    if(students==k)  //if the no of student that are required is equal to the given no of student then return true
    return true;
    else
    return false; 
}


//function return the minimum pages assgned to a single studemt 
int pageAlocation(int books,int n,int k)
{
//if each student will get atlesst 1 book then if total no of student exceeds the total no of books then it can not be partionates so return -1
if(k>n)
return -1;

//the range where a single student can get alocated pages will be from 
//max page book to total sum of all book pages
int maxpagebook=INT_MIN;
int totalpages=0;
for(int i=0;i<n;i++)
{
    max(maxpagebook,books[i]);
    totalpages+=books[i];
}


//now we will perform binary search to find the mid value
//check by that mid value total no of student can be assigned is equaal to the total no of students we have
//if yess then we will look for less value so search in the left side
//if no means we need to add more pages so that it will be assigned to teh no of students we have
int start=maxpagebook;
int end=totalpages;
int minPage; //the minimum page we are looking for a variable to stor the result
while (strat<=end)
{
    int mis= start+ (end-start)/2;
    if(isFesable(books,n,k,mid))
    {
        //if feasabel then we will be looking for the minimum value 
        //so we will be  searching in the left side
        minPage=mid; //storing the possible answer 
        end=mid;
    }
    else
    {
        //we have to increase our limit to include the required no o fstudent
        start=mid;
    }

}



return minPage;



}