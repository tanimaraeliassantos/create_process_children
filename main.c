#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

/// @brief 
/// @param  
/// @return 
int main() {
        pid_t p = fork();
        if(p<0) {
            perror("fork fail");
            exit(1);
        }
        printf("Hello world!, process_id(pid) = %d \n", getpid());
        return 0;
    }