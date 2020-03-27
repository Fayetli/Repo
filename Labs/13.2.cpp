#include <iostream>
#include <cmath>

int factorial(int n){
	if (n == 0)//0, beacause i want to solve 0!
		return 1;
	else return n*factorial(n - 1);//recurse function
}

int main(){
	float *B = new float[16];

	int N = 0;
	for(float X = 0.1; X <=1.61; X+=0.1, N++){
		float s = 0;//is local variable, so i didn`t use dynamic memory
		for(int i = 0; i <=5; i++){
			s+= pow(X, i)/factorial(2*i);
		}
		*(B + N) = s;
	}
	
	
	for(N = 0; N < 16; N++){
		std::cout << *(B + N) << ", " << std::flush;
	}
	
	delete [] B;
	return 0;
}
