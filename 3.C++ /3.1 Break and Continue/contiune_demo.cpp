#include <iostream>
using namespace std;

int main()
{
   
    for(int i=1;i<=31;i++)
    {
        if(i%2==0) /*if the condition is satisfied then 
                     continue means it will skip every thing what is coming after 
                     it for that ieration of the loop */
        continue;

        cout<<"day "<<i<<": you can go to out\n";
    }

    return 0;
}