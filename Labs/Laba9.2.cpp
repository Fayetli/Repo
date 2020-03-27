#include <iostream>

using namespace std;

int main(){
	int T[2][2][3]={
	{{-1, 0, 8},{2, -1, 1}},
	{{3, -5, 1},{7, 2, -3}}
	};
	for(int a = 0; a < 2; a++){
		for(int b = 0; b < 2; b++){
			for(int c = 0; c < 3; c++)
				cout << T[a][b][c] << "\t";
			cout << endl;
		}
		cout << endl;
	}
	
	int sum_plus = 0, sum_minus = 0, n_plus = 0, n_minus = 0;
	
	for(int a = 0; a < 2; a++){
		for(int b = 0; b < 2; b++){
			for(int c = 0; c < 3; c++){
				if(T[a][b][c] > 0){
					n_plus++;
					sum_plus+=T[a][b][c];
				}
				if(T[a][b][c] < 0){
					n_minus++;
					sum_minus+=T[a][b][c];
				}
			}
		}
	}
	cout << "sum " << n_plus << " elements > 0 = " << sum_plus << endl;
	cout << "sum " << n_minus << " elements < 0 = " << sum_minus << endl;
	
	
}
