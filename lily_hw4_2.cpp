#include <iostream>
#include <fstream>
#include <iomanip>

#define n 5
using namespace std;

int main ()
{
	//int n=5;
	int a[n][n] = {0};
	int b[n][n] = {0};
	int c[n][n] = {0};
	
	fstream file;
	file.open("1.txt" , ios::in);  
	if(!file)
		cout << " Error! " << endl;
	
	for(int i=0 ; i<n ;i++)
	{
		for(int j=0 ; j<n ;j++)
		{
			file >> a[i][j];
			cout << setw(4) << a[i][j];	  
		}
		
		cout << endl;
	}
	cout << endl;
	
	file.close();
	
	
	file.open("2.txt" , ios::in);   
	if(!file)
		cout << " Error! " << endl;
	
	for(int i=0 ; i<n ;i++)
	{
		for(int j=0 ; j<n ;j++)
		{
			file >> b[i][j];
			cout << setw(4) << b[i][j];	 //good
		}
		cout << endl;
	}
	cout << endl;
	
	file.close();


	cout << "The value of a[i][j] * b[i][j] is" << endl;
	cout << endl;
	for(int i=0 ; i<n ; i++)
	{
		for(int j=0 ; j<n ;j++)
		{
			for(int k=0 ; k<n ;k++)
			{
				c[i][j] += a[i][k] * b[k][j];
				
			}
			cout << setw(4) << c[i][j];
			 
		}
		cout << endl;
	}
	
	
	file.open("3.txt " , ios::out);   
	
	for(int i=0 ; i<n ;i++)
	{
		for(int j=0 ; j<n ;j++)
		{
			file << setw(4) << c[i][j];	
		}
		
		cout << endl;
	}	
	
	file.close();
	
	system("pause");
	return 0;
}
