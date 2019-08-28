#include <string.h>
#include <stdio.h>

void	ft_memcpy(void *dest, const void *src, siize_t n)
{
	size_t     i;
	char	*s;
	char	*d;

	s = (* char)src;
	d = (* char)dest;

	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
}