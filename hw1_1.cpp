#include<iostream>
#include<cmath>
using namespace std;

double real(double a,double b,double c);
int main()
{
   double a,b,c,d,x1,x2;
    cout<<"���G����Ƭ� ax^2+bx+c=0"<<endl<<"�Ш̧ǿ�Ja�Bb�Bc�T�Ӧ��z��"<<endl;
	cin>>a>>b>>c;
    cout<<"�z��J����{�����G"<<endl;
	if(b<0)
    {cout<<a<<"x^2+"<<"("<<b<<")"<<"x+"<<c<<"=0"<<endl;}
    else
    {cout<<a<<"x^2+"<<b<<"x+"<<c<<"=0"<<endl;}
    cout<<"���G����Ʀh�������ڬ��G"<<endl;
   d=pow(b,2)-(4*a*c);
    real(a,b,c);
    
    system("pause");
    return 0;
}




double real(double a,double b,double c)
{
    double d=pow(b,2)-(4*a*c);
    double x1,x2,x3,x4;
    
    if(d>=0)
    {x1=((-b)+(pow(d,(0.5))))/(2.0*a);
     x2=((-b)-(pow(d,(0.5))))/(2.0*a);
     cout<<"x1="<<x1<<endl<<"x2="<<x2<<endl;}
    
    else
    {
        x1=((-b)/(2.0*a));
        x2=(pow((-d),(0.5))/(2.0*a));
        
         if(x1==0)
           {cout<<x2<<"i"<<endl;
            cout<<x2<<"i"<<endl;}
        else
        {cout<<"x1="<<x1<<"+("<<x2<<")i"<<endl;
         cout<<"x2="<<x1<<"-("<<x2<<")i"<<endl;}
        
     };
 }
