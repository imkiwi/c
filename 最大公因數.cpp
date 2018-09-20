#include <iostream>

using namespace std;
void getgcd (int num1 , int num2 , int *result);
int main ()
{
	int num1 = 0;
	int num2 = 0;
	int result = 0;
	cin >> num1 >> num2;
	getgcd (num1 , num2 , &result);
	cout << result;
	return 0;
}

void getgcd (int num1 , int num2 , int *result)
{
	if(num1 < num2)
	{
		int t = num1;
		num1 = num2;
		num2 = t;
	}
	
	for(int i = num2 ; i >= 1 ; i--)
	{
		if( num1%i == 0 && num2%i == 0)
		{
			*result = i;
			break;
		}
		
	}

}
