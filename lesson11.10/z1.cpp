#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main()
{
	char s[30];
	FILE* out;
	const char* path = "infile.txt";
	if ((fopen_s(&out,path, "w+"))!=NULL) {
		cout << "The file could not be created!";
	}
	else {
		while (!feof(out)) {
			fscanf_s(out, "%s", s, sizeof(s));
			cout << s;
}
		cout << "OK!";
		fprintf(out, "привет");
	}	return 0;
}