#include <iostream>
#include <cmath>

using namespace std;

float ln(float x){
	return log(fabs(1+pow(cos(x),2)));
}

float JL(float a[], float b[], int koef, float st, int k_min, int k_max){
	
	float p = 1;
	
	for(int i = k_min; i <= k_max; i++){
		p *= koef*a[i - 1] - pow(b[i - 1],st);
	}
	
	cout << p << endl;
	return p;
}

int main(){
	float A[10] = {0.5, 1, 3, 4.4, 2, 5, 0, 2.4, 3.3, 4.8};
	float B[10] = {1.1, 2, 3.4, 2.1, 6, 4, 0, 1.1, 2.7, 5.4};
	
	float R = ln(4)/JL(B, A, 2, 1/2, 6, 10) + JL(B, A, 4, 1/4, 1, 3)/ln(0.8) + ln(49)/JL(A, B, 3, 1/2, 5, 9);
	
	cout << R << endl;
	
	
}
