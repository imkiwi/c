#include <iostream>
using namespace std;
int main3()
{
	int n = 21;
	
//    cout << "This is Fischer series." <<endl;
//    cout << "Input number,then you can get that value." <<endl;
//    cout << endl;
//    cout << "Please input number  " << endl;
//    cin >> n;
//    
	double a[20] = {0};
	int i=0;
	a[0]=0;
	a[1]=1;
	
	for(i=2 ; i < n ; i++)
	{
		a[i] = a[i-1] + a[i-2];
	}
	
	cout << endl;
	cout << "The number " << n << " of value is   " << a[n-1] << endl;
	
	system("pause");
	return 0;
}
