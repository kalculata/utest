#include <string>

class UTEST {
private:
	int counter = 0;
	int passed_test = 0;
	int failed_test = 0;
	bool verbose;
public:
	UTEST(bool verbose = false);
	
	void ASSERT_EQUAL(int a, int b, std::string message = "");
	void report();
};