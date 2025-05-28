#include <iostream>

class Pointer {
	public:
		std::string descript;
		int value;
		int* pointer = &value;
		void pointerVal() {
			std::cout << "Description: " << descript << std::endl;
			std::cout << "Value: " << value << std::endl;
			std::cout << "Pointer Address: " << pointer << std::endl;
			std::cout << "Value via Pointer: " << *pointer << std::endl;
		}
};

int main() {
	Pointer P1;
	P1.descript = "This is Class & Pointer Program";
	P1.value = 100;
	P1.pointerVal();

	return 0;
}

