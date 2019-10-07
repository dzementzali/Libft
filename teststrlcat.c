#include "libft.h"

int	ft_strlcat(char *dst, const char *src, int size)
{
	int		i;
	int		t1;
	int		t2;

	i = 0;
	t1 = ft_strlen(dst);
	t2 = ft_strlen(src);
	if (size - 1 <= t1)
		return (t2 + size);
	while (t1 + i < size - 1)
	{
		dst[t1 + i] = src[i];
		i++;
	}
	dst[t1 + i] = '\0';
	return (t1 + t2);
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		printf("Mauvais nombre d'arg puto!\n");
		return (0);
	}

	printf("%d\n", ft_strlcat(av[1], av[2], atoi(av[3])));
}
