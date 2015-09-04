#include "types.h"
#include "stat.h"
#include "user.h"

int main(void) {
	int n = getsyscallinfo();
	printf(1, "%d system calls made this session.\n", n);
	exit();
}
