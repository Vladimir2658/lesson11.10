#define __CRT_SECURE_NO_WARNINGS
/*������� 1. ��� ��������� ����. ���������� ������� 
����� ����, � ������� ���������� �� ��������� ����� 
��� �����, ��������� �� ����� ��� �� ���� ����.*/
#include <iostream>

using namespace std;

int main()
{
	/*FILE* out;
	if (fopen_s(&out, "outfile.txt", "w+") != NULL)
	{
		cout << "The file could not be created";
	}
	else
	{
		cout << "OK!";
		//fprintf(&out, "Vladimir");
	}
	return 0;*/

	setlocale(LC_ALL, "RUS");
	
	FILE* out;
	char title[20]
	const char* path = "infile.txt";
	if (fopen_s(&in, path, "r") != NULL)
	{
		cout << "The file cannot be open";
	}
	else
	{
		while (!feof(in))
		{
			fscanf_s(in, "%s", &title, sizeof(title));
			cout << title << " " << strlen(title) << "\n";
		}
	}
	fclose(out);
	return 0;
}