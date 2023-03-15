#include <iostream>

using namespace std;

void inputData(int**, int, int);
void outputData(int**, int, int);

int main() 
{
	int rows, columns;
	cout << "Enter no. of rows: ";
	cin >> rows;
	cout << "Enter no. of cols: ";
	cin >> columns;
	
	int** myArray = new int*[rows];
	
	for(int row = 0; row < rows; row++)
	{
		myArray[row] = new int[columns];
	}
	
	inputData(myArray, rows, columns);
	outputData(myArray, rows, columns);

	return 0;
}

void inputData(int** myData, int rows, int columns)
{
	for(int row = 0; row < rows; row++)
	{
		for(int col = 0; col < columns; col++)
		{
			cin >> myData[row][col];
		}
	}
}
void outputData(int** myData, int rows, int columns)
{
	for(int row = 0; row < rows; row++)
	{
		for(int col = 0; col < columns; col++)
		{
			cout << myData[row][col] << ",\t";
		}
		cout << endl;
	}
}
