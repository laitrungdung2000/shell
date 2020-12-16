// C program to find the size of file 
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <time.h>

long int findSize(char file_name[]) 
{ 
	// opening the file in read mode 
	FILE* fp = fopen(file_name, "r");

	// checking if the file exist or not 
	if (fp == NULL) { 
		printf("File Not Found!\n"); 
		return -1; 
	} 

	fseek(fp, 0L, SEEK_END);

	// calculating the size of the file 
	long int res = ftell(fp); 

	// closing the file 
	fclose(fp); 

	return res; 
} 

// Driver code 
int main() 
{ 
	char file_name[20];
	struct stat stats;

	printf("Nhap ten file:");
	scanf("%s", file_name);
	if (stat(file_name, &stats) == 0)
	{
		if (stats.st_mode & R_OK)
        		printf("read ");
    		if (stats.st_mode & W_OK)
        		printf("write ");
    		if (stats.st_mode & X_OK)
        		printf("execute");
	}
	long int res = findSize(file_name); 
	if (res != -1) 
		printf("Size of the file is %ld bytes \n", res);
	
	return 0; 
} 

