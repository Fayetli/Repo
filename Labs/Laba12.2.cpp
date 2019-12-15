#include <iostream>

using namespace std;

int main(){
	char T[] = "it is a very big text";
	int size = sizeof(T) - 1;
	cout << "size: " << size << endl;
	
	for( int i =0; i < size; i++){
		cout << T[i] << flush;
	}
	
	
	char temp;
	for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (T[j] > T[j + 1]) {
                // меняем элементы местами
                temp = T[j];
                T[j] = T[j + 1];
                T[j + 1] = temp;
            }
        }
    }

	cout << endl;
	for( int i =0; i < size; i++){
		if(T[i] == ' ')
			continue;
		cout << T[i] << flush;
	}
	
	
}
