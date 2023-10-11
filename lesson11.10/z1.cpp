#include <iostream>

using namespace std;

int main() {
	FILE* out;
	if ((out = fopen("outfile.txt", "w+") == NULL) {
		cout << "File could'nt be created!";
	}
	else {
		cout << "OK!";
	}
	return 0;
}