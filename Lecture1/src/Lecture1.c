/*
 ============================================================================
 Name        : Lecture1.c
 Author      : Quoc
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char ch;
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	printf("%c\n",'\x41');
	printf("type a character: ");
	scanf("%c", &ch);
	switch(ch) {
	case 'y':
		printf("you typed 'y'.\n");
		break;
	case 'n':
		printf("You typed 'n'.\n");
		break;
	default:
		printf("You typed something else.\n");
		break;
	}
	return EXIT_SUCCESS;
}
