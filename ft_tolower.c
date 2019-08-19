#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c = c + 32;
		return (c);
	}
	else 
		return (c);
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		printf("Mauvais nombre d'argument puto!\n");
		return(0);
	}
	int a;
	
	a = atoi(av[1]);
	printf("Mine : %d\n", ft_tolower(a));
	printf("Real : %d\n", tolower(a));
	return (0);
}
