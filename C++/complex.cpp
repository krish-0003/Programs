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
    float value();
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
float Complex :: value()
{
    return(sqrt(r*r + i*i));
}
int main()
{
    Complex c1,c2,c3,c4,c5,c6;
    cout<<"Enter two complex number : ";
    cin>>c1>>c2;
    c6=c1;
    if(c1==c2)
        cout<<"They r same"<<endl;
    else
        cout<<"They r't same"<<endl;
    if(c1>=c2)
        cout<<"c1 is large"<<endl;
    else 
        cout<<"c2 is large"<<endl;
    cout<<"c1 : "<<c1<<endl;
    cout<<"c2 : "<<c2<<endl;
    cout<<"c1 + c2 : "<<c1+c2<<endl;
    cout<<"c1 - c2 : "<<c1-c2<<endl;
    cout<<"c1 * c2 : "<<c1*c2<<endl;
    cout<<"Value of c1 is : "<<c1.value()<<endl;
    cout<<"Value of c2 is : "<<c2.value();
}
