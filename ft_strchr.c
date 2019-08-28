#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strchr(const char *str, int c)
{
	char *string;
	int i;

	string =(char *)str;
	i= 0;
	char *nul = "";

	if (c == 0)
	{
		return(nul);
	}

	if (str[0] == '\0')
		return (NULL);

	while (string[i] != '\0' && string[i] != c)
	{
		i++;
	}
	
	if (string[i] == '\0')
		return (NULL);

	return (&string[i]);
}

int	main(int ac, char **av)
{
	if (ac != 3)
	{
		printf("Mauvais nombre d'argument puto!\n");
		return (0);
	}
	int a;

	a = atoi(av[2]);

	printf("Mine : %s\n", ft_strchr(av[1], a));
	printf("Real : %s\n", strchr(av[1], a));
	return (0);

}
