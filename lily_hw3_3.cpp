#include <iostream>
using namespace std;
int main()
{
	int a=0;
	cout << "Determine whether it is a prime number. " << endl;
	cout << "Please input a number. " << endl;
	cout << endl;
	cin >> a;

	int b=0;
	
	if( a == 0 )
	{
		cout << "It's a integer." << endl;
	}
	
	else if( a == 1 )
	{
		cout << "It's a positive integer." << endl;
	}
	
	else if( a < 0 )
	{
		cout << "It's negative integer." << endl;
	}
	
	else
	{
		for(int i=2 ; i <= sqrt(a) ; i++)
        {
            if( a%i == 0)
            {
                b += 1;
                break;
            }
        }
        
        if( b > 0 )
            cout << "False" << endl;
        else
            cout << "Ture" << endl;
    }

	system("pause");
	return 0;
} 
