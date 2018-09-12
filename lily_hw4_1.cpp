#include <iostream>
using namespace std;
int main()
{
	int a=0;
	
	cout << "We can show all Prime number less than you input number." << endl;
	cout << "Please input number" <<endl;
	
	cin >> a;
	cout << endl;
	cout << "All the Prime number: " << endl;
	int i;
	
	for(i=2 ; i<a ; i++)
	{
		int b=0;
		for(int j=2 ; j<i ; j++)
		{
			if( i%j == 0)
			b=b+1;  
		}	 
		
		if(b == 0)
		{
			cout << i << endl;
		}
	}
	
	

	

	system("pause");
	return 0;
} 
