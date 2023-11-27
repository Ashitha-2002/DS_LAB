#include<iostream>
using namespace std;

int main()
{
	int num, numArray[20],index,element;
	cout<< "Enter the number of elements : ";
	cin>> num;
	cout << "Enter " << num << " elements" << endl;
	for(int i = 0; i < num; i++) {
		cin >> numArray[i];
	}
	
	cout << "Entered array elements are" << endl;
	for(int i = 0; i < num; i++) {
		cout << numArray[i] << "\t";
	}
	cout << endl;
	
	cout << "Array elements in reverse order" << endl;
	for(int i = num - 1; i >= 0; i--) {
		cout << numArray[i] << "\t";
	}
	cout << endl;
	
	cout << "Enter the index to access the element : ";
	cin >> index;
	
	cout << "The element at " << index << " is ";
	cout << numArray[index] << endl;
	
	cout << "Enter the element to search : ";
	cin >> element;
	cout << endl;
	
	cout << "The element " << element << " is at index ";
	
	for(int i = 0; i < num; i++) {
		if(numArray[i] == element) {
			cout << i << endl;	
		}
	}
}
