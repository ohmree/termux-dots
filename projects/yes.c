#include <stdio.h>

int main(int argc, char* argv[]) {
	if(argc == 1) {
		for(int i=0;i<=20;i++) puts("y");
	} else {
		for(int i=0;i<=20;i++) puts((char*)argv[1]);
	}
	printf("\n");
	return 0;
}
