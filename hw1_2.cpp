#include<iostream>
using namespace std;
double real(double a1,double b1,double c1,double a2,double b2,double c2);
int main()
{
    double a1,b1,c1,a2,b2,c2;
    double x,y;
    
    cout<<"���p�ߤ�{����:"<<endl<<"(a1)x+(b1)y=c1"<<endl<<"(a2)x+(b2)y=c2"<<endl;
	 
    cout<<"�Ш̧ǿ�J a1 / b1 / c1 / a2 / b2 / c2 "<<endl;
    cin>>a1>>b1>>c1>>a2>>b2>>c2;
    
    cout<<"�A��X���p�ߤ�{����:"<<endl;
    
    if(b1>0&&b2>0)
	{ cout<<a1<<"x+"<<b1<<"y="<<c1<<endl;
      cout<<a2<<"x+"<<b2<<"y="<<c2<<endl;
	}
	
	else if(b1<0&&b2>0)
	 {
	 	cout<<a1<<"x+("<<b1<<")y="<<c1<<endl;
        cout<<a2<<"x+"<<b2<<"y="<<c2<<endl;
	 }
    
    else if(b1>0&&b2<0)
    {
    	cout<<a1<<"x+"<<b1<<"y="<<c1<<endl;
        cout<<a2<<"x+("<<b2<<")y="<<c2<<endl;
	}
	
	else if(b1<0&&b2<0)
	{
	   	cout<<a1<<"x+("<<b1<<")y="<<c1<<endl;
	   	cout<<a2<<"x+("<<b2<<")y="<<c2<<endl;
	}
	
	 
    real(a1,b1,c1,a2,b2,c2);
    
    system("pause");
    return 0;
}

double real(double a1,double b1,double c1,double a2,double b2,double c2)
{
    double d=((a1*b2)-(a2*b1));
    double dx=((c1*b2)-(c2*b1));
    double dy=((a1*c2)-(a2*c1));

    double nx=dx/d;
    double ny=dy/d;
    if(d==0)
    {
        if(dx==0&&dy==0)
        {
            cout<<"�L���h��"<<endl;
        }
        else
        {
            cout<<"�L��"<<endl;
        }
    }
    
    else
    {
        cout<<"("<<nx<<","<<ny<<")"<<endl;
    }
    
}
