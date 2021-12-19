#include<iostream>
using namespace std;

char nextLetter(char alphabet[],int n,char letter)
{
    if(n==1 && alphabet[0]>letter)
    return alphabet[0];
    else
    return '$';
    
    if(n==0 ||letter=='z' || letter>=alphabet[n-1])
    return '$';


    int start=0;
    int end=n-1;
    char nextLetter='$';

    while (start<=end)
    {
     int mid= start+ (end-start)/2;
     if(mid+1<=n-1 && alphabet[mid]==letter)
     {
         return alphabet[mid+1];
     }   
     else if(letter<alphabet[mid])
     {
         nextLetter=alphabet[mid];
         end=mid-1;
     }
     else if(alphabet[mid]<letter)
     {
         start=mid+1;
     }
    }

    return nextLetter;
    
}

int main()
{
    char c[]={'a','c','f','m'};
    int n= sizeof(c)/sizeof(c[0]);
    cout<<nextLetter(c,n,'c')<<endl;

    return 0;
}