#include <iostream>
int main() {
	int actnum = 50;
	std::cout << "Default: " << actnum << std::endl;
	int* num = new int;
	std::cout << "Next Value: " << num << std::endl;
	*num = 25;
	std::cout << "Next Value: " << *num << std::endl;
	
	delete num;
	std::cout << "Next Value: " << num << std::endl;
	std::cout << "Next Value: " << *num << std::endl;
	num = nullptr;
	std::cout << "Next Value: " << num << std::endl;
	std::cout << "Next Value: " << *num << std::endl;
	
	return 0;	
}
