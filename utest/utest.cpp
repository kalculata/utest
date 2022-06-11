#include "utest.h"
#include <iostream>

void UTEST::ASSERT_EQUAL(int a, int b, std::string message){
	this->counter++;

	if (a != b) {
		std::cout << "---------------------------------------\n";
		std::cout << "[FAILED]: " << a << " != " << b << "\n";
		std::cout << "---------------------------------------\n";
		this->failed_test++;
	}
	else {
		std::cout << "[PASS]: " << a << " == " << b << "\n";
		this->passed_test++;
	}
}

void UTEST::ASSERT_EQUAL(int& a, int& b, std::string message){
	this->counter++;

	if (a != b) {
		std::cout << "---------------------------------------\n";
		std::cout << "[FAILED]: " << a << " != " << b << "\n";
		std::cout << "---------------------------------------\n";
		this->failed_test++;
	}
	else {
		std::cout << "---------------------------------------\n";
		std::cout << "[PASS]: " << a << " == " << b << "\n";
		std::cout << "---------------------------------------\n";
		this->passed_test++;
	}
}

void UTEST::report() {

}
