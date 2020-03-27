#include <iostream>
#include <vector>

using namespace std;

int main(){
	int marks[] = {3, 4, 4, 5, 2, 3, 3, 4};
	
	string marksInString[] = {"Very bad", "Bad", "Normal", "Good", "Perfect"};
	
	string newMarks[sizeof(marks)/sizeof(int)];
	
	for(size_t i = 0; i < sizeof(marks)/sizeof(int); i++){
		newMarks[i] = marksInString[marks[i] - 1];
	}
	
	for(size_t i = 0; i < sizeof(marks)/sizeof(int); i++){
		cout << newMarks[i] << "\t";
	}
}
