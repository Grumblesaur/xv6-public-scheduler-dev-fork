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
	int foo, baz;
	for (foo = 0; foo < 20; ++foo) {
		fork();
	}
	for (baz = 0; baz < 200; ++baz) {
		if (is_prime(baz) && baz == 151) {
			getpinfo();
			printf(1, "===========================\n");
			sleep(100);
		}
	}
	wait();
	return 0;
}
