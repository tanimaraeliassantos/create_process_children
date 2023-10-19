#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

#define DATA_SIZE 1000

/// @brief 
/// @param  
/// @return 
int main() {

    FILE * fPtr;
    fPtr = fopen("file1.txt", "w");
    
    if(fPtr ==NULL)
    {
        printf("Unable to create file. \n");
        exit(EXIT_FAILURE);
    }
    else 
    {
        printf("File created successfully \n");
    }

        return 0; 
    }