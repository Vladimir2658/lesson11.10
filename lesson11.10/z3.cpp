#include <iostream>
using namespace std;

//Задание 2. Дан текстовый файл.Необходимо переписать
//его строки в другой файл.Порядок строк во втором файле
//должен совпадать с порядком строк в заданном файле.

int main()
{
	setlocale(LC_ALL, "RU");
	FILE* in, * out;
	char str[100] = { NULL };
	const char* path = "in3.txt";
	const char* path2 = "out3.txt";
	if (fopen_s(&out, path2, "w") != NULL) {
		cout << "The file cannot be opened";
	}
	else {
		if (fopen_s(&in, path, "r") != NULL) {
			cout << "The file cannot be opened";
		}
		else {
			while (!feof(in)) {
				fgets(str, sizeof(str), in);
				cout << str;
				fputs(str, out);
			}
			fclose(in);
		}
		fclose(out);
	}

	return 0;
}