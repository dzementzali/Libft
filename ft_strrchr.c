#include "libft.h"

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
		return (nul);
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
