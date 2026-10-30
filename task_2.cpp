/*Задание 2. Напишите void addKilometer(int& distance), увеличивающую путь на 1 км.*/
#include <iostream>
using namespace std;

void addKilometer(int& distance) {
	distance ++;
}

int main() {
	int distance;
	cin >> distance;
	addKilometer(distance);
	cout << distance;
	return 0;
}