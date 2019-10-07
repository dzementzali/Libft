#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;
	char *des;
	char *sour;

	des =(char *)dest;
	sour =(char *)src;

	

	i = 0;
	while (sour[i] && i < n)
	{
		if(sour[i] == (char)c)
			return(des);

		des[i] = sour[i];
		i++;
	}
	return (des);
}

int main(int ac, char **av)
{
	(void)ac;
	printf("Mienne : %d\n", ft_memccpy(av[1], av[2], atoi(av[3]), 5));
	printf("Real : %d\n", memccpy(av[1], av[2], atoi(av[3]), 5));
	return(0);

}
