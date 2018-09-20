#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	cout << "Please input number." << endl;
	cout << "we can show you." <<endl; 
	int a = 0;
	cin >> a;
	cout << endl;
	
	for (int i = 1 ; i <= a ; i++)
	{
		cout << setw(a+1-i);
		
		for (int j = 1 ; j <= i*2-1 ; j++)
		{
			cout << i ;
			
		}
		cout << endl;
	}
	
	return 0;
} 

