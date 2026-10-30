/*Задание 4. Напишите void printTrip(int tripNumber, int people = 1),
выводящую номер поездки и число путешественников.*/
#include <iostream>
using namespace std;

void printTrip(int tripNumber, int people = 1) {
	cout << "Поездка номер: " << tripNumber << endl << "Количество путешественников: " << people;

}

int main() {
	int tripNumber, people;
	setlocale(LC_ALL, "Russian");
	cin >> tripNumber >> people;
	cout << "Вывод для введённого числа пасажиров" << endl;
	printTrip(tripNumber, people);
	cout << endl << endl << "Вывод для заданного по умолчанию числа пасажиров" << endl;
	printTrip(tripNumber);
	return 0;
}