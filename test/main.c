#include <stdio.h>
#include <string.h>
#include "tests.h"

static void	print_usage(const char *progname)
{
	printf("Usage: %s <function>\n", progname);
	printf("Available tests:\n");
	printf(BLUE"  strlen\n"RESET);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		print_usage(argv[0]);
		return (1);
	}
	
	if (strcmp(argv[1], "strlen") == 0)
		return (run_strlen_tests());
	
	printf(RED"Unknown test: %s\n"RESET, argv[1]);
	print_usage(argv[0]);
	return (1);
}