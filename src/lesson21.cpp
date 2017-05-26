/*
	Дружественные класс
*/

#include <iostream>

using namespace std;

class Person;

class Dog {
	friend class Person;
private:
	int health = 100;
}

class Person {
public:
	void Damage (Dog &d) {
		d.health -= 20;
		cout << "Helat of the animal is " << d.health << endl;
	}

	void Kill (Dog &d) {
		d.health = 0;
		cout << "Kill Dog " << d.health << endl;
	}

	void Heal (Dog &d) {
		d.health += 30;
		cout << "Healtf of the animal is " << d.health << endl;
	}
}



int main (int argc, const char * argv[]) {

	Dog skuby;
	Person Volodya;
	Voloday.Damage(skuby);
	Voloday.Kill(skuby);
	Voloday.Damage(skuby);
	
	cout << endl;
	Dog haski;
	voloday.Damage(haski);

	cin.get();
	return 0;
}