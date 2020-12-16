 // chdir function is declared 
// inside this header
#include<stdio.h> 
#include<unistd.h> 
int main(int argc, char *argv[])
{ 
	printf("%s", argv[1]);
	chdir("..");
	
	return 0; 
} 

