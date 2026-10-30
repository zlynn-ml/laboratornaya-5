/*Задание 1. Напишите int totalDistance(int days, int kmPerDay), возвращающую длину пути.*/

#include <iostream>
using namespace std;

int totalDistance(int days, int kmPerDay) {
	return days * kmPerDay;
}

int main() {
	int days, KmPerDay;
	cin >> days >> KmPerDay;
	cout << totalDistance(days, KmPerDay);
}