#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main ()
{

	int n=5;
	int a[n][n] = {0};
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
	
	file.open("2.txt " , ios::out);   
	
	for(int i=0 ; i<n ;i++)
	{
		for(int j=0 ; j<n ;j++)
		{
			file << setw(4) << a[i][j];	
		}
		
		cout << endl;
	}	
	
	file.close();
	
	system("pause");
	return 0;
}
