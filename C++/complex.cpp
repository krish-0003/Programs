#include<iostream>
using namespace std;
class Complex
{
    int r, i;
    public:
    friend istream &operator>>(istream &, Complex &);
    friend ostream &operator<<(ostream &, Complex);
    Complex operator+(Complex);
    Complex operator-(Complex);
    Complex operator*(Complex);
    void operator=(Complex);
    int operator==(Complex);   
    int operator>=(Complex);
    int operator<=(Complex);
};
istream &operator>>(istream &din, Complex &c)
{
    cin>>c.r>>c.i;
    return din;
}
ostream &operator<<(ostream &dout, Complex c)
{
    cout<<c.r<<" "<<c.i;
    return dout;
}
Complex Complex :: operator+(Complex c)
{
    Complex temp;
    temp.r = r + c.r;
    temp.i = i + c.i;
    return temp;
}
Complex Complex :: operator-(Complex c)
{
    Complex temp;
    temp.r = r - c.r;
    temp.i = i - c.i;
    return temp;
}
Complex Complex :: operator*(Complex c)
{
    Complex temp;
    temp.r = r * c.r;
    temp.i = i * c.i;
    return temp;
}
void Complex :: operator=(Complex c)
{
    r = c.r;
    i = c.i;
    cout<<"= is called"<<endl;
}
int Complex :: operator==(Complex c)
{
    if(r == c.r && i == c.i)
        return 1;
    else
        return 0;
}
int Complex :: operator<=(Complex c)
{
    if(r <= c.r && i <= c.i)
        return 1;
    else
        return 0;
    
}
int Complex :: operator>=(Complex c)
{
    if(r >= c.r && i >= c.i)
        return 1;
    else
        return 0;
}
int main()
{
    Complex c1,c2,c3,c4,c5,c6;
    cout<<"Enter tow complex number : ";
    cin>>c1>>c2;
    c6=c1;
    if(c1==c2)
        cout<<"They r same";
    else
        cout<<"They r't same";
    if(c1>=c2)
        cout<<"c1 is large";
    else 
        cout<<"c2 is large";
    cout<<c1<<endl<<c2<<endl;
    cout<<c1+c2<<endl<<c1-c2<<endl<<c1*c2<<endl<<c6;
}