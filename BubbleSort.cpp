#include<iostream>
using namespace std;

int main()
{
	int num, numArray[20],temp;
	cout<< "Enter the number of elements : ";
	cin>> num;
	cout << "Enter " << num << " elements" << endl;
	for(int i = 0; i < num; i++) {
		cin >> numArray[i];
	}
	
	for(int i = 0; i < num; i++) {
		for(int j = 0; j < num - i - 1; j++) {
			if(numArray[j] > numArray[j + 1]) {
				temp = numArray[j];
				numArray[j] = numArray[j + 1];
				numArray[j + 1] = temp;
			}
		}
	}
	
	cout << "Bubble sorted array elements" << endl;
	for(int i = 0; i < num; i++) {
		cout << numArray[i] << "\t";
	}
	
}
