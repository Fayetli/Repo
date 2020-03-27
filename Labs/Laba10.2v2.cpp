#include <iostream>
#include <cmath>

using namespace std;

float Sum(float array[]){
	float s = 0;
	
	for(int i = 0; i < 7; i++){
		s += array[i];
	}
	
	return s;
}

float Dob(float array[]){
	float p = 1;
	
	for(int i = 0; i < 7; i++){
		p *= 1/array[i];
	}
	
	return p;
}

int main(){
	
	float X[7] = {1.1, 2.3, 4.5, 2.0, 4.2, 3.1, 1.8};
	float Y[7] = {-2.1, 3.0, 4.1, 2.5, 4.7, 6.8, 7.3};
	
	float XY[7];
	for(int i = 0; i < 7; i++){
		XY[i] = X[i] * Y[i];
		cout << XY[i] << ", " << flush;
	}
	cout << endl;
	
	float yx[7];
	for(int i = 0; i < 7; i++){
		yx[i] = Y[i] / X[i];
		cout << yx[i] << ", " << flush;
	}
	cout << endl;
	
	float a = Sum(XY), x = Sum(X), d = Dob(yx), y = Sum(Y), b = Dob(X),c = 0;
	cin >> c;
	
	float W = (a*x+d*y) / (b*x + c*y);
	
	cout << W << endl;
	
	
}
