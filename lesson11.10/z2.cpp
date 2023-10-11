#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	FILE* in;
	char title[20];
	const char* path = "infile.txt";
	if (fopen_s(&in, path, "r") != NULL)
		cout << "The file cannot be opened";
	else
	{
		while (!feof(in)) {
			fscanf_s(in, "%s", &title, sizeof(title));
			cout << title << " " << strlen(title) << "\n";
		}
	}
	return 0;
}