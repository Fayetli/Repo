#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	srand(time(0));
	string Month[12] = { "January", "Febru..", "March", "April", "May",
	"June", "July", "August", "Septe..", "October", "Novem..", "December" };
	const int N = 12, M = 5;
	int Z[M][N];
	for (int i = 0; i < N; i++) {
		cout << Month[i] << "\t";
		}
	cout << endl;
	for (int m = 0; m < M; m++) {
		for (int n = 0; n < N; n++) {
			Z[m][n] = (rand() % 501+500);
			cout << Z[m][n] << "\t";
		}
		cout << endl;
	}
	int s = 0;
	for (int m = 0; m < M; m++) {
		for (int n = 0; n < N; n++) {
			s += Z[m][n];
		}
	}
	cout << "S=" << s;


}
