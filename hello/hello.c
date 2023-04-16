#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/neutrino.h>
#include <sys/trace.h>

int main(int argc, char* argv[])
{
	int i, j;

	i = 0;

// Why did you stop working?

	if (argc == 1)
	{
		printf("ERROR: Program has to be run with command-line arguments, for example: \n\n");
		printf("hello This is some text\n");
		trace_logf(0, "Printed hello This is some text");
		return EXIT_FAILURE;
	}

	while (1)
	{
		printf("#%d: ", i++);
		for (j = 1; j < argc; j++)
		{
			printf("%s ", argv[j]);
			trace_logf(1, "Printed The actual entered String");
		}
		printf("\n");
		sleep(1);
	}
	return EXIT_SUCCESS;
}

