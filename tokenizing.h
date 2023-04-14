#ifndef _TOKENIZING_H_ //check if _TOKENIZING_H_ is not defined to prevent duplicate
#define _TOKENIZING_H_ // defines _TOKENIZING_H_ to prevent duplicate
#include <stdio.h> // includes the standard input/output library
#include <string.h> // includes the string manipulation library
void tokenizing(void); //declares a function named tokenizing, which takes no arguments and returns void
#endif // ends the if statement to prevent duplicate inclusion

/* This code defines a header file (tokenizing.h). The header file includes two standard C libraries- 'stdio.h' and 'string.h'
The tokenizing() function is declared with a void return type and takes no arguments. It is not defined in this header file
and must be implemented in a separate C file.
The #ifndef and #define directives are used to prevent the header file from being included multiple times in the same program,
which can cause errors. The #endif directive closes the #ifndef block and ends the header file.*/