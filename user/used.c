/*
Create a user program used that provides the following output:
Used memory: [mem] bytes
Where [mem] is the currently allocated memory value (in bytes), retrieved from the system call
(e.g. 50000).
This program should be found in user/used.c, and requires you to do the normal steps for
adding a user program to xv6.
*/

#include "kernel/types.h"
#include "user/user.h"

int 
main(int argc, char* argv) 
{
    printf("Used memory: %d bytes\n", getusedmem());
    exit(0);
};