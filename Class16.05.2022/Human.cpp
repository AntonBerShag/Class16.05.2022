#include <iostream>
#include <string>
using namespace std;

class Integer {
public:
	//какой-то код

	//спосбы создания объектов
	Integer() {};// конструктор по умолчанию
	Integer(bool sing, unsigned units) {};
	Integer(int number) {};
	//спосбы обработки объектов
	
	//способы проверки состояний объекта

	//перегрузка операторов

protected:
	//какой-то код
private:
	//какой-то код
	//поля данных и методы не для пользователя
	bool sing;
	unsigned units;
};

class Human {
public:

	Human();

	Human(string name, string surname, int age, int weight)
		:name(name), surname(surname), age(age), weight(weight) { //конструктор
		/*this->name = name;
		this->surname = surname;
		this->age = age;
		this->weight = weight;*/
	}

	Human(string name, string surname) {
		name = name;
		surname = surname;
		age = int();
		weight = int();
	}

	//setters and getters
	void setName(string name) {
		this->name = name;
	}
	string getName() const {
		return name;
	}
	
	void setSurname(string surname) {
		this->surname = surname;
	}
	string getSurname() const {
		return surname;
	}

	void setAge(int age) {
		this->age = age;
	}
	int getAge() const {
		return age;
	}

	void setWeight(int weight) {
		this->weight = weight;
	}
	int getWeight() const {
		return weight;
	}

	//predicate(предикаты)
	bool isAdoult();

	//operators and traits(трейтеры - свойства)
	friend bool operator == (Human a, Human b);
	bool olderThen(int age);

private:
	string name;
	string surname;
	int age;
	int weight;
};

int main() {
	setlocale(LC_ALL, "Russian");

	Human h = { "Sam", "Solid", 24, 76 };

	string name;
	string surname;
	int age;
	int weight;

	cout << "Введите имя: ";
	getline(cin, name);
	h.setName(name);
	cout << "Введите фамилию: ";
	getline(cin, surname);
	h.setSurname(surname);
	cout << "Введите возраст: ";
	cin >> age;
	h.setAge(age);
	cout << "Введите вес: ";
	cin >> weight;
	h.setWeight(weight);
	cout << endl;

	cout << "Имя: " << h.getName() << endl;
	cout << "Фамилия: " << h.getSurname() << endl;
	cout << "Возраст: " << h.getAge() << endl;
	cout << "Вес: " << h.getWeight() << endl;

	return 0;
}
