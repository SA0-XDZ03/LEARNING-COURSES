#include <iostream>
int main() {
	std::string name;
	int age;
	int id_num;
	int incrementer;
	
	std::cout << "Enter Name: ";
	std::cin >> name;
	
	std::cout << "Enter Age: ";
	std::cin >> age;
	
	std::cout << "Enter ID: ";
	std::cin >> id_num;
	
	if (id_num > 0000 && id_num < 0010) {
		std::cout << "Executive Number: " << id_num << std::endl;
		for (int incrementer = 1; incrementer < 10; incrementer++) {
			std::cout << "Iteration: " << incrementer << std::endl;
			std::cout << "Auth Number: " << id_num + incrementer << std::endl;
		}
	} else if (id_num == 0000) {
		std::cout << "Admin Number: " << id_num << std::endl;
		for (int incrementer = 1; incrementer < 10; incrementer++) {
			std::cout << "Iteration: " << incrementer << std::endl;
			std::cout << "Auth Number: " << id_num + incrementer << std::endl;
		}
	} else {
		std::cout << "Employee Number: " << id_num << std::endl;
		for (int incrementer = 1; incrementer < 10; incrementer++) {
			std::cout << "Iteration: " << incrementer << std::endl;
			std::cout << "Auth Number: " << id_num + incrementer << std::endl;
		}
	}
	return 0;
}
