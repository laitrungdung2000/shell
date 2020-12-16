#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main() {
	FILE *ftxt;
	ftxt = fopen("./vidu.txt", "w");
	chmod("./vidu.txt", S_IRWXG);
	
	return 0;
}
