#include "libft.h"

int main(int ac, char **av)
{
	printf("Strlcat : %zu\n", strlcat(av[1], av[2], atoi(av[3])));
	return(0);
}
