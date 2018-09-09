#include <stdio.h>
int main()
{
	int arraysize = 10;
	int a[arraysize];
	int t=0;
	FILE *fptr = fopen("1.txt" , "r");

	
	if(fptr == NULL)
	{
		printf( "Error! Can't find file" );
		return -1;
	}

	for(int i=0 ; i < arraysize ; i++)
	{	
		fscanf( fptr, "%d" , &a[i]);
		printf("%d\n" , a[i]);      
	}


	fclose(fptr);
	
	for (int i=0 ; i < arraysize ; i++)
	{
		for(int j = arraysize-1 ; j>i ; j--)
		{
			if(a[j] > a[i])     
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	
	fptr = fopen("2.txt" , "w");
		for(int i=0 ; i < arraysize ; i++) 
	{
		fprintf(fptr, "%d\n" , a[i]);
	}

	fclose(fptr);

	return 0;
} 
