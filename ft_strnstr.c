#include "libft.h"
#include <unistd.h>
#include <stdio.h>

int main(int ac, char **av)
{
	if(ac != 4)
	{
		printf("Mauvais nombre d'argument puto!!");
		return(0);
	}

	printf("%u\n", strnstr(av[1], av[2], atoi(av[3])));
	return(0);
}
