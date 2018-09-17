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
		
		for (int j = 1 ; j <= i ; j++)
		{
			cout << setw(i-1);
			cout << i ;
			
		}
		cout << endl;
	}
	
	return 0;
} 
