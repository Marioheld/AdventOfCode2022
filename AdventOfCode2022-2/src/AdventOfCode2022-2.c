/*
 ============================================================================
 Name        : AdventOfCode2022-2.c
 Author      : Mario Wegmann
 Version     :
 Copyright   : 2022-10-21
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void clearLine (char* line) {
	for (int i = 0; i < 300; i++) {
		line[i] = '';
	}
}

int main(void) {
	//FILE *output = fopen("output.txt", "w");
	printf("Tag 01\n");
	FILE *input = fopen("input01.txt", "r+");

	/*char cwd[2048];
	   if (getcwd(cwd, sizeof(cwd)) != NULL) {
	       printf("Current working dir: %s\n", cwd);
	   } else {
	       perror("getcwd() error");
	       return 1;
	   }*/

	char* currentLine[300] = {0};

	char readCharacter = '\0';

	int len = 0;

	//printf("%p", input);
	//printf("\n %c", fgetc(input));


	while(readCharacter != EOF) {
		readCharacter = (char) fgetc(input);

		if(readCharacter == '\n') {
			currentLine[len] = '\0';
			printf("\nZahl: %s\n", currentLine);
			len = 0;
			clearLine(currentLine);
		} else if (readCharacter == EOF) {
			break;
		} else {
			currentLine[len] = readCharacter;
			len++;
		}
		printf("%c", readCharacter);
	}

	/*
	char line[MAX_LINE_LEANGH] = {0};

		char c = '\0';
		int len = 0;

		while(c != EOF)
		{
			do
			{
				c = (char) fgetc(input);
				line[len] = c;

			}while(c != '\n' && c != EOF && ++len < MAX_LINE_LEANGH - 1);

			line[len] = '\0';

			pushElement(list, createElement(line));

			len = 0;
		}
		*/
	//fclose(input);
	//fclose(output);

	getchar();

	return EXIT_SUCCESS;
}
