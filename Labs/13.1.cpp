#include <iostream>
#include <malloc.h>//to take size of array

int main(){
	
	float *D = new float[6] {3.5, -6.3, 2.1, 0.1, 5.1, -2.1};//uniform init, work with gnu++ 11, c++ 11 and higher
	//D[i] == *(D + i), i use and 1 and 2 variant
	
	for(size_t i = 0; i < _msize(D) / sizeof(float); i++){
		std::cout << D[i] << ", " << std::flush;//flush - clear hash
	}
	std::cout << std::endl;
	
	
	float *sum = new float(0);
	for(size_t i = 0; i < _msize(D) / sizeof(float); i++){
		if(*(D + i) < 0.25){
			*sum = *sum + *(D + i);
		}
	}
	std::cout << "Sum = " << *sum << std::endl;
	
	delete sum;
	delete [] D;
	return 0;
}
