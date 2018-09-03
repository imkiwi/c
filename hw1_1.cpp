#include<iostream>
#include<cmath>
using namespace std;

void real(double a,double b,double c);
int main1()
{
    double a,b,c;
    cout << "此二次函數為 ax^2+bx+c=0"<< endl;
    cout << "請依序輸入a、b、c三個有理數"<< endl;
    cin>>a>>b>>c;
    cout<<"您輸入的方程式為："<<endl;
    if(b < 0)
    {
        cout<<a<<"x^2+"<<"("<<b<<")"<<"x+"<<c<<"=0"<<endl;
    }
    else
    {
        cout<<a<<"x^2+"<<b<<"x+"<<c<<"=0"<<endl;
    }
    cout<<"此二次函數多項式的根為："<<endl;
    //d=pow(b,2)-(4*a*c);
    real(a,b,c);
    
    system("pause");
    return 0;
}

void real(double a,double b,double c)
{
    double d = pow(b,2)-(4*a*c);
    double x1,x2;
    
    if(d >= 0)
    {
        x1 = ((-b)+(sqrt(d)))/(2.0*a);
        x2 = ((-b)-(sqrt(d)))/(2.0*a);
        cout<<"x1="<<x1<<endl<<"x2="<<x2<<endl;
    }
    else
    {
        x1=((-b)/(2.0*a));
        x2=(sqrt(d)/(2.0*a));
        
        if(x1==0)
        {
            cout<<x2<<"i"<<endl;
            cout<<x2<<"i"<<endl;
        }
        else
        {
            cout<<"x1="<<x1<<"+("<<x2<<")i"<<endl;
            cout<<"x2="<<x1<<"-("<<x2<<")i"<<endl;
        }
        
    }
}
