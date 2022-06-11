#include <iostream>
#include "utest/utest.h"

int main() {
	auto utest = UTEST();

	utest.ASSERT_EQUAL(1, 2, "just checking");
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
	utest.ASSERT_EQUAL(5, 5);
	utest.ASSERT_EQUAL(5, 5);
	utest.ASSERT_EQUAL(5, 5);
	utest.ASSERT_EQUAL(5, 5);
	utest.ASSERT_EQUAL(5, 5);
	utest.ASSERT_EQUAL(5, 5);
	utest.ASSERT_EQUAL(5, 5);

	utest.report();
}