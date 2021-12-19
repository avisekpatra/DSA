#include<iostream>
using namespace std;

void word(int n)
{ 
    int rev=0;

    while(n>0)
    {
      int  digit = n%10;
        n/=10;
        rev= rev*10 + digit;
    }
    while(rev>0)
    {
        int rev_digit=rev%10;
        rev/=10;
         switch(rev_digit)
        {
            
            case 1 : cout<<"one ";
            break;
            case 2 : cout<<"two ";
            break;
            case 3 : cout<<"three ";
            break;
            case 4 : cout<<"four ";
            break;
            case 5 : cout<<"five ";
            break;
            case 6 : cout<<"six ";
            break;
            case 7 : cout<<"seven ";
            break;
            case 8 : cout<<"eigth ";
            break;
            case 9 : cout<<"nine ";
            break;
            default : cout<<"zero ";

        }
    }
}

int main()
{
int n;
cin>>n;

word(n);

    return 0;
}