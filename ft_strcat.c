#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		++j;
	}	
	dest[i] = '\0';
	return (dest);
}

int main(int ac, char **av)
{
	if (ac != 3)
	{
		printf("Mauvais nombre d'argument\n");
	}

	printf("Ma version : %s\n", ft_strcat(av[1], av[2]));
	printf("Real one : %s\n", strcat(av[1], av[2]));
	return (0);

}
