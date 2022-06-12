#include <iostream>
#include "utest/utest.h"

int test() {
	return 2;
}

int main() {
	auto utest = UTEST();

	utest.ASSERT_EQUAL(test(), 2, "just checking");
	utest.ASSERT_EQUAL(2, 5);
	utest.ASSERT_EQUAL(5, 5);
	utest.ASSERT_EQUAL(5, 5);
	utest.ASSERT_EQUAL(5, 5);
	utest.ASSERT_EQUAL(5, 5);
	utest.ASSERT_EQUAL(5, 5);
	utest.ASSERT_EQUAL(5, 4);
	utest.ASSERT_EQUAL(5, 5);
	utest.ASSERT_EQUAL(5, 5);
	utest.ASSERT_EQUAL(5, 5);
	utest.ASSERT_EQUAL(5, 5);
	utest.ASSERT_EQUAL(5, 5);
	utest.ASSERT_EQUAL(5, 5);
	utest.ASSERT_EQUAL(5, 5);
	utest.ASSERT_EQUAL(5, 5);
	utest.ASSERT_EQUAL(5, 5);
	utest.ASSERT_EQUAL(5, 5);
	utest.ASSERT_EQUAL(5, 5);
	utest.ASSERT_EQUAL(5, 5);
	utest.ASSERT_EQUAL(5, 5);
	utest.ASSERT_EQUAL(5, 5);
	utest.ASSERT_EQUAL(5, 5);
	utest.ASSERT_EQUAL(5, 5);
	utest.ASSERT_EQUAL(5, 5);
	utest.ASSERT_EQUAL(5, 5);

	utest.report();
}