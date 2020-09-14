#include <iostream>

using namespace std;

//Variables
int time;
int acceleration;
int fallDistance;
int timeSquared;


int main() {
	//Declare our constant acceleration
	acceleration = 32;
	
	//Ask user to input a time of their choice(in seconds)
	cout << "Enter an amount(in seconds) that you would like to calculate the distance of free fall for your object.\n";

	//User input
	cin >> time;

	double timeSquared = pow(time, 2);

	//Formula as discribed on Canvas Project 1
	fallDistance = (acceleration * (timeSquared / 2));

	//Print calculated answer to user
	cout << "The object would fall " << fallDistance << " feet in " << time << " seconds!";
	return 0;
}