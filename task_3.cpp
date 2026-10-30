/*Задание 3. Перегрузите road: int road(int a, int b) и int road(int a, int b, int c),
возвращающие сумму длин участков дороги.*/
#include <iostream>
using namespace std;

int road(int a, int b){
	return a + b;
}

int road(int a, int b, int c){
	return a + b + c;
}

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	cout << road(a, b) << endl << road(a, b, c);
	return 0;
}