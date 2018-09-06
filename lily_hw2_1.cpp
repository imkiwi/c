#include <iostream>
using namespace std;

int main()
{
    int x = 0,y = 0;
    cout<< "Permutations C (x,y) " << endl;
    cout<< "Please input x and y " << endl;
    cin>> x >> y;
    
    cout<< endl;
    cout<< "Your quenction C " << "(" << x << "," << y << ")" <<endl;
    cout<< endl;
    int i=0;
    
    while( i >= 0)
    {
        if( x >= y && x >= 0 && y >= 0 )
        {
            // X!
            double sum=1;
            for(int i=1 ; i<=x ; i++)
            {
                sum=sum*i;
            }
            //cout << sum << endl;
            
            //Y!
            double sum2=1;
            for(int j=1 ; j <= y ; j++)
            {
                sum2=sum2*j;
            }
            //cout << sum2 << endl;
            
            //(X-Y)!
            double sum3=1;
            for(int z=1 ; z <= x-y ; z++)
            {
                sum3=sum3*z;
            }
            //cout << sum3 <<endl;
            
            double c=sum / ( sum2*sum3 );
            cout << "The answer is = " << c << endl;
        }
        
        if( x < 0 || y < 0)
        {
            cout << "Don't input negative number ! " << endl;
        }
        
        if( x < y )
        {
            cout << "Please input x number big than y number ! " << endl;
        }
               
        if( x == 0 && y > 0)
        {
            cout << " Please input x number big than y number !"<< endl;
        }
        
        cin >> x >> y ;
        
        i++    ;
    }
    
    system("pause");
    return 0;
}

