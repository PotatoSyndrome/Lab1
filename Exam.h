#pragma once
class Exam
{
private:
	char *name;
	int date;
	int grade;
public:
	Exam();
	Exam(char*, int, int);
	Exam(Exam*);
	~Exam();

	char* get_name();
	int get_date();
	int get_grade();

	void set_name(char*);
	void set_date(int);
	void set_grade(int);

	void print();
};

