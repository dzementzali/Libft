#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
int main()
{
	/*if (ac != 4)
	{
		printf("Mauvais nombre d'arg\n");
		return (0);
	}

	
	int a;

	a = atoi(av[3]);*/

	char s1[] = "567890000";
	char s2[] = "1234";

	/*printf("Real : %s\n", strncat(av[1], av[2], a));
	printf("Mine : %s\n", ft_strncat(av[1], av[2], a));*/

	
	printf("Mine : %s\n", ft_strncat(s2, s1, 5));
	printf("Real : %s\n", strncat(s2, s1, 5));
	return (0);
}
