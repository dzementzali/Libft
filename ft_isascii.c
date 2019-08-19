#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	else 
		return (0);
}

int main()
{
	int c;

	c = 87;
	printf("Mine : %d\n", ft_isascii(c));
	printf("Real : %d\n", isascii(c));
	return(0);
}
