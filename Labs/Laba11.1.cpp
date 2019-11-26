#include <iostream>

using namespace std;

float M(float a,float  b){
	if (a >= b){
		return M(a-b, b);
	}
	else return a;
}

int main(){
	float a, b;
	cin >> a; cin >> b;
	cout << M(a, b);
}
