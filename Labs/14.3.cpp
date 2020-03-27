#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
 
int main()
{
	srand(time(NULL));
	
    int* n = new int(7);
	int *m = new int(5);
 
    int** Array = new int *[*n];
    for (int i = 0; i < *n; ++i)
        Array[i] = new int [*m];
 
 	for (int i = 0; i < *n; i++)
    {
        for (int j = 0; j < *m; j++)
        {
            Array[i][j] = rand()%10;//0-9
        }
    }
    
    for (int i = 0; i < *n; i++)
    {
        for (int j = 0; j < *m; j++)
        {
            cout << Array[i][j]<<" ";
        }
        cout<<endl;
    }
    /////////////////////////////////////////////////// 
	int lastElement;     
   for (int i = 0; i < *n; i++)
    {
    	lastElement = Array[i][*m - 1];
        for (int j = *m - 1; j >= 0; j--)
        {
            Array[i][j + 1] = Array[i][j];
        }
        Array[i][0] = lastElement;
    }
	cout << "////////////////////////////////////////////////////" << endl;
	for (int i = 0; i < *n; i++)
    {
        for (int j = 0; j < *m; j++)
        {
            cout << Array[i][j]<<" ";
        }
        cout<<endl;
    }
    //////////////////////////////////////
    for (int i = 0; i < *n; i++)
        delete[] Array[i];
    delete [] Array;
    delete n;
	delete m;
    return 0;
}
