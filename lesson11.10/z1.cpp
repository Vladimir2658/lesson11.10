#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main() {
	FILE* out;
	if ((fopen_s(&out, "outfile.txt", "w+") == NULL) {
		cout << "File could'nt be created!";
	}
	else {
		cout << "OK!";
	}
	return 0;
}