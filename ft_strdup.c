#include "libft.h"

void	ft_strcpy(char *s1, char *s2)
{
	int i = 0;
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
}
int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
	{
		i++;
	}
	return(i);
}

char *ft_strdup(char *src)
{
	int i = 0;
	char *dest;

	if (!(dest = (char *)malloc(sizeof(char) * ft_strlen(src))))
	       return (NULL);
	while (src[i] != '\0')
	{
		ft_strcpy(src, dest);
		i++;
	}	
	return(dest);
}
