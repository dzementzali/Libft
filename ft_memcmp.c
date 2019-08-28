#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	unsigned char *ss1;
	unsigned char *ss2;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	i = 0;

	if (n == 0)
	{
		return (0);
	}

	while (i < n && ss1[i] == ss2[i])
	{
		i++;
	}
	return (ss1[i] - ss2[i]);
}

int main(int ac, char **av)
{
	int a;
	if (ac != 4)
	{
		printf("Hola puto!\n");
		return (0);
	}

	a = atoi(av[3]);


	printf("Real : %d\n", memcmp(av[1], av[2], a));
	printf("Mine : %d\n", ft_memcmp(av[1], av[2], a));
	return (0);

}
