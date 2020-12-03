// Lab1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Exam.h"

using namespace std;

int main()
{
    Exam exam = Exam();
    Exam* p_exam = new Exam(new char[] {"Long name"}, 123, 5);
    Exam* copied_exam = new Exam(p_exam);
    //cout << p_exam->get_name() << " " << p_exam->get_date() << " " << p_exam->get_grade();
    exam.print();
    p_exam->print();
    copied_exam->print();

    int(Exam::*function_pointer)();
    function_pointer = &Exam::get_date;
    cout << "Showing date via function pointer:" << (p_exam->*function_pointer)() << endl;
    function_pointer = &Exam::get_grade;
    cout << "Showing grade via function pointer:" << (p_exam->*function_pointer)() << endl;

    delete p_exam;
    delete copied_exam;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
