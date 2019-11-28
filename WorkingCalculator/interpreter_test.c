/*
    interpreter_test.c
    Kevin Smith
    26 November 2019
*/

#include "ctap.h"
#include <string.h>
#include "tokenizer.c"
#include "interpreter.c"
TESTS {
	// check to make sure that interpret() outputs a result.
	// accuracy of the interpreter can be tested manually against Google calculator
	interpret();
	FILE *fp = NULL;
	fp = fopen("code.txt", "w"); //overwrite code.txt to be NULL
	ok((fp!=NULL) && (stdout !=NULL), "code.txt isn't NULL and so neither is stdout");
	fclose(fp);		
	
}
