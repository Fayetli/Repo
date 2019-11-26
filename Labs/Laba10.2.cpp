#include <iostream>
#include <cmath>

using namespace std;

float A(float arr1[], float arr2[], int size){
	float s = 0;
	for(int i = 0; i < size; i++){
		s+=arr1[i]*arr2[i];
	}
	return s;
}
float S(float arr[], int size){
	float s = 0;
	for(int i = 0; i < size; i++){
		s+=arr[i];
	}
	return s;
}
float B(float arr[], int size){
	float p = 1;
	for(int i = 0; i < size; i++){
		p*=1/arr[i];
	}
	return p;
}
float D(float arr1[], float arr2[], int size){
	float p = 1;
	for(int i = 0; i < size; i++){
		p*=arr1[i]/arr2[i];
	}
}
int main(){
	float C = 0;
	cin >> C;
	float X[7] = {1.1,2.3,4.5,2.0,4.2,3.1,1.8};
	float Y[7] = {-2.1,3.0,4.1,2.5,4.7,6.8,7.3};
	float W=0;
	W = (A(X, Y, 7)*S(X, 7) + D(X, Y, 7)*S(Y, 7))/
		(B(X, 7)*S(X, 7)+C*S(Y, 7));
	cout << W;
	
	
}
