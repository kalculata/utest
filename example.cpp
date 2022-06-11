#include <iostream>
#include "utest/utest.h"

int main() {
	auto utest = UTEST();

	utest.ASSERT_EQUAL(1, 2);

	utest.report();
}