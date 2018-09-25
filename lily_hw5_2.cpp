//
//  輸入生日月份-5，代表所用的進位
//
//  Created by 洪莉莉 on 2018/9/23.
//  Copyright© 2018年 kiwi. All rights reserved.
//

#include <iostream>
#include <cmath>

void function2  (int a);
void function3  (int a);
void function4  (int a);
void function5  (int a);
void function6  (int a);
void function7  (int a);
void function8  (int a);
void function9  (int a);
void function11 (int a);
void function12 (int a);

using namespace std;
int main ()
{
    int m = 0;
    int a = 0;
    int i = 0;
    //char t[9999] = {0};
    
    cout << "Please input your birthday month" << endl;
    cin >> m;
    
    while (m > 12 || m < 1)
    {
        cout << "Please re input your birthday month between 1-12 " << endl;
        cin >> m;
        i++;
    }
        
            m = m - 5;
            
            if ( m < 0 || m == 0)
            {
                m = m + 12;
            }
            
            //cout << m;  //幾進為表示
            
            if ( m == 1)
            {
                cout << "Please input number" << endl;
                cin >> a;
                cout << "Show you 10-digit representation of the number =  ";
                cout << a;
            }
            
            if ( m == 2)
            {
                cout << "Please input number" << endl;
                cin >> a;
                cout << "Show you 2-digit representation of the number =  ";
                
                function2 (a);
            }
            
            if ( m == 3)
            {
                cout << "Please input number" << endl;
                cin >> a;
                cout << "Show you 3-digit representation of the number =  ";
                
                function3 (a);
            }
            
            if ( m == 4)
            {
                cout << "Please input number" << endl;
                cin >> a;
                cout << "Show you 4-digit representation of the number =  ";
                function4 (a);
            }
            
            if ( m == 5)
            {
                cout << "Please input number" << endl;
                cin >> a;
                cout << "Show you 5-digit representation of the number =  ";
                function5 (a);
            }
            
            if ( m == 6)
            {
                cout << "Please input number" << endl;
                cin >> a;
                cout << "Show you 6-digit representation of the number =  ";
                function6 (a);
            }
            
            if ( m == 7)
            {
                cout << "Please input number" << endl;
                cin >> a;
                cout << "Show you 7-digit representation of the number =  ";
                function7 (a);
            }
            
            if ( m == 8)
            {
                cout << "Please input number" << endl;
                cin >> a;
                cout << "Show you 8-digit representation of the number =  ";
                function8 (a);
            }
            
            if ( m == 9)
            {
                cout << "Please input number" << endl;
                cin >> a;
                cout << "Show you 9-digit representation of the number =  ";
                function9 (a);
            }
            
            if ( m == 10)
            {
                cout << "Please input number" << endl;
                cin >> a;
                cout << "Show you 10-digit representation of the number =  ";
                cout << a;
            }
            
            if ( m == 11)
            {
                cout << "Please input number" << endl;
                cin >> a;
                cout << "Show you 11-digit representation of the number =  ";
                function11 (a);
            }
            
            if ( m == 12)
            {
                cout << "Please input number" << endl;
                cin >> a;
                cout << "Show you 12-digit representation of the number =  ";
                function12 (a);
            }
    
    return 0;
}


void function2 (int a)
{
    int i = 0;
    int sum = 0;
    
    while (a != 0)
    {
        sum = sum + (a%2)*pow(10,i);
        a = a/2;
        i++;
    }
    cout << sum;
}


void function3 (int a)
{
    int i = 0;
    int sum = 0;
    
    while (a != 0)
    {
        sum = sum + (a%3)*pow(10,i);
        a = a/3;
        i++;
    }
    cout << sum;
}


void function4 (int a)
{
    int i = 0;
    int sum = 0;
    
    while (a != 0)
    {
        sum = sum + (a%4)*pow(10,i);
        a = a/4;
        i++;
    }
    cout << sum;
}


void function5 (int a)
{
    int i = 0;
    int sum = 0;
    
    while (a != 0)
    {
        sum = sum + (a%5)*pow(10,i);
        a = a/5;
        i++;
    }
    cout << sum;
}


void function6 (int a)
{
    int i = 0;
    int sum = 0;
    
    while (a != 0)
    {
        sum = sum + (a%6)*pow(10,i);
        a = a/6;
        i++;
    }
    cout << sum;
}


void function7 (int a)
{
    int i = 0;
    int sum = 0;
    
    while (a != 0)
    {
        sum = sum + (a%7)*pow(10,i);
        a = a/7;
        i++;
    }
    cout << sum;
}


void function8 (int a)
{
    int i = 0;
    int sum = 0;
    
    while (a != 0)
    {
        sum = sum + (a%8)*pow(10,i);
        a = a/8;
        i++;
    }
    cout << sum;
}


void function9 (int a)
{
    int i = 0;
    int sum = 0;
    
    while (a != 0)
    {
        sum = sum + (a%9)*pow(10,i);
        a = a/9;
        i++;
    }
    cout << sum;
}


void function11 (int a)
{
    int i = 0;
    char t[9999] = {0};
    
    while (a != 0)
    {
        for( i = 0 ; i < 9999 ; i++)
        {
            if ( a%11 >= 0 && a%11 <=9)
                t[i] = a%11 + '0';
            if ( a%11 == 10)
                t[i] = 'A';
            
            a = a/11;
        }
        i++;
    }
    
    for ( int j = 9999 ; j >= 0 ; j--)
    {
        if ( t[j] != '0')
        {
            cout << t[j];
        }
    }
    
}


void function12 (int a)
{
    int i = 0;
    char t[9999] = {0};
    
    while (a != 0)
    {
        for( i = 0 ; i < 9999 ; i++)
        {
            if ( a%12 >= 0 && a%12 <=9)
                t[i] = a%12 + '0';
            if ( a%12 == 10)
                t[i] = 'A';
            if ( a%12 == 11)
                t[i] = 'B';
            
            a = a/12;
        }
        i++;
    }
    
    for ( int j = 9999 ; j >= 0 ; j--)
    {
        if ( t[j] != '0')
        {
            cout << t[j];
        }
    }
    
}
