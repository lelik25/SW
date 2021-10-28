#include<iostream>
#include<math.h>
#include<string>
#include<conio.h>

using namespace std;

void Input_of_Array(int*, int);
void Output_of_Array(int*, int);
void Finding_of_index(int*, int, int);
void Finding_number_that_less_than_difference(int*, int);
int Max_length_of_element(int*, int);
void Input_of_Second_Array(int*, int);
void Input_of_Matrix(int**, int);
void Output_of_Matrix(int**, int);
void Transpocition_of_matrix_with_main_diagonal(int**, int);
void Transpocition_of_matrix_with_side_diagonal(int**, int);
void The_Distance_between_dots(int);

int main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));

	int size_of_array;
	cout << "Введите размер массива" << "\t";
	cin >> size_of_array;
	
	int* array = new int[size_of_array];

	Input_of_Array(array, size_of_array);
	Output_of_Array(array, size_of_array);

	int number_of_element;
	cout << "Введиет число для нахождения  ";
	cin >> number_of_element;

	Finding_of_index(array, size_of_array, number_of_element);

	Finding_number_that_less_than_difference(array, size_of_array);
	cout << endl;

	int size_of_second_array=0;
	cout << "Введите размер второго  массива" << "\t";
	cin >> size_of_second_array;

	int* arr = new int[size_of_array];
	
	Input_of_Array(arr, size_of_second_array);
	Output_of_Array(arr, size_of_second_array);
	
	cout << "Mакстимальная последовательность состоиз  = " << Max_length_of_element(arr, size_of_second_array)<<"  элементов";

	int rows_of_matrix;
	cout << endl;
	cout << "Введите значение столбцов и строк матрицы = ";
	cin >> rows_of_matrix;

	int** matrix = new int* [rows_of_matrix];
	for (int i = 0; i < rows_of_matrix; i++)
	{
		matrix[i] = new int[rows_of_matrix];
	}
	Input_of_Matrix(matrix, rows_of_matrix);
	Output_of_Matrix(matrix, rows_of_matrix);
	cout << endl;

	cout << "Транспонированнная матрица относительно главной диагонали"<<endl;

	Transpocition_of_matrix_with_main_diagonal(matrix, rows_of_matrix);
	cout << endl;

	cout << "Транспонированнная матрица относительно побочной диагонали" << endl;

	Transpocition_of_matrix_with_side_diagonal(matrix, rows_of_matrix);

	int dots;
	cout << "Введите количество точек  :";
	cin >> dots;
	The_Distance_between_dots(dots);

	delete[]array;
	delete[]arr;
	for (int i = 0; i < rows_of_matrix; i++)
	{
		delete[i]matrix;
	}
	delete[]matrix;
}

void Input_of_Array(int* array, int size_of_array)
{
	for (int i = 0; i < size_of_array; i++)
	{
		array[i] = rand() % 20 - 10;
	}
}

void Output_of_Array(int* array, int size_of_array)
{

	for (int i = 0; i < size_of_array; i++)
	{
		cout << array[i] << "\t";
	}
	cout << endl;
}

void Finding_of_index(int* array, int size_of_array, int number_of_element)
{
	bool flag = true;
	for (int i = 0; i < size_of_array; i++)
	{
		if (array[i] == number_of_element)
		{
			cout << "Ваше число с индексом:   " << i << endl;
			flag = false;
			break;
		}
	}
	if (flag == true)
	{
		cout << "Такого числа в массиве нет" << endl;
	}
}

void Finding_number_that_less_than_difference(int* array, int size_of_array)
{
	for (int i = 2; i < size_of_array; i++)
	{
		if (array[i] < (array[i - 2] - array[i - 1]))
		{
			cout << "Число соответствующее условию:  ";
			cout << array[i] << endl;
		}
	}
}

int Max_length_of_element(int* arr, int size_of_array)
{
	int n = 1;
	int max = 0;
	for (int i = 0; i < size_of_array - 1; i++)
	{
		if (arr[i] == arr[i + 1])
		{
			n++;
		}
		else
		{
			n = 1;
		}
		if (n > max)
		{
			max = n;
		}
	}
	return max;
}

void Input_of_Second_Array(int* arr, int size_of_array)
{
	for (int i = 0; i < size_of_array; i++)
	{
		cout << "arr[" << i + 1 << "]="<<endl;
		arr[i]=rand()%20-10;
	}
}

void Input_of_Matrix(int** matrix, int rows_of_matrix)
{
	for (int i = 0; i < rows_of_matrix; i++)
	{
		for (int j = 0; j < rows_of_matrix; j++)
		{
			matrix[i][j] = rand() % 20 - 10;
		}
	}
}

void Output_of_Matrix(int** matrix, int rows_of_matrix)
{
	for (int i = 0; i < rows_of_matrix; i++)
	{
		for (int j = 0; j < rows_of_matrix; j++)
		{
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}
}

void Transpocition_of_matrix_with_main_diagonal(int** matrix, int rows_of_matrix)
{
	for (int i = 0; i < rows_of_matrix; i++)
	{
		for (int j = 0; j < rows_of_matrix; j++)
		{
			cout << matrix[j][i] << "\t";
		}
		cout << endl;
	}
}

void Transpocition_of_matrix_with_side_diagonal(int** matrix, int rows_of_matrix)
{
	for (int i = 0; i < rows_of_matrix; i++)
	{
		for (int j = 0; j < rows_of_matrix; j++)
		{
			cout << matrix[rows_of_matrix - 1 - j][rows_of_matrix - 1 - i] << "\t";
		}
		cout << endl;
	}
}

void The_Distance_between_dots(int dots)
{
	double distance;
	double max_DISTANCE = 0;
	int* array_X = new int[dots];
	int* array_Y = new int[dots];
	for (int i = 0; i < dots; i++)
	{
		array_X[i] = rand() % 21 - 10;
		array_Y[i] = rand() % 21 - 10;
	}
	for (int i = 0; i < dots; i++)
	{
		cout << "(" << array_X[i] << "," << array_Y[i] << ")" << endl;

	}

	for (int i = 0; i < dots; i++)
	{
		for (int k = 0; k < dots - 1; k++)
		{
			distance = sqrt((array_X[i] - array_X[k]) * (array_X[i] - array_X[k]) + (array_Y[i] - array_Y[k]) * (array_Y[i] - array_Y[k]));
			if (distance > max_DISTANCE)
			{
				max_DISTANCE = distance;
			}
		}
	}
	cout << "Max dist = " << max_DISTANCE << endl;
	delete[]array_Y;
	delete[]array_X;
}




