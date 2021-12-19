#include<bits/stdc++.h>
using namespace std;

//for each term in a pilynomial
class term
{
    int coef; //coeficient of the particular term in the polynomial
    int exp; //is the exponential power of that term in the polynomial
};

class polynomial
{
    public:
    int no_terms; //no of non zero terms in the polynomial

  term *t;// craeting an pointer object of term to store the details of term and also craete an array of term  
  //contsructor
  polynomial(int n)
  {
      no_terms=n;
      t = new term[no_terms];
  }
  friend ifstream & operator >>(ifstream &if , polynomial p);
  int result(int x);


  
 
};

ifstream & polynomial::operator >>(ifstream &if,polynomial *p);
{
    for(int i=0;i<p.no_terms;i++)
    {
        cin>>p.t[i].coef>>p.t[i].exp;
    }
}


int polynomial::result(int x)
{
    int sum=0;
    for(int i=0;i< no_terms;i++)
    {
        sum+= t[i].coef*pow(x,t[i].exp);
    }
    return sum;
}

polynomial* add(polynomial p1, polynomial p2)
{
    polynomial res(p1.no_terms + p2.no_terms);

int i=0; //for traversing in p1
int j=0;  //for traversing in p2
int k=0;//for traversing in res

while(i < p1.no_terms && j< p2.no_terms)
{
if(p1.t[i].exp>p2.t[j].exp)
{
    res.t[k]=p1.t[i];
    k++;
    i++;
}
else if(p1.t[i].exp<p2.t[j].exp)
{
    res.t[k]=p2.t[j];
    k++;
    j++;
}
else if(p1.t[i].exp == p2.t[j].exp)
{
    res.t[k].coef = p1.t[i].coef + p2.t[j].coef;
    res.t[k].exp= p1.t[i].exp;
    k++;
    i++;
    j++;
}
}
for(;i<p1.no_terms;i++)
{
    res.t[k++]=p1.t[i++];
}

for(;j<p2.no_terms;j++)
{
    res.t[k++]=p2.t[i++];
}

return res;
}