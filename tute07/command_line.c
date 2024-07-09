// This program prints command line arguments
// Written by Catherine Cheng (z5310517) on 09-07-2024

#include <stdio.h>

int main(int argc, char *argv[]) {

   // ./program hello world 
   // {"./program", "hello", "world"}
   // argv[0] = ./program
   // argv[1][2] = 'l';

   for (int i = 1; i < argc; i++) {
    printf("%s", argv[i]);
   }

    return 0;
}
