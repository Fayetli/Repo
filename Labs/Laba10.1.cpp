#include <iostream>
#include <cmath>
using namespace std;
float A[10] = {0.5,1,3,4.4,2,5,0,2.4,3.3,4.8};
float B[10] = {1.1,2,3.4,2.1,6,4,0,1.1,2.7,5.4};
float ln(float x){
	return log(fabs(1+pow(cos(x),2)));
}
float doba(int k1,int k2,int m,int st){
	
	float p = 1;
	for(k1-1;k1 < k2; k1++){
		p*=m*A[k1]-pow(B[k1],1/st);
	}
	return p;
}
float doab(int k1,int k2,int m,int st){
	
	float p = 1;
	for(k1-1;k1 < k2; k1++){
		p*=m*B[k1]-pow(A[k1],1/st);
	}
	return p;
}
int main(){
	float R = 0;
	R = ln(4)/doba(6,4,2,2)-doba(1,3,4,4)/ln(0.8)-ln(49)/doab(5,9,3,2);
	cout << R << endl;
	
	
}
