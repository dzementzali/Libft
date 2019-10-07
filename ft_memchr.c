#include "libft.h"

void	*ft_memchr(void *str, int c, size_t n)
{
	size_t i;
	char *s;
	char d;

	s =( unsigned char *)str;
	d = (unsigned char)c;

	while(s[i] && i < n)
	{
		if(str[i] == d)
		{
			return(&s);
		}
		i++
	}
	return(NULL);

}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		printf("Hola Puto!!\n");
		return(0);
	}

	printf("Mine : %s\n", ft_memchr(av[1], av[2], atoi(av[3])));
	printf("Real : %s\n", memchr(av[1], av[2], atoi(av[3])));
	return(0);
}
