#include <cassert>
#include <iostream>
using namespace std;

template <class Int>
Int gcd(Int a, Int b) {
	assert(a > 0);
	if (b > 0) {
		return gcd(b, a % b);
	}
	return a;
}

int main(void) {
	int a, b;
	cin >> a >> b;
	cout << gcd(a, b) << endl;
	return 0;
}