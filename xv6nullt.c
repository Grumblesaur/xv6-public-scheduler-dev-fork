#include "types.h"
#include "stat.h"
#include "user.h"

int main(void) {
	// initialize ptr to NULL and dereference
	char * ptr = 0;
	
	// this succeeds -- no page fault
	int * y = (int *) malloc(sizeof(int));
	*y = 400;
	printf(1, "%d\n", *y);
	free(y);
	printf(1, "Passed non-null test.\n");
	
	// test system call nullptrs
	read(1, 0, 20);
	printf(1, "Passed read test.\n");
	
	
	// this should cause a page fault
	int x = *ptr;
	
	// this should never happen due to trap activation
	printf(1, "%s, %d\n", ptr, x);
	exit();
}
