#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *ftxt;
	char * line = NULL;
    	size_t len = 0;
    	ssize_t read;
	ftxt = fopen("./vidu.txt", "r");
	if(ftxt == NULL) {
		printf("Unable to create file\n");
		exit(EXIT_FAILURE);
	}
	int count = 1;
    	while ((read = getline(&line, &len, ftxt)) != -1) {
    		if(count == 4) {
			printf("Retrieved line of length %zu:\n", read);
			printf("%s", line);
			break;
		}
    		count = count + 1;
    	}
    	fclose(ftxt);
	
	return 0;
}
