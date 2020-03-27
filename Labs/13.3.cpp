#include <ctime>
#include <cstdlib>
#include <iostream>
#include <malloc.h>

int main(){
	srand(time(0));
	int *arr = new int[12];
	
	for(size_t i = 0; i < _msize(arr) / sizeof(int); i++){
		*(arr + i) = rand()%500;
		std::cout << *(arr + i) << ", " << std::flush;
	}
	std::cout << std::endl;
	
	int min = 499, max = 0;//b-e rand 0-499
	for(size_t i = 0; i < _msize(arr) / sizeof(int); i++){
		max = max*(*(arr + i) <= max) + *(arr + i)*(*(arr + i) > max);
		min = min*(*(arr + i) >= min) + *(arr + i)*(*(arr + i) < min);
		//or
		//
		//if(*(arr + i) < min)
		//	min = *(arr + i);
		//if(*(arr + i) > max)
		//	max = *(arr + i);
	}
	std::cout << "Max - min = " << max << " - " << min << " = " << max - min << std::endl;
	
	delete [] arr;
	return 0;
}
