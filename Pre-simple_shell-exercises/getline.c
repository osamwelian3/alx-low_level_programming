#include <stdio.h>
#include <stdlib.h>

/**
 * main - get command and print it
 *
 *
 *
 */

int input (char *s, int length);

int main()
{
	char *buffer;
	size_t bufsize = 32;
	
	buffer = (char *)malloc(bufsize * sizeof(char));
	
	printf("$: ");
	getline(&buffer, &bufsize, stdin);
	if (!buffer)
	{
		perror("Unable to allocate buffer");
		exit(1);
	}

	printf("%s\n", buffer);
}
