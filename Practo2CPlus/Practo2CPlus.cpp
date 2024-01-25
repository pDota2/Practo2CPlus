#include <iostream>
#include <cmath>

double add(double a, double b) {
	return a + b;
}

double subtract(double a, double b) {
	return a - b;
}

double divide(double a, double b) {
	if (b != 0) {
		return a / b;
	}
	else {
		std::cerr << "Ошибка: деление на ноль\n";
		return 0;
	}
}

double multiply(double a, double b) {
	return a * b;
}

double power(double base, double exponent) {
	return std::pow(base, exponent);
}

double squareRoot(double x) {
	if (x >= 0) {
		return std::sqrt(x);
	}
	else {
		std::cerr << "Ошибка: нельзя извлечь квадратный корень из отрицательного числа\n";
		return 0;
	}
}

double findPercent(double number) {
	return 0.01 * number;
}

int factorial(int n) {
	if (n == 0 || n == 1) {
		return 1;
	}
	else {
		return n * factorial(n - 1);
	}
}

int main() {
	int choice;
	double num1, num2;

	do {
		std::cout << "Выберите операцию:\n";
		std::cout << "1. Сложение\n";
		std::cout << "2. Вычитание\n";
		std::cout << "3. Частное\n";
		std::cout << "4. Произведение\n";
		std::cout << "5. Возведение в степень\n";
		std::cout << "6. Квадратный корень\n";
		std::cout << "7. 1 процент от числа\n";
		std::cout << "8. Факториал числа\n";
		std::cout << "9. Выйти из программы\n";
		std::cout << "Выбор: ";
		std::cin >> choice;

		switch (choice) {
		case 1:
			std::cout << "Введите два числа: ";
			std::cin >> num1 >> num2;
			std::cout << "Результат: " << add(num1, num2) << "\n";
			break;

		case 2:
			std::cout << "Введите два числа: ";
			std::cin >> num1 >> num2;
			std::cout << "Результат: " << subtract(num1, num2) << "\n";
			break;

		case 3:
			std::cout << "Введите два числа: ";
			std::cin >> num1 >> num2;
			std::cout << "Результат: " << divide(num1, num2) << "\n";
			break;

		case 4:
			std::cout << "Введите два числа: ";
			std::cin >> num1 >> num2;
			std::cout << "Результат: " << multiply(num1, num2) << "\n";
			break;

		case 5:
			std::cout << "Введите основание и показатель степени: ";
			std::cin >> num1 >> num2;
			std::cout << "Результат: " << power(num1, num2) << "\n";
			break;

		case 6:
			std::cout << "Введите число: ";
			std::cin >> num1;
			std::cout << "Результат: " << squareRoot(num1) << "\n";
			break;

		case 7:
			std::cout << "Введите число: ";
			std::cin >> num1;
			std::cout << "Результат: " << findPercent(num1) << "\n";
			break;

		case 8:
			std::cout << "Введите целое число: ";
			std::cin >> choice;
			std::cout << "Результат: " << factorial(choice) << "\n";
			break;

		case 9:
			std::cout << "Программа завершена.\n";
			break;

		default:
			std::cerr << "Ошибка: некорректный выбор операции\n";
		}
	} while (choice != 9);

	return 0;
}
