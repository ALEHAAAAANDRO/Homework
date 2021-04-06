#include <cassert>
#include <iostream>
using namespace std;

class Fibonacci {
public:
	static int ost_del(int n, int m) {
		assert(n >= 1);
		int k = 1, last0 = 1, last1 = 1;
		for (int i = 2; i < n; i++) {
			k = (last0 + last1) % m;
			last1 = last0;
			last0 = k;
		}

		return k;
	}
};

int main(void) {
	int n;
	int m;
	cin >> n >> m;
	cout << Fibonacci::ost_del(n, m) << endl;
	return 0;
}