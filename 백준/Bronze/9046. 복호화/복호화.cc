#include <string.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	int num;
	cin >> num;
	cin.ignore();

	while(num--) {
		string str;
		getline(cin, str);

		vector<int> alphabet(26, 0);
		
		// 빈도수 세기
		for (char ch : str) {
			if (islower(ch)) {
				alphabet[ch-'a']++;
			}
		}

		// 최대 빈도 찾기
		int maxFreq = *max_element(alphabet.begin(), alphabet.end());

		int count = 0;
		char result;
		for (int i = 0; i < 26 ; i++) {
			if (alphabet[i] == maxFreq) {
                count++;
				result = 'a' + i;
            }
		}

		if (count > 1) {
			printf("?\n");
		}
		else {
			printf("%c\n", result);
		}

	}
	return 0;
}
