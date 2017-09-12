#include <stdio.h>
#include <stdlib.h>

int
main(void)
{
	size_t nbytes = 100;
	char *str = (char *) malloc(nbytes + 1);
	if (getline(&str, &nbytes, stdin) != -1) {
		puts(str);
		return 0;
	}
	return -1;
}

