#include <iostream>
using namespace std;

//Задание 1. Дан текстовый файл.Необходимо создать
//новый файл, в который переписать из исходного файла
//все слова, состоящие не менее чем из семи букв.

int main2()
{
	setlocale(LC_ALL, "RU");
	FILE *in, *out;
	char title[20] = { NULL };
	const char* path = "infile.txt";
	const char* path2 = "outfile.txt";
	if (fopen_s(&out, path2, "w") != NULL) {
		cout << "The file cannot be opened";
	}else{
		if (fopen_s(&in, path, "r") != NULL) {
			cout << "The file cannot be opened";
		}else{
			while (!feof(in)) {
				fscanf_s(in, "%s", title, sizeof(title));
				cout << title << " " << strlen(title) << "\n";
				if (strlen(title) >= 7){
					fprintf_s(out, "%s\n", title);
				}
			}
		}
		fclose(in);
		fclose(out);
	}

	return 0;
}