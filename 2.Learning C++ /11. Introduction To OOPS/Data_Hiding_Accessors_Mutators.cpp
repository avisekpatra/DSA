#include<iostream>
using namespace std;

class rectangel
{
    private :   //we have to make the data members private so that user can not directly accses it
    
    float length ;
    float breadth ;


    public :  //we have to make the member fuction public so that we can perforn functions on those members
    
    //mutaror and Accsesor are called property fuction
    //Mutaor: fuctions by which user will assign value to the data members / >>>> write only <<<< 
    void setLength(float l)
    {
        if(l>=0)     //there must be a condition to check if the user is give valid or invalid inputs
        {
            length=l;
        }
        else
        {   
            cout<<"\nshould not give negative value \n";
            length= -(l); //converting the negative value to positive 
        }
    } 

    void setBreadth(float b)
    {
        if(b>=0)
        {
            breadth = b;
        }
        else
        {
             cout<<"\nshould not give negative value \n";
        }
    }

    //Accesor : fuction to show what value is inside the variabels / >>>> read only <<<<
    float getLength()
     {
         return length;
     }

    float getBreadth()
     {
         return breadth;
     }

     //fuctions to perform operations
     
     float area()
     {
         return length*breadth;
     }

     float perimeter()
     {
         return 2*(length + breadth);
     }


};    //remember to end the class

int main()
{

rectangel p ;
//calling the mutaor fuction to write
p.setLength(-6.7);   
p.setBreadth(8.97);

cout<<endl;
//calling the accsesor function to read
cout<<"length is "<<p.getLength()<<" cm "<<endl;
cout<<"braedth is "<<p.getBreadth()<<" cm "<<endl;

cout<<endl;
//calling the operation fucton to get the desired output
cout<<"area is "<<p.area()<<endl;
cout<<"perimeter is "<<p.perimeter()<<endl;
cout<<endl;

return 0;
}