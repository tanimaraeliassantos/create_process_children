#include <stdio.h>
#include <stdlib.h>

int main() {
        int argument = atoi(argv[1]);
        FILE * fPtr;
        char address[50];
        sprintf (address, 49, "file%d.txt", argument);
        fPtr = fopen(address, "w");
    }
    
    
    