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
    int Sum = 0;
    cout << "Sum = " << flush;
	for (int i = 0; i < *n; i++)
    {
    	if(i != 0)
    		cout << " + " << flush;
    	int max = Array[i][0];
    	int x = i;
    	int y = 0;
        for (int j = 1; j < *m; j++)
        {
            if(Array[i][j] > max){
            	max = Array[i][j];
            	x = i;
            	y = j;
            }
		}
		Sum += max;
		cout << max << "(" << x + 1 << ", " << y + 1 << ")" << flush;
    }
 	cout << " = " << Sum << endl;
	////////////////////////////////////////////////////
    for (int i = 0; i < *n; i++)
        delete[] Array[i];
    delete [] Array;
    delete n;
	delete m;
    return 0;
}
