#include <iostream>
#include <math.h>

using namespace::std;
int part1, part2, part3;
int ans;
int totalPaint, totalPart;
int sumOfParts, oneRatio;

void math() {
	if (ans == 1) {
		cin >> totalPaint;
		sumOfParts = (part1 + part2 + part3);
		oneRatio = (totalPaint / sumOfParts);
		cout << part1 << " Parts is equal to " << (part1 * oneRatio);
	}
	else if (ans == 0) {
		cin >> totalPart;
		oneRatio = totalPart / part1;
		sumOfParts = (part1 + part2 + part3);
		cout << totalPart << " oz for " << part1 << " Will yeild a total oz of " << sumOfParts * totalPart;
	}
}


int main() {

	cout << "Type your formula by Parts, press enter after every part(Example, 8 enter, 1 enter, 1 enter).\n";

	cin >> part1 >> part2 >> part3;

	cout << "You entered a ratio of " << part1 << " : " << part2 << " : " << part3;

	cout << "Select an Option by typing the corresponding number\n" << "(1)Parts off total amount of paint\n" << "(2)Parts off first part\n";

	cin >> ans;
	math();

}

