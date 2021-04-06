#include <cassert>
#include <iostream>
using namespace std;

class Fibonacci {
public:
	static int fib_digit(int n) {
		assert(n >= 1);
		int k = 1, last0 = 1, last1 = 1;
		for (int i = 2; i < n; i++) {
			k = (last0 + last1) % 10;
			last1 = last0;
			last0 = k;
		}

		return k;
	}
};

int main(void) {
	int n;
	cin >> n;
    cout << Fibonacci::fib_digit(n) << endl;
	return 0;
}