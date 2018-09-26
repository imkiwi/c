#include <iostream>
#include <fstream>

using namespace std;

struct record
{
	char name [100];
	char start [5];
	char end [5];
	int place ;
};

void show (record re);

int main ()
{
	cout << "Please choose what you want to do." << endl;
	cout << "1. Input new deta." << endl;
	cout << "2. History deta." << endl;
	int n;
	cin >> n;
	
	if ( n == 1 )
	{
		cout << endl;
	
		fstream fout ( "1.txt" , ios::app );
	
		record re1;
    	fout << endl;
		fout << "Your name : " ;
		cout << "Your name : " ;
		cin >> re1.name;
		fout << re1.name << endl;
		
		fout << "Start time : ";
		cout << "Start time : ";
		cin >> re1.start;
		fout << re1.start << endl;
		
		fout << "End time : ";
		cout << "End time : ";
		cin >> re1.end;
		fout << re1.end << endl;
		
		fout << "The place : ";
		cout << "The place : ";
		cin >> re1.place;
		fout << re1.place << endl;
	
		show (re1);

		fout.close();
	}
	
	if ( n == 2 )
	{
		fstream fin ( "1.txt" );
	
	    char str;
	
	    if ( !fin )
	    	cout << "Error!" << endl;
	
		while ( !fin.eof() )	 
		{
			fin.get(str);
			cout.put(str); 
		}

		fin.close();
	}
	
	return 0;
} 

void show (record re)
{
	ofstream fout( "test1.txt" );
	
	fout << "Your name : " << re.name << endl;
	fout << "Start time : " << re.start << endl;
	fout << "End time : " << re.end << endl;
	fout << "The place : " << re.place << endl;
	
	fout.close();
}
