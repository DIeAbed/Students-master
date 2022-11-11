#pragma once
#include "includes.h"

using namespace std;

class Student
{
private:
	string fullName;
	string birthDay; //поставить time_t
	int yo;
	string classGroup; //Группа
	string studentCardNum;
public:
	void setFullName(string fullName) {
		if (fullName.find(" ") != string::npos) {
			this->fullName = fullName;
		}
		else {
			cout << "Ошибка: ФИО должно состоять минимум из двух слов." << endl;
		}
	}

	void setBirthDay(string birthDay) {
		if (true) {
			this->birthDay = birthDay;
		}
		else {
			cout << "Ошибка: День рождения должнен содержать две точки." << endl;
		}
	}

	void setYo(int yo) {
		if (yo < 120 && yo > 10) {
			this->yo = yo; 
		}
		else {
			cout << "Ошибка: Вам должно быть меньше 120 и больше 10 лет." << endl;
		}
	}

	void setClassGroup(string classGroup) {
		this->classGroup = classGroup;
	}

	void setStudentCardNum(string studentCardNum) {
		if (sizeof(studentCardNum) / sizeof(studentCardNum[0]) == 5) {
			this->studentCardNum = studentCardNum;
		}
		else {
			cout << "Ошибка: Номер студенческого билета должен содержать 5 символов.";
		}
	}

	string getFullName() {
		return fullName;
	}

	string getBirthDay() {
		return birthDay;
	}

	int getYo() {
		return yo;
	}

	string getClassGroup() {
		return classGroup;
	}

	string getStudentCardNum() {
		return studentCardNum;
	}
};

class academicPerfomance {
private:
	string studentCardNum;
	string programming;
	string economics;
	string phylosophy;
	string dataBases;
	string networkBasics;
public:

};

