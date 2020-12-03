#include "Exam.h"
#include <stdio.h>

Exam::Exam()
{
	printf("Constructor without parameters\n");
	name = new char[] {"Default name"};
	date = 0;
	grade = 2;
}

Exam::Exam(char* a_name, int a_date, int a_grade)
{
	printf("Constructor with parameters\n");
	name = a_name;
	date = a_date;
	grade = a_grade;
}

Exam::Exam(Exam* a_exam)
{
	printf("Copy contsructor\n");

	char* a_name = a_exam->get_name();
	int a_name_size = 0;
	while (*(a_name + a_name_size) != '\0') 
	{
		a_name_size++;
	}
	name = new char[a_name_size + 1];
	for (int i = 0; i < a_name_size; ++i) 
	{
		name[i] = a_name[i];
	}
	*(name + a_name_size) = '\0'; // name = a_exam.get_name();

	date = a_exam->get_date();
	grade = a_exam->get_grade();
}

Exam::~Exam()
{
	printf("Destructor\n");
	delete name;
}

char* Exam::get_name()
{
	return name;
}

int Exam::get_date()
{
	return date;
}

int Exam::get_grade()
{
	return grade;
}

void Exam::set_name(char* a_name)
{
	name = a_name;
}

void Exam::set_date(int a_date)
{
	date = a_date;
}

void Exam::set_grade(int a_grade)
{
	grade = a_grade;
}

void Exam::print()
{
	printf("Name:%s Date:%d Grade:%d\n", name, date, grade);
}


