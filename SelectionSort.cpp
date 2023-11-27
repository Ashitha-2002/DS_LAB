#include<iostream>
using namespace std;

void selectionSort(int num, int array[]) {
	int minIndex;
	for(int i = 0; i < num; i++) {
		minIndex = i;
		for(int j = i; j < num; j++) {
			if(array[j] < array[minIndex]) {
				minIndex = j;
			}
		}
		swap(array[i], array[minIndex]);
	}
}

void swap(int num1, int num2) {
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
}

int main()
{
	int num, numArray[20];
	cout<< "Enter the number of elements : ";
	cin>> num;
	cout << "Enter " << num << " elements" << endl;
	for(int i = 0; i < num; i++) {
		cin >> numArray[i];
	}
	
	selectionSort(num,numArray);
	cout << "Selection sorted array elements" << endl;
	for(int i = 0; i < num; i++) {
		cout << numArray[i] << "\t";
	}
	
}
