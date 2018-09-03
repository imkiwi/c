//
//  lili2.cpp
//  lili_1
//
//  Created by Bill Chang on 2018/9/3.
//  Copyright © 2018年 Bill Chang. All rights reserved.
//
#include<iostream>
using namespace std;

void real(double a1,double b1,double c1,double a2,double b2,double c2);

int main()
{
    double a1,b1,c1,a2,b2,c2;
    
    cout<<"此聯立方程式為:"<<endl;
    cout<<"(a1)x+(b1)y=c1"<<endl;
    cout<<"(a2)x+(b2)y=c2"<<endl;
    
    cout<<"請依序輸入 a1 / b1 / c1 / a2 / b2 / c2 "<<endl;
    cin>>a1>>b1>>c1>>a2>>b2>>c2;
    
    cout<<"你輸出的聯立方程式為:"<<endl;
    
    if(b1 > 0)
    {
        cout<<a1<<"x+"<<b1<<"y="<<c1<<endl;
    }
    else if(b1 < 0)
    {
        cout<<a1<<"x"<<b1<<"y="<<c1<<endl;
    }
    
    if(b2 > 0)
    {
        cout<<a2<<"x+"<<b2<<"y="<<c2<<endl;
    }
    else if(b2 < 0)
    {
        cout<<a2<<"x"<<b2<<"y="<<c2<<endl;
    }
    
    real(a1,b1,c1,a2,b2,c2);
    
    system("pause");
    return 0;
}

void real(double a1,double b1,double c1,double a2,double b2,double c2)
{
    double d = ((a1*b2)-(a2*b1));
    double dx = ((c1*b2)-(c2*b1));
    double dy = ((a1*c2)-(a2*c1));
    
    double nx=dx/d;
    double ny=dy/d;
    if(d==0)
    {
        if(dx==0&&dy==0)
        {
            cout<<"無限多解"<<endl;
        }
        else
        {
            cout<<"無解"<<endl;
        }
    }
    else
    {
        cout<<"("<<nx<<","<<ny<<")"<<endl;
    }
}
