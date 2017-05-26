#include <iostream>

using namespace std;

class Auto {
private:
	int year, month, day;
public:
	Auto (int y, int m, int d) {
		this.year = y;
		this.month = m;
		this.day = d;

		get();
		cout << endl;
	}

	Auto () {
		cout << "Конструктор по умолчанию, без параметров!" << endl;
	}

	void message () {
		cout << "Class is working!" << endl;
	}

	void set (int date_year, int date_month, int date_day) {
		year = date_year;
		month = date_month;
		day = date_day;
	}

	void get () {
		cout << "Year of this auto is - " << year << ", month is - " << month;
		cout << ", day is - " << day << endl;
	}

	
	/*
		это деструктор он нужен для освобождения памяти впереди него указывается
		знак ~
	*/
	~Auto () {
		cout << "Этот блок кода выполняется при уничтожение класса" << endl;
	}
}

int main (int argc, const char * argv[]) {

	Auto shkoda(2001, 2, 19);
	shkoda.message();
	shkoda.set(2005, 11, 23);

	Auto bmw = new Auto(0, 0, 0);
	bmw.get(2012, 1, 11) // переопределяем переменые обязательно
	bmw.get();

	cin.get();
	return 0;
}