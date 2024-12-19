#include <iostream>
#include <iomanip>

using namespace std;


void PrintMatrix(short Arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			printf(" %0*d\t", 2, Arr[i][j]);
		}
		cout << "\n";
	}
}

bool IsNumerInMatrix(short Matrix[3][3], short Rows, short Cols, short Number)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Matrix[i][j] == Number)
			{
				return true;
			}
		}
	}
	return false;
}

void PrintIntersectedNumbers(short Matrix1[3][3], short Matrix2[3][3], short Rows, short Cols)
{
	
	short Number = 0;

	for (short i = 0 ; i < Rows ; i++)
	{
		for (short j = 0 ; j < Cols ; j++)
		{
			Number = Matrix1[i][j];
			if (IsNumerInMatrix(Matrix2 , 3 , 3 , Number))
			{
				cout << setw(3) << Number << "\t";
			}
		}
	}

}



int main()
{

	srand((unsigned)time(NULL));


	short Matrix1[3][3] = { {1,2,3} , {4,5,6} , {7,8,9} };
	short Matrix2[3][3] = { {1,3,5} , {7,9,20} , {77,14,11} };


	cout << "\n matrix 1 \n";
	PrintMatrix(Matrix1, 3, 3);

	cout << "\n matrix 2 \n";
	PrintMatrix(Matrix2, 3, 3);

	cout << "\n Intersected Numbers:\n";
	PrintIntersectedNumbers(Matrix1 , Matrix2 , 3 , 3);


	return 0;
}