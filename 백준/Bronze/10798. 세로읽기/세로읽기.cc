#include <string.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <variant>
#include <cctype>
using namespace std;

char arr[5][15];
int main() {
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}
	for (int j = 0; j < 15; j++) {
		for (int k = 0; k < 5; k++) {
			if (isalnum(arr[k][j])) {
				cout << arr[k][j];
			}
		}
	}
	return 0;
	
}
