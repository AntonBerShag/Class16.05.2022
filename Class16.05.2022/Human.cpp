#include <iostream>
#include <string>
using namespace std;

class Integer {
public:
	//�����-�� ���

	//������ �������� ��������
	Integer() {};// ����������� �� ���������
	Integer(bool sing, unsigned units) {};
	Integer(int number) {};
	//������ ��������� ��������
	
	//������� �������� ��������� �������

	//���������� ����������

protected:
	//�����-�� ���
private:
	//�����-�� ���
	//���� ������ � ������ �� ��� ������������
	bool sing;
	unsigned units;
};

class Human {
public:

	Human();

	Human(string name, string surname, int age, int weight)
		:name(name), surname(surname), age(age), weight(weight) { //�����������
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

	//predicate(���������)
	bool isAdoult();

	//operators and traits(�������� - ��������)
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

	cout << "������� ���: ";
	getline(cin, name);
	h.setName(name);
	cout << "������� �������: ";
	getline(cin, surname);
	h.setSurname(surname);
	cout << "������� �������: ";
	cin >> age;
	h.setAge(age);
	cout << "������� ���: ";
	cin >> weight;
	h.setWeight(weight);
	cout << endl;

	cout << "���: " << h.getName() << endl;
	cout << "�������: " << h.getSurname() << endl;
	cout << "�������: " << h.getAge() << endl;
	cout << "���: " << h.getWeight() << endl;

	return 0;
}
