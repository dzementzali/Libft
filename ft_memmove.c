//#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *s1, const void *s2, int n)
{
	int i;
	char *str1;
	char *str2;
	char *tmp;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (str2[i] && i < n)
	{
		tmp[i] = str2[i];
		i++;
	}
	while (tmp[i])
	{
		str1[i] = tmp[i];
		i++;
	}
	return (str1);

}

int main(int ac, char **av)
{
	(void)ac;
	printf("Mine : %s\n", ft_memmove(av[1], av[2], atoi(av[3])));
	printf("Real : %s\n", memmove(av[1], av[2], atoi(av[3])));
	return(0);
}
