#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c = c - 32;
		return (c);
	}

	else 
		return (c);
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		printf("Mauvais nombre d'arg\n");
		return (0);
	}
	int a;
	
	a = atoi(av[1]);

	printf("Mine : %d\n", ft_toupper(a));
	printf("Real : %d\n", toupper(a));
	return (0);
}
