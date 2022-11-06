#include "microshell.h"

extern char	**environ;

void	check_argv(int argc, char *argv[])
{
	if (argc != 1)
		exit(1);
}

int	main(int argc, char *argv[]);
{
	t_info	info;

	check_argv(argc, argv);
}