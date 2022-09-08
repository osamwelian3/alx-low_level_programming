#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t myParent_pid;
	
	myParent_pid = getppid();
	printf("%u\n", myParent_pid);
	return (0);
}
