#include<isotream>
using namespace std;

double taylor(int x,int n)
{
    static double sum = 1; //we will store the value of the reduced sum equation which we get by taking common 
    if(n==0) //when n is 0 it has reached the last aka first term
    return sum;

    sum= 1+ (x/n)*sum;  //this is the reduced equation get by taking coomon
    return taylor(x,n-1); // call the recursive fuction agian
}
int main()
{
    cout<<taylor(2,4);
    return 0;
}