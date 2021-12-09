﻿#include <iostream>
#include <fstream>
#include <string>


using namespace std;

struct fileStruct
{
	string word;
	int num = 0;
	double average = 0;
	int index = 0;
};

fileStruct* readFile(string Name, int& size);

void numOflines();

fileStruct* resizeArray(int& oldFileSize, int newFileSize, fileStruct* files);

void printTaskInFile(string Name, fileStruct* files, int size, int openMode);

void sotr(string Name, fileStruct* files, int size, int openMode);

void input(string Name);

int main()
{

	int size = 1;
	setlocale(LC_ALL, "rus");
	fileStruct* files = readFile("MainOfTask.txt", size);
	printTaskInFile("MainOfTask.txt", files, size, ios_base::app);
	fstream file("MainOfTask.txt");
	input("MainOfTask.txt");
	int sizeoffile = 0;
	file.seekg(0, ios::end);
	sizeoffile = file.tellg();
	cout << "В файле " << sizeoffile << " байт" << endl;
	file.close();
	numOflines();
	sotr("MainOfTask.txt", files, size, ios_base::app);
	printTaskInFile("MainOfTask.txt", files, size, ios_base::app);
	input("MainOfTask.txt");
	cout << "Работа закончена!" << endl;
	system("pause");

	return 0;
}

void numOflines()
{
	char* str = new char[1024];
	int i = 0;
	ifstream base("MainOfTask.txt");
	while (!base.eof())
	{
		base.getline(str, 1024, '\n');
		i++;
	}
	base.close();
	delete str;
}

fileStruct* readFile(string Name, int& size)
{
	ifstream file(Name);
	if (!file.is_open())
	{
		return nullptr;
	}
	size <= 0 ? size = 10 : size = size;
	fileStruct* files = new fileStruct[size];
	int numOfLines = 0;
	while (!file.eof())
	{
		if (numOfLines == size)
		{
			files = resizeArray(size, size + 1, files);
		}
		file >> files[numOfLines].num;
		file >> files[numOfLines].average;
		file >> files[numOfLines].word;
		file >> files[numOfLines].index;
		numOfLines++;
	}
	files = resizeArray(size, numOfLines - 1, files);
	file.close();
	return files;
}

fileStruct* resizeArray(int& oldFileSize, int newFileSize, fileStruct* files)
{
	if (oldFileSize == newFileSize)
	{
		return files;
	}
	fileStruct* newArray = new fileStruct[newFileSize];
	oldFileSize = newFileSize < oldFileSize ? newFileSize : oldFileSize;
	for (int i = 0; i < oldFileSize; i++)
	{
		newArray[i] = files[i];
	}
	oldFileSize = newFileSize;
	delete[] files;
	return newArray;
}

void printTaskInFile(string Name, fileStruct* files, int size, int openMode)
{
	ofstream file(Name, openMode);
	if (!file.is_open()) {
		return;
	}
	else {
		cout << "Файл открыт  " << endl;
		for (int i = size - 1; i >= 0; i--) {
			file
				<< files[i].num << " "
				<< files[i].average << " "
				<< files[i].word << " "
				<< files[i].index << endl;
		}
		file.close();
		cout << "Задание сделано =) " << endl;
	}
}

void input(string Name)
{
ifstream f(Name);
{
	while (f)
	{
		string str;
		getline(f, str);
		cout << str << endl;
	};
	cout << endl;
	f.close();
}
}


void sotr(string Name, fileStruct* files, int size, int openMode)
{
	ofstream file(Name, openMode);
	if (!file.is_open()) {
		return;
	}
	else
	{
		cout << "Файл открыт  " << endl;
	}
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (files[j].num > files[j + 1].num)
			{
				fileStruct temp = files[j];
				files[j] = files[j + 1];
				files[j + 1] = temp;

			}
		}
	}
	file << "Сортированный массив" << endl;
	file.close();
}