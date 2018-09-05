#include <iostream>
using namespace std;
int  main()
{
	double n[10]={-1000e28,-1000e28,-1000e28,-1000e28,-1000e28,-1000e28,-1000e28,-1000e28,-1000e28,-1000e28};
	
	cout << "Please input 10 numbers." << endl;
	int i,j;
	double t;
	for(i=0 ; i<10 ; i++)
	{
		cin >> n[i]; 	
	}
	cout << endl;

	
	for(i=1 ; i<10 ; i++)
	{
		for(j=10-1 ; j >= i ;j--)
		{
			if(n[j-1]>n[j])
			{
				t=n[j-1];
				n[j-1]=n[j];
				n[j]=t;
				
			}
		}
	
	
	}
	/*for(int i=0 ; i<5 ;i++)
	{
		cout << n[i] << endl;
	}*/

	cout << "top three numbers  ";
	cout << n[9] << "  " << n[8] << "  " << n[7] <<endl;

	
	system("pause");
	return 0;
}
