#include<iostream>
using namespace std;

int main()
{
	int num, numArray[20],i,j;
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
	
	cout << "Distinct elements are" << endl;
 	for (int i = 0; i < num; i++)
    {
        int j;
        for (j = 0; j < i; j++)
        {
           if (numArray[i] == numArray[j])
               break;
        }
 
        if (i == j)
		{
			cout << numArray[i] << "\t";
		}
 	}
 	cout << endl;
}
