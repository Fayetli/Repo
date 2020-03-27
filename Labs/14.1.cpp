# include <iostream>

using namespace std;
 
int main()
{
	
	
    int* n = new int(3);
	int *m = new int(4);
 
    float** Array = new float *[*n];
    for (int i = 0; i < *n; ++i)
        Array[i] = new float [*m];
 
 	{//now "staticArray" is local variable and `ll delete after second figure brecket, but variables in this array `ll be in
	 //our dynamic array "Array" 	
		float staticArray[3][4] = {
		{-0.7, 1.2, 3.5, 0.3},
		{0.5, 0.7, -1.1, -3.5},
		{0.9, 0.8, 2.7, 1}
		};//for example 
    	for (int i = 0; i < *n; i++)
    	{
        	for (int j = 0; j < *m; j++)
        	{
       	    Array[i][j] = staticArray[i][j];
        	}
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
    float *sum = new float(0);
	for (int i = 0; i < *n; i++)
    {
        for (int j = 0; j < *m; j++)
        {
            if(Array[i][j] >= -1 && Array[i][j] <= 1)
            	*sum = *sum + Array[i][j];
		}
    }
 	cout << "Sum = " << *sum << endl;
	////////////////////////////////////////////////////
    for (int i = 0; i < *n; i++)
        delete[] Array[i];
    delete [] Array;
    delete n;
	delete m;
	delete sum;
    return 0;
}
