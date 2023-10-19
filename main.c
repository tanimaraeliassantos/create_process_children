#include <stdio.h>
#include <stdlib.h>

void get_file_name(int k, char * buffer, size_t buflen) {
    snprintf(buffer, buflen, "file_%d.txt", k);
}

int main() {
        const size_t BUFLEN = 50;
        char file_name[BUFLEN];

        for (int i=0; i <= 3; i++) {
            get_file_name(i, file_name, BUFLEN);
            printf("%s\n", file_name);
        }
    }
    
    
    