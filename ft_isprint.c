#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (16384);
	}
	else 
		return (0);
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		printf("Mauvais nombre d'arg\n");
		return(0);
	}

	int a;

	a = atoi(av[1]);
	
	printf("Real : %d\n", isprint(a));
	printf("Mine : %d\n", ft_isprint(a));
	return (0);
}
