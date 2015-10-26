#include "types.h"
#include "stat.h"
#include "user.h"

int main(void) {
	char * ptr = 0;
	int x = *ptr;
	
	printf(1, "%s, %d\n", ptr, x);
	exit();
}
