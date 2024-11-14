#include "so_long.h"

void	exit_error(char *msg, char **tab)
{
	if (tab != NULL)
		free_map(tab);
	write(STDERR_FILENO, msg, ft_strlen(msg));
	write(STDERR_FILENO, "\n", 1);
	exit(EXIT_FAILURE);
}

void	free_map(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

void	handler_error(int ac, char **av)
{
	if (ac != 2)
		exit_error("Args Problem", NULL);
	if (ft_strnstr(av[1], ".ber", ft_strlen(av[1])) == NULL)
		exit_error("Error \nWrong extension for map", NULL);
}
