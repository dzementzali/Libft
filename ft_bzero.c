#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t i;

	i = 0;
	str = (char *)str;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
