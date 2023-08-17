#include<iostream>



void say_hi() {
	std::cout << "Hello World!" << std::endl;
	std::cout << "Bye World!" << std::endl;
	}
int sum(int num1,int num2) {

	 return  num1 + num2;
}
bool even(int num) {
	if (num % 2 == 0)
		return true;
	return false;
}
void print_arr(int arr[], const int length) {
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ' ';
	std::cout << std::endl;


}
void mult_x5(int variable ) { //variable  - параметр функции 
	variable *= 5;
}
void arr_x5(int arr[]) {
	arr[1] *= 5;

}
void positive_indexes(int arr[],const int length) {
	for (int i = 0; i < length; i++)
		if (arr[i] > 0)
			std::cout << i << ' ';
		std::cout << std::endl;
}
long long  factorial(int num) {
	long long result = 1;
	for (int i = 2; i <= num; i++)
		result *= 1;
	return 	result;

}



int main() {
	setlocale(LC_ALL, "RU");
	int n;
	
	//Простые функции
	/*say_hi();
	say_hi();
	say_hi();

	sum(10,5);
	std::cout << "10 + 5 = " << sum(10 , 5) << std::endl;
	std::cout << "10 + 15 = " << sum(10, 15) << std::endl;
	std::cout << "\n\n Введите число -> ";
	std::cin >> n;
	if (even(n))
		std::cout << "Число четное \n\n";
	else
		std::cout << "Число нечетное\n\n";
		*/

	//функции работающие с массивами
	/*const int size = 5;
	int arr[size]{ 10,7,20,8,11 };
	std::cout << "Массив:\n";
	print_arr(arr,size);
	*/

	//Переменные  массивы как аргументы функции 
	/*
	n = 10;
	std::cout << "n = " << n << std::endl;//10
	mult_x5(n);// n - это аргумент функции 
	std::cout << "n = " << n << std::endl;//10 так как параметры - лишь копии аргументов
	
	std::cout << "_________________________\n";


	int my_arr[3]{ 10,20,30 };
	print_arr(my_arr, 3);//10.20.30
	arr_x5(my_arr);
	print_arr(my_arr, 3);//10.20.30 
	*/

	
	//задача 1. индексы положительных элементов
	/*
	std::cout << "задача 1\nМассив:\n";
	const int size1 = 6;
	int arr1[size1]{ 0,-2,45,66,-99,13 };
	print_arr(arr1, size1);
	std::cout << "Индексы положительных элементов: \n";
	positive_indexes(arr1, size1);
	std::cout << '\n';
	*/
	
	//задача 2.факториал числа
	std::cout << "задача 2.\nВведите число -> ";
	std::cin >> n;
	std::cout << n << "! = " << factorial(n) << std::endl;
		





















	return 0;
}