#include "utest.h"
#include <iostream>

void UTEST::ASSERT_EQUAL(int a, int b, std::string message){
	this->counter++;
	std::cout << "--------------------------------------- TEST " << this->counter << " ---------------------------------------\n";

	if (a != b) {
		std::cout << "[FAILED]: " << a << " != " << b << "\n";
		this->failed_test++;
	}
	else {
		std::cout << "[PASS]: " << a << " == " << b << "\n";
		this->passed_test++;
	}
	std::cout << "--------------------------------------------------------------------------------------\n";
}

void UTEST::ASSERT_EQUAL(int& a, int& b, std::string message){
	this->counter++;
	std::cout << "--------------------------------------- TEST " << this->counter << " ---------------------------------------\n";

	if (a != b) {
		std::cout << "[FAILED]: " << a << " != " << b << "\n";
		this->failed_test++;
	}

	else {
		std::cout << "[PASS]: " << a << " == " << b << "\n";
		this->passed_test++;
	}
	std::cout << "-----------------------------------------------------------------------------\n";
}

void UTEST::report() {

}
