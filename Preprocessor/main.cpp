#include <iostream>
#include "first.h"

#pragma warning 

#define E 2.72 // константа препроцессора
//бесконечный цикл с растущей перенмееной loopindex
#define forever for(unsigned long long loopindex = 0ULL;; loopindex ++)
#define begin {
#define end }

#define print_arr(arr, length)\
	for (int i = 0; i < length; i++)\
		std::cout<< arr[i] << ' ';\
	std::cout << std::endl;

// Это одностройчный комментарий, разбитый \ на две строчки с помощью продления комментария.

//макрос
#define sum(a, b) a + b 

int main() {
	setlocale(LC_ALL, "Russiuan");
	int n, m;

	//Константы и конструкции define
	/*std::cout << "E = " << E << std::endl;
	n = E * 2;
	std::cout << "n = " << n << std::endl;

	forever begin
		std::cout << loopindex;
		std::cout << "Hello World!";
	end

//#undef E //удаление объекта Е

	//std::cout << E << std::endl; // ошибка, т.к. объект Е удален 

//#define E 3

	std::cout << "E = " << E << std::endl;*/

	//Макросы define
	n = 7; m = 15;
	std::cout << sum(n, m) << std::endl;

	const int size = 5;
	int arr[size]{ 1, 3, 5, 6 , 7 };
	print_arr(arr, size);


	std::cout << __LINE__ << std::endl; //53
	std::cout << __LINE__ << std::endl; //54
	std::cout << __DATE__ << std::endl; // дата сборки проекта
	std::cout << __FILE__ << std::endl; //путь к файлу
	
	return 0;
}