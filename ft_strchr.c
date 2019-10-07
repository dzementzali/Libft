#include "libft.h"

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
