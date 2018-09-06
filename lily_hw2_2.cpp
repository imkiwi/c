#include <iostream>
using namespace std;
int  main()
{
    double defaultValue = -1000e28;
    double n[10]={defaultValue};
    int arraySize = 10;
    cout << "Please input 10 numbers." << endl;
    int i,j;
    double t;
    for(i=0 ; i<arraySize ; i++)
    {
        cin >> n[i];
    }
    cout << endl;
    
    // bubble sort
    for(i=1 ; i<arraySize ; i++)
    {
        for(j=arraySize-1 ; j >= i ;j--)
        {
            if(n[j-1] > n[j])
            {
                t = n[j-1];
                n[j-1] = n[j];
                n[j] = t;
            }
        }
    }
    
    cout << "top three numbers  ";
    cout << n[9] << "  " << n[8] << "  " << n[7] <<endl;

    system("pause");
    return 0;
}
