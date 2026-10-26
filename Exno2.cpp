#include<iostream>
using namespace std;
class complex{
public:
int.real;
int.imaginary;
complex()
{
real=0;
imaginary=0;
}
complex(int r,int i)
{
real=r;
imaginary=i;
}
complex addcomplexnumber(complex c1,complex c2)
{
complex res;
res.real=c1.real+c2.real;
res.imaginary=c1.imaginary+c2.imaginary;
return res;
}
};
int main()
{
complex c1(4,5);
cout<<"complex number 1: "<<c1.real<<"+i"<<c1.imaginary<<endl;
complex c2(8,9);
cout<<"complex number 2: "<<c2.real<<"+i"<<c2.imaginary<<endl;
complex c3;
c3=c3.addcomplexnumber(c1,c2);
cout<<"sum of complex number: "<<c3.real<<"+i"<<c3.imaginary<<endl;
complex A(2,7);
cout<<"complex number 1: "<<A.real<<"+i"<<A.imaginary<<endl;

complex B(10,6);
cout<<"complex number 2: "<<B.real<<"+i"<<B.imaginary<<endl;

complex c;
c=c.addcomplexnumber(A,B);
cout<<"sum of complex number: "<<c.real<<"+i"<<c.imaginary;
}
