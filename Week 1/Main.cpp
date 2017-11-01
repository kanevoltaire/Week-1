#include <string>
#include <algorithm>
#include <iostream>

using namespace std;
void main() {
	string s1 = "day";
	string s2 = "time";
	string result;
	int smaller = min(s1.size(), s2.size());
	for (int index = 0; index < smaller; index++) {
		result += s1[index];
		result += s2[index];
	}
	result += s1.substr(smaller, s1.size());
	result += s2.substr(smaller, s2.size());
	cout << result;
	system("pause");
}