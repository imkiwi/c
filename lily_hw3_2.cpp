#include <stdio.h>	
int main()
{
	int arraysize = 10;
	int a[arraysize] = {0};
	int b[arraysize] = {0};
	int c[arraysize] = {0};

	FILE *fp3 = fopen("3.txt","r");
	FILE *fp4 = fopen("4.txt","r");
	FILE *fp5;

	
	if(fp3 == NULL || fp4 == NULL)
	{
		printf( "Error! Can't find file" );
		return -1;
	}

	for(int i = 0; i < arraysize; i++)
	{	
		fscanf( fp3, "%d" , &a[i]);
		fscanf( fp4, "%d" , &b[i]);
		c[i] = a[i] + b[i];
	}

	fclose(fp3);
	fclose(fp4);
	
	fp5 = fopen("5.txt","w");
	
	for(int i=0 ; i < arraysize ; i++) 
	{
		fprintf(fp5, "%d\n" , c[i]);
	}

	fclose(fp5);

	return 0;
} 


