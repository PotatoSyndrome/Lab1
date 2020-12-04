#define _CRT_SECURE_NO_WARNINGS

#include "Exam.h"
#include <stdio.h>
#include <string.h>

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
	set_name(a_name);
	
	date = a_date;
	grade = a_grade;
}

Exam::Exam(Exam* a_exam) 
{
	printf("Copy contsructor\n");
	
	if (a_exam != NULL)
	{
		set_name(a_exam->get_name());

		date = a_exam->get_date();
		grade = a_exam->get_grade();
	}
	else
	{
		name = new char[] {"Default name"};
		date = 0;
		grade = 2;
	}
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

	delete name;

	if (a_name != NULL)
	{
		name = new char[strlen(a_name) + 1];
		strcpy(name, a_name); // name = a_exam.get_name();
	}
	else
	{
		name = new char[] {"Default name"};
	}
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