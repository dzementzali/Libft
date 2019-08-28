#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strrchr(const char *str, int c)
{
	char *string;
	char *nul = "";
	int i;

	string =(char *)str; 

	i = 0;
	if (c == 0)
	{
		return(nul);
	}
	if (str[0] == '\0')
	{
		return (NULL);
	}
	while (string[i])
	{
		while (string[i] == c)
		{
			if (string[i + 1] == c)
			{
				i++;
			}
			else	
				return (&string[i]);
		}
		i++;
	}
	return (NULL);

}

int main(int ac, char **av)
{
	int a;
	a = atoi(av[2]);

	if (ac != 3)
	{
		printf("Puto!\n");
	}

	printf("Strrchr : %s\n", strrchr(av[1], a));
	printf("Strchr : %s\n", strchr(av[1], a));
	printf("Mine : %s\n", ft_strrchr(av[1], a));
	return (0);
}
