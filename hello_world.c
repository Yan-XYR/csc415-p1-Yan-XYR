#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#define MYNAME "Yanrui Xu"


int
main(int argc, char const *argv[])
{
    char smsg[128];
    int bytes_formatted, bytes_written;
    bytes_formatted = sprintf(smsg, "CSC415, This program has been written by %s!\n", MYNAME);
    if(bytes_formatted < 0){
        perror("sprintf failed");
        return -45;
    }

    bytes_written = write(1,smsg,bytes_formatted);
    if(bytes_written < 0){
        perror("writted failed");
        return -43;
    }
 
	return 0;
}
