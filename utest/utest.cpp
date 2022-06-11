#include "utest.h"
#include <iostream>

void UTEST::ASSERT_EQUAL(int a, int b, std::string message){
	this->counter++;
	std::string notice;

	std::cout << "--------------------------------------- TEST " << this->counter << " ---------------------------------------\n";

	if (a != b) {
		if (!message.empty())
			notice = " ( " + message + " )";
		else
			notice = "";

		std::cout << "[FAILED]: " << a << " != " << b << notice << "\n";
		this->failed_test++;
	}
	else {
		std::cout << "[PASS]\n";
		this->passed_test++;
	}
}

void UTEST::ASSERT_EQUAL(int& a, int& b, std::string message){
	this->counter++;
	std::string notice;


	std::cout << "--------------------------------------- TEST " << this->counter << " ---------------------------------------\n";

	if (a != b) {
		if (!message.empty())
			notice = " ( " + message + " )";
		else
			notice = "";

		std::cout << "[FAILED]: " << a << " != " << b << notice << "\n" ;
		this->failed_test++;
	}

	else {
		std::cout << "[PASS]\n";
		this->passed_test++;
	}
}

void UTEST::report() {

}
