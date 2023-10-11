#define __CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

//Задание 1. Дан текстовый файл.Необходимо создать
//новый файл, в который переписать из исходного файла
//все слова, состоящие не менее чем из семи букв.

int main1() {
	/*FILE* out;
	if ((fopen_s(&out, "outfile.txt", "w+")) != NULL) {
		cout << "The file could not be created!";
	}
	else {
		cout << "OK!";
		fprintf(out, "Vladimir");
	}*/
	
	/*const int n = 5;
	int arr[n];
	FILE* out;
	const char* path = "D:\\outfile.txt";
	for (int i = 0; i < n; i++)
	{
		arr[i] = i + 5;
	}
	if ((fopen_s(&out, path, "w")) != NULL)
		cout << "The file could not be created";
	else
	{
		for (int i = 0; i < n; i++)
		{
			fprintf(out, "%1d ", arr[i]);
			fprintf(out, "\n");
		}
		fclose(out);
	}*/

	setlocale(LC_ALL, "rus");
	char s[30];
	FILE* out;
	const char* path = "infile.txt";
	if ((fopen_s(&out, path, "w")) != NULL)
		cout << "";
	else
	{
		while (!feof(out)) {
			fscanf_s(out, "%s", s, sizeof(s));
			cout << s;
		}
		fclose(out);
	}

	return 0;
}