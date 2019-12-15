#include <iostream>
#include <vector>

using namespace std;

int main(){
	string array[6] = {"paper","water", "tower", "channel", "height", "volume"};
	cout << "1st massive" << endl;
	for(int i =0; i < 6; i++){
		cout << array[i] << "\t\t" << flush;
	}
	
	array[1] = array[1] + array[3];
	array[3] = "0";
	
	string newArray[5];
	for(int i =0, j = 0; i < 6; i++){
		if (array[i] == "0")
			continue;
		newArray[j++] = array[i];
	}
	
	cout << endl << endl << "2nd massive" << endl;;
	for(int i =0; i < 5; i++){
		cout << newArray[i] << "\t\t" << flush;
	}
}
