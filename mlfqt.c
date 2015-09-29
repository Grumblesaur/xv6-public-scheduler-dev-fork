#include "types.h"
#include "stat.h"
#include "user.h"

int is_prime(int x) {
	int i;
	for (i = 2; i < x; ++i) {
		if (x % i == 0 && i != x) return 0;
	}
	return 1;
}

int main(void) {
	int foo;
	int bar = 0;
	for (foo = 0; foo < 10; ++foo) {
		if (is_prime(foo)) {
			fork();
			getpinfo();
		} else {
			++bar;
		}
		wait();
	}
	return 0;
}
