#include<iostream>
using namespace std;

int main()
{
    char c[]={'A',66,'C','68','D'};


cout<<"in Char type \n";
    for(char n: c)    //here we have specified thAT IT WIll print the char values
    {
        cout<<n<<endl;
    }

cout<<"in integer tyoe \n";
    for(int x: c)    //here we have specify the type as int so it will print all the ascii value i.e only the in values
    {
        cout<<x<<endl;
    }

cout<<"using auto in for each loop \n";
    for(auto item: c)   //here auto means if will automatically sign the data type whic is char  in this case
    {
        cout<<item<<endl;
    }


    //remember that the item in the for each loop just copies the value inside the array 
    //so any changes to that (item) will not affect the value inside the array
    //to reprwesnt teh litral(item) in the for each loop we have to use the refferance
    //we haev to use int &item so that t will directly poiinting the valus in that array
    // now any changes in that item will affect the values in the array
cout<<"using &item \n";
    for(auto &item : c)
    {
        cout<<(++item)<<endl;  //we just change the values in that arrey by ++iteam
    }

    //now to check if the item is cahnged or not
cout<<"new updated array \n";
for(char ch : c)
{
    cout<<ch<<endl;
}

    return 0;
}