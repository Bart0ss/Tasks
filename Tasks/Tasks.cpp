// Tasks.cpp : Defines the entry point for the console application.
//

#define _USE_MATH_DEFINES
#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#include <sstream>
#include <iomanip>
#define M_PI 3.14159265359
#define M_E 2.71828182845
using namespace std;

int function2(int input)
{
	int number_of_digits_in_number = 0;
	while (input > 0)
	{
		number_of_digits_in_number++;
		input /= 10;
	}
	return number_of_digits_in_number;
}

void function3()
{
	for (int i = 3; i <= 100; i++)
	{
		for (int j = 4; j <= 100; j++)
		{
			for (int k = 3; k<=100; k++)
			{
				int highest[3] = {i,j,k};
				sort(highest, highest + 3);

				if (highest[0] * highest[0] + highest[1] * highest[1] == highest[2] * highest[2])
				{
					cout << i << " " << j << " " << k << endl;
				}
			}
		}
	}
}

int function4(int n)
{
	int sum = 0;
	while (n > 0)
	{
		if (n % 2 != 0)
		{
			sum += n*n;
		}
		n--;
	}
	return sum;
}

void function5(int polynom_A[], int polynom_B[], int size)
{
	int display_helper = size-1;
	for (int i = 0; i < size; i++)
	{
		cout << polynom_A[i] + polynom_B[i] << "x^" << display_helper << endl;
		display_helper--;
	}
}

void one_dimension_1a(double *polynom, int size)
{
	size--;
	while (size >= 0)
	{
		polynom[size] = pow(M_E, size + 2);
		size--;
	}
}

void one_dimension_1b(double *polynom, int size, int x)
{
	size--;
	while (size >= 0)
	{
		double sum = 0;
		for (int i = 1; i < 10; i++)
		{
			sum += 1. / 3 * cos(pow(x, i + size));
		}
		polynom[size] = sum;

		size--;
	}
}

void one_dimension_2a(int *input, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (input[i] > 0)
		{
			cout << input[i] << endl;
		}
	}
}


bool contains(vector<int> container, int var)
{
	for (int i = 0; i < container.size(); i++)
	{
		if (container[i] == var)
		{
			return true;
		}
	}
	return false;
}

void one_dimension_2b(int *input, int size)
{
	vector < int > MemoIz;
	for (int i = 0; i < size; i++)
	{
		if (!contains(MemoIz, input[i]))
		{
			MemoIz.push_back(input[i]);
		}
	}

	sort(MemoIz.begin(), MemoIz.end());

	for (int a : MemoIz)
	{
		cout << a << endl;
	}
}

void one_dimension_2c(int *input, int size)
{
	vector < int > MemoIz;
	for (int i = 0; i < size; i++)
	{
		if (!contains(MemoIz, abs(input[i])))
		{
			MemoIz.push_back(abs(input[i]));
		}
	}

	sort(MemoIz.begin(), MemoIz.end());

	for (int a : MemoIz)
	{
		cout << a << endl;
	}
}

void one_dimension_2d(int *input, int size)
{
	vector < int > MemoIz;
	for (int i = 0; i < size; i++)
	{
		if (!contains(MemoIz, -input[i]))
		{
			MemoIz.push_back(input[i]);
		}
	}

	sort(MemoIz.begin(), MemoIz.end());

	for (int a : MemoIz)
	{
		cout << a << endl;
	}
}

int one_dimension_3a(int *input, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += input[i];
	}
	return sum;
}

int one_dimension_3b(int *input, int size)
{
	int sum = 0;
	while (size>0)
	{
		sum -= input[size];
		size--;
	}
	return sum;
}

double one_dimension_4(int *input, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += input[i];
	}
	return sum/size;
}

map<int, int> memoIz;

int getFibb(int n)
{
	if (memoIz.find(n) != end(memoIz))
	{
		return memoIz[n];
	}
	if (n == 0 || n == 1)
	{
		return 1;
	}
	else
	{
		return (getFibb(n - 1) + getFibb(n - 2));
	}
}

void one_dimension_5()
{
	const int n = 10;
	int fibb[n] = { };
	for (int i = 0; i < n; i++)
	{
		int output = getFibb(i);
		fibb[i] = output;
		memoIz[i] = output;
	}

	for (int a : fibb)
	{
		cout << a << endl;
	}
}

void two_dimension_1a()
{
	int array[3][3] = { };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i == j)
			{
				array[i][j] = 1;
			}
			else
			{
				array[i][j] = 0;
			}
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
}

void two_dimension_1b()
{
	int array[3][3] = {};

	for (int i = 0; i < 3; i++)
	{
		for (int j = 2; j >= 0; j--)
		{
			if (i == j)
			{
				array[i][j] = 1;
			}
			else
			{
				array[i][j] = 0;
			}
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
}

void two_dimension_1c()
{
	const int size = 5;
	double array[size][size] = {};

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			array[i][j] = sin(i*j);
			cout << setprecision(2) << array[i][j] << '\t';
		}
		cout << endl;
	}
}

string nth_same_chars(char sign, int amount)
{
	string temp = "";
	while (amount > 0)
	{
		temp += sign;
		amount--;
	}
	return temp;
}

void two_dimension_1d()
{
	const int size = 6;
	string array[size-3][size] = {};

	for (int i = 0; i < size-3; i++)
	{
		char znak;

		stringstream konwersja;
		konwersja << i+1;
		konwersja >> znak;

		for (int j = 0; j < size; j++)
		{
			array[i][j] = nth_same_chars(znak, j + 1);
			cout << array[i][j] << " "; // for debugging purposes
		}
		cout << endl; // for debugging purposes
	}
}


void two_dimension_2()
{
	const int size = 4;
	int array[size][size] = 
	{
		{1,1,1,1},
		{2,2,2,2},
		{0,0,0,0},
		{4,4,4,4}
	};

	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (array[i][j]>0)
			{
				sum += array[i][j];
			}
			cout << array[i][j] << " "; // for debugging purposes
		}
		cout << endl; // for debugging purposes
	}
	cout << "sum is: " << sum << endl;
}

void two_dimension_3()
{
	const int size = 4;
	int array[size][size] =
	{
		{ 1,1,1,1 },
		{ 2,2,2,2 },
		{ 0,0,0,0 },
		{ 4,4,4,4 }
	};

	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (j < i)
			{
				sum += array[i][j];

			}
			cout << array[i][j] << " "; // for debugging purposes
		}
		cout << endl; // for debugging purposes
	}
	cout << "sum is: " << sum << endl;
}

void two_dimension_4()
{
	const int size = 4;
	int array[size][size] =
	{
		{ 1,1,1,1 },
		{ 2,2,2,2 },
		{ 0,0,0,0 },
		{ 4,4,4,4 }
	};

	int sum = 0;
	int helper = size - 1;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (j==helper)
			{
				sum += array[i][j];
			}
			cout << array[i][j] << " "; // for debugging purposes
		}
		cout << endl; // for debugging purposes
		helper--;
	}
	cout << "sum is: " << sum << endl;
}

void two_dimension_5()
{
	const int height = 10;
	const int width = 5;
	int array[height][width] =
	{
		{ 1,1,1,1,1 },
		{ 2,2,2,2,2 },
		{ 0,0,0,0,0 },
		{ 4,4,4,4,4 },
		{ 1,1,1,1,1 },
		{ 2,2,2,2,2 },
		{ 0,0,0,0,0 },
		{ 4,4,4,4,4 },
		{ 1,1,1,1,1 },
		{ 2,2,2,2,2 }
	};

	int array_of_sums[10] = { };

	for (int i = 0; i < height; i++)
	{
		int sum = 0;
		for (int j = 0; j < width; j++)
		{
			sum += array[i][j];
			cout << array[i][j] << " "; // for debugging purposes
		}
		array_of_sums[i] = sum;
		cout << endl; // for debugging purposes
	}
	cout << "__________" << endl;
	for (int a : array_of_sums)
	{
		cout << a << endl;
	}

}
int main()
{
	int polynom_A[6] = {1,67,4,7,8,3 };
	int polynom_B[6] = {-30,56,7,2,66,0};
	int input_array[11] = {10,-3,5,8,-2,7,13,10,3,-8,2};

	// function5(polynom_A,polynom_B,6);
	// one_dimension_1a(polynom_A, 6);
	// one_dimension_2a(polynom_B, 6);
	// cout << polynom_A[2];
	// one_dimension_2b(input_array, 11);
	// cout << endl << "____________" << endl;
	// one_dimension_2c(input_array, 11);
	// cout << endl << "____________" << endl;
	// one_dimension_2d(input_array, 11);
	// one_dimension_5();
	two_dimension_5();
	return 0;
}