#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	FILE* in;
	char title[20];
	const char* path = "output.txt";
	if(fopen_s(&in, path, "r") != NULL)
		cout << "The file cannot be created!";
	else
	{
		while (!feof(in)) {
			fscanf_s(in, "%s", &title, sizeof(title));
			cout << title << " " << strlen(title) << "\n";
		}
	}
	return 0;
}