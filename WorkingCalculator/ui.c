/*
    ui.c
    Kevin Smith
    26 November 2019
*/

#include <stdio.h>
#include <stdlib.h> 
#include "infixtopostfix.h"
#include "codegen.h"
#include "interpreter.h"

int main()
{
	// get user input
	FILE *output = fopen("infix.txt", "w");		
	char buf[500]; 							//allocate space for input
    fgets(buf, 500, stdin); 				//get user input
    //printf("input: %s\n", buf); 
    fputs(buf, output); 					//put user input to infix.txt
    fclose(output);
	
	//convert infix to postfix
	testinfixtopostfix();
	//convert postfix to codes that can be read by the interpreter
	codegen();
	//evaluate the expression according to the order of operations
	interpret();
}