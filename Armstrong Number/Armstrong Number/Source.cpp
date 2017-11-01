/*Check if a 3 digit number is an Armstrong number.
An Armstrong number of three digits is an integer such that the sum of the cubes of its digits is equal to the number itself.
For example, 371 is an Armstrong number since 3**3 + 7**3 + 1**3 = 371.
*/
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
//input from user > count number of symbols > multiply each number's value by symbols count > result
void main() {
	int number;
	cin >> number;
	int power = number.length();
	int result = 0;
	for (int index = 0; index < number.size(); index++) {
	result += pow(number[index], power);
	}
	cout << result;
	system("pause");
}