#include <stdio.h>
#include <stdlib.h>

#define DATA_SIZE 1000

int main()
{
    /* Variable to store user content */
    char data[DATA_SIZE];
    char line[1024];


    /* File pointer to hold reference to our file */
    FILE * fPtr, *ftxt;

    /* 
     * Open file in w (write) mode. 
     * "data/file1.txt" is complete path to create file
     */
    fPtr = fopen("./vidu.doc", "w");
    ftxt = fopen("./vidu.txt", "r");


    /* fopen() return NULL if last operation was unsuccessful */
    if(fPtr == NULL)
    {
        /* File not created hence exit */
        printf("Unable to create file.\n");
        exit(EXIT_FAILURE);
    }


    /* Input contents from user to store in file */
//    printf("Enter contents to store in file : \n");
    //fgets(data, DATA_SIZE, stdin);
    //fscanf(ftxt, %1023[^\n], line);
    fscanf(ftxt, "%1023[^\n]", line);
    //fgets(data, DATA_SIZE, line);


    /* Write data to file */
    fputs(line, fPtr);


    /* Close file to save file data */
    fclose(fPtr);


    /* Success message */
    printf("File created and saved successfully. :) \n");


    return 0;
}
