#include <stdio.h> 
#include <stdlib.h> // For exit() 

int main( int argc, char *argv[] ){
 
	char filename[100], c; 
	if(argc > 0) {
		FILE *in, *out;
		for(int i=1; i < argc;i++) {
			printf("%s", argv[i]);
		}
		in = fopen(argv[1], "r");
		out = fopen(argv[3], "w");
		if (in == NULL) 
		{ 
			printf("Cannot open file \n"); 
			exit(0); 
		}
		if(out == NULL)
		{
			exit(0);
		}
		c = fgetc(in);

		while (c != EOF) 
		{
			printf("%c", c);
			fprintf(out, "%c", c);
			c = fgetc(in);
		}
		
		
		fclose(in);
		fclose(out);
		/*
		for(int i = 1; i < argc; i++) {
			FILE *fptr; 


			// Open file 
			fptr = fopen(argv[i], "r"); 
			if (fptr == NULL) 
			{ 
				printf("Cannot open file \n"); 
				exit(0); 
			} 

			// Read contents from file 
			c = fgetc(fptr); 
			while (c != EOF) 
			{ 
				printf ("%c", c); 
				c = fgetc(fptr); 
			}

			fclose(fptr); 
		}
		*/
	}
	return 0; 
}

