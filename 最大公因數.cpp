#include <iostream>
using namespace std;
int main ()
{
	int a = 0;
	int b = 0;


	cout << "�P�_�̤j���]��" << endl;
	cout << "Please input two number." <<endl;
	
	cin >> a >> b;
	
	if( a < b)
	{
		int t=0;
		t = a;
		a = b;
		b = t;
		
	}

	for(int i = b ; i >1 ; i--)
	{
		if( a%i == 0 && b%i ==0 )
		{
			cout << i << endl;
			break;
		}
	}

	
	system("pause");
	return 0;
}
