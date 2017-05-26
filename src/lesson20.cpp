// Дружественные функции
/*
	Дружественные функции позволяют дать доступ отдельным элементам
*/

#include <iostream>

using namespace std;

class B;
class A {
	friend int sum(A, B); // дружественная функция
private:
	int i;
public:
	A () {
		cout << "Enter i: ";
		cin >> i;
	}
};

class B {
	friend int sum(A, B); // дружественная функция
private:
	int y;
public:
	B () {
		cout << "Enter y: ";
		cin >> i;
	}
};

int sum (A first, B second) {
	return (first.i + second.y);
}

int main (int argc, const char * argv[]) {

	A first;
	B second;

	cout << sum(first, second)<< endl;

	cin.get();
	return 0;
} 