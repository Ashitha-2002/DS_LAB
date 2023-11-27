#include<iostream>

using namespace std;

void insertionSort(int n, int array[])
{
	int i, j , key;
	
	for(i = 1; i < n; i++)
	{
		key = array[i];
		j = i - 1;
		
		while(j >= 0 && array[j] > key)
		{
			array[j + 1] = array[j];
			j = j - 1;	
		}
		array[j + 1] = key;
	}
}


int main()
{
	int num, numArray[20];
	cout<< "Enter the number of elements : ";
	cin>> num;
	cout << "Enter " << num << " elements" << endl;
	for(int i = 0; i < num; i++)
	{
		cin >> numArray[i];
	}
	
	insertionSort(num,numArray);
	cout << "Insertion sorted array elements" << endl;
	for(int i = 0; i < num; i++) 
	{
		cout << numArray[i] << "\t";
	}	
}
